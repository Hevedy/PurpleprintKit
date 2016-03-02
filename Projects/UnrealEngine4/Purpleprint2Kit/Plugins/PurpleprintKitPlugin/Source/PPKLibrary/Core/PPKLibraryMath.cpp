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
PPKLibraryMath.cpp
================================================
*/


#include "PPKLibraryPrivatePCH.h"
#include "PPKLibraryMath.h"


UPPKLibraryMath::UPPKLibraryMath( const class FObjectInitializer& ObjectInitializer ) {

}

int32 UPPKLibraryMath::FullRotSector( const float FloatValue, const int32 SectorsNumber ) {
	int32 calcSectors = FMath::TruncToInt( 360 / SectorsNumber );
	int32 calcValue = FMath::TruncToInt( FMath::TruncToInt( FloatValue + 360 ) % 360 );
	return FMath::TruncToInt( calcValue / calcSectors );
}

uint8 UPPKLibraryMath::FullRotSectorByte( const float FloatValue, const int32 SectorsNumber ) {
	return (uint8)FullRotSector( FloatValue, SectorsNumber );
}

int32 UPPKLibraryMath::FullRotSectorInt( const float FloatValue, const int32 SectorsNumber ) {
	return FullRotSector( FloatValue, SectorsNumber );
}

FVector UPPKLibraryMath::FullRotSectorVector( const FVector VectorValue, const FVector SectorsNumber ) {
	return FVector( FullRotSector( VectorValue.X, SectorsNumber.X ),
					FullRotSector( VectorValue.Y, SectorsNumber.Y ),
					FullRotSector( VectorValue.Z, SectorsNumber.Z ) );
}

FVector UPPKLibraryMath::FullRotSectorRotator( const FRotator RotValue, const FVector SectorsNumber ) {
	return FVector( FullRotSector( RotValue.Roll, SectorsNumber.X ),
			 FullRotSector( RotValue.Pitch, SectorsNumber.Y ),
			 FullRotSector( RotValue.Yaw, SectorsNumber.Z ) );
}

int32 UPPKLibraryMath::IntCount( const int32 IntValue ) {
	//return IntValue == 0 ? 1 : FMath::FloorToInt( log10( FMath::Abs( IntValue ) ) ) + 1;
	FString numValue = FString::FromInt( IntValue );
	return numValue.Len();
}

int32 UPPKLibraryMath::FloatCount( const float FloatValue ) {
	//return IntValue == 0 ? 1 : FMath::FloorToInt( log10( FMath::Abs( IntValue ) ) ) + 1;
	FString numValue = FString::SanitizeFloat( FloatValue );
	return numValue.Len() - 1;
}

int32 UPPKLibraryMath::IMakeFullFromHalfRot( const int32 IntValue ) {
	return IntValue < 0 ? IntValue + 360 : IntValue;
}

float UPPKLibraryMath::FMakeFullFromHalfRot( const float FloatValue ) {
	return FloatValue < 0.0f ? FloatValue + 360.0f : FloatValue;
}

int32 UPPKLibraryMath::ICMakeHalfFromFullRot( const int32 IntValue ) {
	return IntValue > 180 ? IntValue - 360 : IntValue;
}

float UPPKLibraryMath::FMakeHalfFromFullRot( const float FloatValue ) {
	return FloatValue > 180.0f ? FloatValue - 360.0f : FloatValue;
}

FRotator UPPKLibraryMath::MakeFullFromHalfRot( const FRotator RotValue ) {
	FRotator value;
	value.Roll = RotValue.Roll < 0.0f ? RotValue.Roll + 360.0f : RotValue.Roll;
	value.Pitch = RotValue.Pitch < 0.0f ? RotValue.Pitch + 360.0f : RotValue.Pitch;
	value.Yaw = RotValue.Yaw < 0.0f ? RotValue.Yaw + 360.0f : RotValue.Yaw;
	return value;
}

FRotator UPPKLibraryMath::MakeHalfFromFullRot( const FRotator RotValue ) {
	FRotator value;
	value.Roll = RotValue.Roll > 180.0f ? RotValue.Roll - 360.0f : RotValue.Roll;
	value.Pitch = RotValue.Pitch > 180.0f ? RotValue.Pitch - 360.0f : RotValue.Pitch;
	value.Yaw = RotValue.Yaw > 180.0f ? RotValue.Yaw - 360.0f : RotValue.Yaw;
	return value;
}

FVector2D UPPKLibraryMath::V2DMakeFullFromHalfRot( const FVector2D Vec2Value ) {
	FVector2D value;
	value.X = Vec2Value.X < 0.0f ? Vec2Value.X + 360.0f : Vec2Value.X;
	value.Y = Vec2Value.Y < 0.0f ? Vec2Value.Y + 360.0f : Vec2Value.Y;
	return value;
}

FVector2D UPPKLibraryMath::V2DMakeHalfFromFullRot( const FVector2D Vec2Value ) {
	FVector2D value;
	value.X = Vec2Value.X > 180.0f ? Vec2Value.X - 360.0f : Vec2Value.X;
	value.Y = Vec2Value.Y > 180.0f ? Vec2Value.Y - 360.0f : Vec2Value.Y;
	return value;
}

FVector UPPKLibraryMath::VMakeFullFromHalfRot( const FVector VecValue ) {
	FVector value;
	value.X = VecValue.X < 0.0f ? VecValue.X + 360.0f : VecValue.X;
	value.Y = VecValue.Y < 0.0f ? VecValue.Y + 360.0f : VecValue.Y;
	value.Z = VecValue.Z < 0.0f ? VecValue.Z + 360.0f : VecValue.Z;
	return value;
}

FVector UPPKLibraryMath::VMakeHalfFromFullRot( const FVector VecValue ) {
	FVector value;
	value.X = VecValue.X > 180.0f ? VecValue.X - 360.0f : VecValue.X;
	value.Y = VecValue.Y > 180.0f ? VecValue.Y - 360.0f : VecValue.Y;
	value.Z = VecValue.Z > 180.0f ? VecValue.Z - 360.0f : VecValue.Z;
	return value;
}

FVector4 UPPKLibraryMath::V4MakeFullFromHalfRot( const FVector4 Vec4Value ) {
	FVector4 value;
	value.X = Vec4Value.X < 0.0f ? Vec4Value.X + 360.0f : Vec4Value.X;
	value.Y = Vec4Value.Y < 0.0f ? Vec4Value.Y + 360.0f : Vec4Value.Y;
	value.Z = Vec4Value.Z < 0.0f ? Vec4Value.Z + 360.0f : Vec4Value.Z;
	value.W = Vec4Value.W < 0.0f ? Vec4Value.W + 360.0f : Vec4Value.W;
	return value;
}

FVector4 UPPKLibraryMath::V4MakeHalfFromFullRot( const FVector4 Vec4Value ) {
	FVector4 value;
	value.X = Vec4Value.X > 180.0f ? Vec4Value.X - 360.0f : Vec4Value.X;
	value.Y = Vec4Value.Y > 180.0f ? Vec4Value.Y - 360.0f : Vec4Value.Y;
	value.Z = Vec4Value.Z > 180.0f ? Vec4Value.Z - 360.0f : Vec4Value.Z;
	value.W = Vec4Value.W > 180.0f ? Vec4Value.W - 360.0f : Vec4Value.W;
	return value;
}

uint8 UPPKLibraryMath::BMin( uint8 A, uint8 B ) {
	return FMath::Min<uint8>( A, B );
}

uint8 UPPKLibraryMath::BMax( uint8 A, uint8 B ) {
	return FMath::Max<uint8>( A, B );
}

uint8 UPPKLibraryMath::BGetCloser( uint8 Ref, uint8 A, uint8 B ) {
	return Closer<uint8>( Ref, A, B );
}

uint8 UPPKLibraryMath::BGetFurther( uint8 Ref, uint8 A, uint8 B ) {
	return Further<uint8>( Ref, A, B );
}

int32 UPPKLibraryMath::IGetCloser( int32 Ref, int32 A, int32 B ) {
	return Closer<int32>( Ref, A, B );
}

int32 UPPKLibraryMath::IGetFurther( int32 Ref, int32 A, int32 B ) {
	return Further<int32>( Ref, A, B );
}

float UPPKLibraryMath::FGetCloser( float Ref, float A, float B ) {
	return Closer<float>( Ref, A, B );
}

float UPPKLibraryMath::FGetFurther( float Ref, float A, float B ) {
	return Further<float>( Ref, A, B );
}

void UPPKLibraryMath::CloserByteArray( const uint8 ByteRefValue, const TArray<uint8>& ByteArray, const bool NotEqual,
									   int32& IndexOfCloserValue, uint8& CloserValue ) {
	CloserValue = Closer<uint8>( ByteRefValue, ByteArray, NotEqual, &IndexOfCloserValue );
}

void UPPKLibraryMath::FurtherByteArray( const uint8 ByteRefValue, const TArray<uint8>& ByteArray, int32& IndexOfFurtherValue,
										uint8& FurtherValue ) {
	FurtherValue = Further<uint8>( ByteRefValue, ByteArray, &IndexOfFurtherValue );
}

void UPPKLibraryMath::CloserIntegerArray( const int32 IntRefValue, const TArray<int32>& IntArray, const bool NotEqual, 
									  int32& IndexOfCloserValue, int32& CloserValue ) {
	CloserValue = Closer<int32>( IntRefValue, IntArray, NotEqual, &IndexOfCloserValue );
}

void UPPKLibraryMath::FurtherIntegerArray( const int32 IntRefValue, const TArray<int32>& IntArray, int32& IndexOfFurtherValue, 
									   int32& FurtherValue ) {
	FurtherValue = Further<int32>( IntRefValue, IntArray, &IndexOfFurtherValue );
}

void UPPKLibraryMath::CloserFloatArray( const float FloatRefValue, const TArray<float>& FloatArray, const bool NotEqual, 
										int32& IndexOfCloserValue, float& CloserValue ) {
	CloserValue = Closer<float>( FloatRefValue, FloatArray, NotEqual, &IndexOfCloserValue );
}

void UPPKLibraryMath::FurtherFloatArray( const float FloatRefValue, const TArray<float>& FloatArray, int32& IndexOfFurtherValue, 
										 float& FurtherValue ) {
	FurtherValue = Further<float>( FloatRefValue, FloatArray, &IndexOfFurtherValue );
}

void UPPKLibraryMath::MinByteArray( const TArray<uint8>& ByteArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMinValue,
									   float& MinValue ) {
	if ( NumberOfIndexToDiscard < 0 || NumberOfIndexToDiscard >= ByteArray.Num() ) {
		IndexOfMinValue = -1; MinValue = -1; return;
	}
	TArray<uint8> localArray = ByteArray; TArray<uint8> localArrayRef;
	int32 minIndex = -1; int32 lastMinIndex = -1; float minValue = -1; int32 numdiff = 0;
	for ( int32 i = -1; i < NumberOfIndexToDiscard; i++ ) {
		minValue = FMath::Min<uint8>( localArray, &minIndex );
		localArrayRef.Add( minIndex );
		localArray.RemoveAt( minIndex );
		lastMinIndex = minIndex;
	}
	for ( int32 i = 0; i < localArrayRef.Num(); i++ ) {
		minIndex = ( localArrayRef[i] < lastMinIndex ) ? minIndex + 1 : minIndex;
	}
	IndexOfMinValue = minIndex; MinValue = minValue;
}

void UPPKLibraryMath::MaxByteArray( const TArray<uint8>& ByteArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMaxValue,
									   float& MaxValue ) {
	if ( NumberOfIndexToDiscard < 0 || NumberOfIndexToDiscard >= ByteArray.Num() ) {
		IndexOfMaxValue = -1; MaxValue = -1; return;
	}
	TArray<uint8> localArray = ByteArray; TArray<uint8> localArrayRef;
	int32 maxIndex = -1; int32 lastMaxIndex = -1; float maxValue = -1; int32 numdiff = 0;
	for ( int32 i = -1; i < NumberOfIndexToDiscard; i++ ) {
		maxValue = FMath::Max<uint8>( localArray, &maxIndex );
		localArrayRef.Add( maxIndex );
		localArray.RemoveAt( maxIndex );
		lastMaxIndex = maxIndex;
	}
	for ( int32 i = 0; i < localArrayRef.Num(); i++ ) {
		maxIndex = ( localArrayRef[i] < lastMaxIndex ) ? maxIndex + 1 : maxIndex;
	}
	IndexOfMaxValue = maxIndex; MaxValue = maxValue;
}

void UPPKLibraryMath::MinIntegerArray( const TArray<int32>& IntArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMinValue,
									 float& MinValue ) {
	if ( NumberOfIndexToDiscard < 0 || NumberOfIndexToDiscard >= IntArray.Num() ) {
		IndexOfMinValue = -1; MinValue = -1; return;
	}
	TArray<int32> localArray = IntArray; TArray<int32> localArrayRef;
	int32 minIndex = -1; int32 lastMinIndex = -1; float minValue = -1; int32 numdiff = 0;
	for ( int32 i = -1; i < NumberOfIndexToDiscard; i++ ) {
		minValue = FMath::Min<int32>( localArray, &minIndex );
		localArrayRef.Add( minIndex );
		localArray.RemoveAt( minIndex );
		lastMinIndex = minIndex;
	}
	for ( int32 i = 0; i < localArrayRef.Num(); i++ ) {
		minIndex = ( localArrayRef[i] < lastMinIndex ) ? minIndex + 1 : minIndex;
	}
	IndexOfMinValue = minIndex; MinValue = minValue;
}

void UPPKLibraryMath::MaxIntegerArray( const TArray<int32>& IntArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMaxValue,
									 float& MaxValue ) {
	if ( NumberOfIndexToDiscard < 0 || NumberOfIndexToDiscard >= IntArray.Num() ) {
		IndexOfMaxValue = -1; MaxValue = -1; return;
	}
	TArray<int32> localArray = IntArray; TArray<int32> localArrayRef;
	int32 maxIndex = -1; int32 lastMaxIndex = -1; float maxValue = -1; int32 numdiff = 0;
	for ( int32 i = -1; i < NumberOfIndexToDiscard; i++ ) {
		maxValue = FMath::Max<int32>( localArray, &maxIndex );
		localArrayRef.Add( maxIndex );
		localArray.RemoveAt( maxIndex );
		lastMaxIndex = maxIndex;
	}
	for ( int32 i = 0; i < localArrayRef.Num(); i++ ) {
		maxIndex = ( localArrayRef[i] < lastMaxIndex ) ? maxIndex + 1 : maxIndex;
	}
	IndexOfMaxValue = maxIndex; MaxValue = maxValue;
}

void UPPKLibraryMath::MinFloatArray( const TArray<float>& FloatArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMinValue, 
									   float& MinValue ) {
	if ( NumberOfIndexToDiscard < 0 || NumberOfIndexToDiscard >= FloatArray.Num() ) {
		IndexOfMinValue = -1; MinValue = -1; return;
	}
	TArray<float> localArray = FloatArray; TArray<int32> localArrayRef;
	int32 minIndex = -1; int32 lastMinIndex = -1; float minValue = -1; int32 numdiff = 0;
	for ( int32 i = -1; i < NumberOfIndexToDiscard; i++ ) {
		minValue = FMath::Min<float>( localArray, &minIndex );
		localArrayRef.Add( minIndex );
		localArray.RemoveAt( minIndex );
		lastMinIndex = minIndex;
	}
	for ( int32 i = 0; i < localArrayRef.Num(); i++ ) {
		minIndex = ( localArrayRef[i] < lastMinIndex ) ? minIndex + 1 : minIndex;
	}
	IndexOfMinValue = minIndex; MinValue = minValue;
}

void UPPKLibraryMath::MaxFloatArray( const TArray<float>& FloatArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMaxValue, 
										float& MaxValue ) {
	if ( NumberOfIndexToDiscard < 0 || NumberOfIndexToDiscard >= FloatArray.Num() ) {
		IndexOfMaxValue = -1; MaxValue = -1; return;
	}
	TArray<float> localArray = FloatArray; TArray<int32> localArrayRef;
	int32 maxIndex = -1; int32 lastMaxIndex = -1; float maxValue = -1; int32 numdiff = 0;
	for ( int32 i = -1; i < NumberOfIndexToDiscard; i++ ) {
		maxValue = FMath::Max<float>( localArray, &maxIndex );
		localArrayRef.Add( maxIndex );
		localArray.RemoveAt( maxIndex );
		lastMaxIndex = maxIndex;
	}
	for ( int32 i = 0; i < localArrayRef.Num(); i++ ) {
		maxIndex = ( localArrayRef[i] < lastMaxIndex ) ? maxIndex + 1 : maxIndex;
	}
	IndexOfMaxValue = maxIndex; MaxValue = maxValue;
}
