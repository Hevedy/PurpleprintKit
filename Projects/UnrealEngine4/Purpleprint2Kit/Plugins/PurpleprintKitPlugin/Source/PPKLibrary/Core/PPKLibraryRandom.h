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
PPKLibraryRandom.h
================================================
*/


#pragma once

#include <chrono>
#include <random>
#include <math.h>

#include "PPKLibraryRandom.generated.h"

UCLASS()
class PPKLIBRARY_API UPPKLibraryRandom : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

	UPPKLibraryRandom( const FObjectInitializer& ObjectInitializer );
private:

protected:

public:

	/** Build the random function seeds */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Random" )
		static void BuildRandom();

	/** Create the random seed */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Random" )
		static void CreateRandomSeed( int32 Seed );

	/** Update the random seed by time */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Random" )
		static void RandomSeedByTime();

	/** Update the random seed by entropy */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Random" )
		static void RandomSeedByEntropy();

	/** Returns a bool value using the Uniform method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Bool (Uniform)" ), Category = "PP2KLibrary|Math|Random" )
		static bool RandomBool_Uniform();

	/** Returns a bool value using the Bernoulli method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Bool (Bernoulli)" ), Category = "PP2KLibrary|Math|Random" )
		static bool RandomBool_Bernoulli( const float Bias = 0.5f );

	/** Returns a bool value using the Bernoulli Twister method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Bool (Mersenne Twister)" ), Category = "PP2KLibrary|Math|Random" )
		static bool RandomBool_MersenneTwister( const float Bias = 0.5f );

	/** Returns a uint8 in the range 0 to X value using the Uniform method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Byte (Uniform)" ), Category = "PP2KLibrary|Math|Random" )
		static uint8 RandomByte_Uniform( const uint8 Max );

	/** Returns a uint8 in the range 0 to 1 value using the Bernoulli method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Byte (Bernoulli)" ), Category = "PP2KLibrary|Math|Random" )
		static uint8 RandomByte_Bernoulli( const float Bias = 0.5f );

	/** Returns a uint8 in the range 0 to 1 value using the Bernoulli Twister method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Byte (Mersenne Twister)" ), Category = "PP2KLibrary|Math|Random" )
		static uint8 RandomByte_MersenneTwister( const float Bias = 0.5f );

	/** Returns a int32 in the range 0 to X value using the Uniform method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Integer (Uniform)" ), Category = "PP2KLibrary|Math|Random" )
		static int32 RandomInt_Uniform( const int32 Max );

	/** Returns a int32 in the range 0 to 1 value using the Bernoulli method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Integer (Bernoulli)" ), Category = "PP2KLibrary|Math|Random" )
		static int32 RandomInt_Bernoulli( const float Bias = 0.5f );

	/** Returns a int32 in the range 0 to 1 value using the Bernoulli Twister method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Integer (Mersenne Twister)" ), Category = "PP2KLibrary|Math|Random" )
		static int32 RandomInt_MersenneTwister( const float Bias = 0.5f );

	/** Returns a float in the range 0.0 to X.X value using the Uniform method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Float (Uniform)" ), Category = "PP2KLibrary|Math|Random" )
		static float RandomFloat_Uniform( const float Max );

	/** Returns a float in the range 0.0 to 1.0 value using the Canonical method */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Random Float (Canonical)" ), Category = "PP2KLibrary|Math|Random" )
		static float RandomFloat_Canonical();
		
};