/*
===========================================================================
This code is part of the "Source Code" content in
Purpleprint 2 - Kit by Hevedy <https://github.com/Hevedy>
<https://github.com/Hevedy/PurpleprintKit>

The MIT License (MIT)
Copyright (c) 2014-2016 Hevedy <https://github.com/Hevedy>
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
===========================================================================
*/

/*
================================================
PPKLibraryRandom.cpp
================================================
*/


#include "PPKLibraryPrivatePCH.h"
#include "PPKLibraryRandom.h"

#include <chrono>
#include <random>


// TODO More nodes in the future Beta versions

UPPKLibraryRandom::UPPKLibraryRandom( const class FObjectInitializer& ObjectInitializer ) {

}

std::random_device RandRD;
std::default_random_engine RandDRE;
std::mt19937 RandPRNG;
std::mt19937 RandPRNG_RD( RandRD() );
unsigned RandGSeed = std::chrono::system_clock::now().time_since_epoch().count();

void UPPKLibraryRandom::BuildRandom() {
	RandGSeed = std::chrono::system_clock::now().time_since_epoch().count();
	if ( RandRD.entropy() == 0 ) {
		CreateRandomSeed( RandGSeed );
	} else {
		CreateRandomSeed( RandRD() );
	}
}

void UPPKLibraryRandom::CreateRandomSeed( int32 Seed ) {
	RandGSeed = Seed;
}

void UPPKLibraryRandom::RandomSeedByTime() {
	RandGSeed = std::chrono::system_clock::now().time_since_epoch().count();
}

void UPPKLibraryRandom::RandomSeedByEntropy() {
	CreateRandomSeed( RandDRE() );
}

bool UPPKLibraryRandom::RandomBool_Uniform() {
	std::uniform_int_distribution<int32> d( 0, 1 );
	return (d( RandDRE ) == 1) ? true : false;
}

bool UPPKLibraryRandom::RandomBool_Bernoulli( const float Bias ) {
	std::bernoulli_distribution d( Bias );
	return d( RandDRE );
}

bool UPPKLibraryRandom::RandomBool_MersenneTwister( const float Bias ) { //Works
	std::bernoulli_distribution d( Bias );
	return d( RandPRNG );
}

uint8 UPPKLibraryRandom::RandomByte_Uniform( const uint8 Max ) {
	std::uniform_int_distribution<> d( 0, Max == 0 ? sizeof( uint8 ) : Max );
	return d( RandDRE );
}

uint8 UPPKLibraryRandom::RandomByte_Bernoulli( const float Bias ) {
	std::bernoulli_distribution d( Bias );
	return d( RandDRE );
}

uint8 UPPKLibraryRandom::RandomByte_MersenneTwister( const float Bias ) {
	std::bernoulli_distribution d( Bias );
	return d( RandPRNG );
}

int32 UPPKLibraryRandom::RandomInt_Uniform( const int32 Max ) {
	std::uniform_int_distribution<> d( 0, Max == 0 ? sizeof( int32 ) : Max );
	return d( RandDRE );
}

int32 UPPKLibraryRandom::RandomInt_Bernoulli( const float Bias ) {
	std::bernoulli_distribution d( Bias );
	return d( RandDRE );
}

int32 UPPKLibraryRandom::RandomInt_MersenneTwister( const float Bias ) {
	std::bernoulli_distribution d( Bias );
	return d( RandPRNG );
}

float UPPKLibraryRandom::RandomFloat_Uniform( const float Max ) {
	std::uniform_real_distribution<> d( 0.0f, Max == 0 ? sizeof( float ) : Max );
	return d( RandDRE );
}

float UPPKLibraryRandom::RandomFloat_Canonical() {
	return std::generate_canonical<double, 10>( RandDRE );
}