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
PPKLibraryMath.h
================================================
*/


#pragma once

#include "PPKLibraryMath.generated.h"


UCLASS()
class PPKLIBRARY_API UPPKLibraryMath : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

	UPPKLibraryMath( const FObjectInitializer& ObjectInitializer );
private:

protected:

public:

	static int32 FullRotSector( const float FloatValue, const int32 SectorsNumber );

	/** Returns the sector index of the float using as reference the number of sectors */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Byte" )
		static uint8 FullRotSectorByte( const float FloatValue, const int32 SectorsNumber );

	/** Returns the sector index of the float using as reference the number of sectors */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Integer" )
		static int32 FullRotSectorInt( const float FloatValue, const int32 SectorsNumber );

	/** Returns the sector index of each FVector axis using as reference the number of sectors */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector FullRotSectorVector( const FVector VecValue, const FVector SectorsNumber );

	/** Returns the sector index of each FRotator axis using as reference the number of sectors */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector FullRotSectorRotator( const FRotator RotValue, const FVector SectorsNumber );

	/** Returns the number of characters in the int */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Integer Size" ), Category = "PP2KLibrary|Math|Utils" )
		static int32 IntCount( const int32 IntValue );

	/** Returns the number of characters in the float */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Float Size" ), Category = "PP2KLibrary|Math|Utils" )
		static int32 FloatCount( const float FloatValue );

	/** Returns the euler like int32 value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "To Full From Half (Integer)" ), Category = "PP2KLibrary|Math|Integer" )
		static int32 IMakeFullFromHalfRot( const int32 IntValue );

	/** Returns the euler like float value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "To Full From Half (Float)" ), Category = "PP2KLibrary|Math|Float" )
		static float FMakeFullFromHalfRot( const float FloatValue );

	/** Returns the normalize like int32 value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "To Half From Full (Integer)" ), Category = "PP2KLibrary|Math|Integer" )
		static int32 ICMakeHalfFromFullRot( const int32 IntValue );

	/** Returns the normalize like float value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "To Half From Full (Float)" ), Category = "PP2KLibrary|Math|Float" )
		static float FMakeHalfFromFullRot( const float FloatValue );

	/** Returns the euler like FRotator value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Convert 180 To 360 Rotation" ), Category = "PP2KLibrary|Math|Rotator" )
		static FRotator MakeFullFromHalfRot( const FRotator RotValue );

	/** Returns the normalize like FRotator value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Convert 360 To 180 Rotation" ), Category = "PP2KLibrary|Math|Rotator" )
		static FRotator MakeHalfFromFullRot( const FRotator RotValue );

	/** Returns the euler like FVector2D value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Convert 180 To 360 Rotation" ), Category = "PP2KLibrary|Math|Vector2D" )
		static FVector2D V2DMakeFullFromHalfRot( const FVector2D Vec2Value );

	/** Returns the normalize like FVector2D value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Convert 360 To 180 Rotation" ), Category = "PP2KLibrary|Math|Vector2D" )
		static FVector2D V2DMakeHalfFromFullRot( const FVector2D Vec2Value );

	/** Returns the euler like FVector value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Convert 180 To 360 Rotation" ), Category = "PP2KLibrary|Math|Vector" )
		static FVector VMakeFullFromHalfRot( const FVector VecValue );

	/** Returns the normalize like FVector value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Convert 360 To 180 Rotation" ), Category = "PP2KLibrary|Math|Vector" )
		static FVector VMakeHalfFromFullRot( const FVector VecValue );

	/** Returns the euler like FVector4 value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Convert 180 To 360 Rotation" ), Category = "PP2KLibrary|Math|Vector4" )
		static FVector4 V4MakeFullFromHalfRot( const FVector4 Vec4Value );

	/** Returns the normalize like FVector value */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Convert 360 To 180 Rotation" ), Category = "PP2KLibrary|Math|Vector4" )
		static FVector4 V4MakeHalfFromFullRot( const FVector4 Vec4Value );
	
	/** Returns the minimum value of A and B */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Min (Byte)", CompactNodeTitle = "MIN", CommutativeAssociativeBinaryOperator = "true" ), Category = "PP2KLibrary|Math|Byte" )
		static uint8 BMin( uint8 A, uint8 B );

	/** Returns the maximum value of A and B */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Max (Byte)", CompactNodeTitle = "MAX", CommutativeAssociativeBinaryOperator = "true" ), Category = "PP2KLibrary|Math|Byte" )
		static uint8 BMax( uint8 A, uint8 B );

	/** Returns the closer value of A and B */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Closer (Byte)", CompactNodeTitle = "CLOS", CommutativeAssociativeBinaryOperator = "true" ), Category = "PP2KLibrary|Math|Byte" )
		static uint8 BGetCloser( uint8 Ref, uint8 A, uint8 B );

	/** Returns the further value of A and B */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Further (Byte)", CompactNodeTitle = "FURT", CommutativeAssociativeBinaryOperator = "true" ), Category = "PP2KLibrary|Math|Byte" )
		static uint8 BGetFurther( uint8 Ref, uint8 A, uint8 B );

	/** Returns the closer value of A and B */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Closer (int)", CompactNodeTitle = "CLOS", CommutativeAssociativeBinaryOperator = "true" ), Category = "PP2KLibrary|Math|Integer" )
		static int32 IGetCloser( int32 Ref, int32 A, int32 B );

	/** Returns the further value of A and B */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Further (int)", CompactNodeTitle = "FURT", CommutativeAssociativeBinaryOperator = "true" ), Category = "PP2KLibrary|Math|Integer" )
		static int32 IGetFurther( int32 Ref, int32 A, int32 B );

	/** Returns the closer value of A and B */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Closer (float)", CompactNodeTitle = "CLOS", CommutativeAssociativeBinaryOperator = "true" ), Category = "PP2KLibrary|Math|Float" )
		static float FGetCloser( float Ref, float A, float B );

	/** Returns the further value of A and B */
	UFUNCTION( BlueprintPure, meta = ( DisplayName = "Further (float)", CompactNodeTitle = "FURT", CommutativeAssociativeBinaryOperator = "true" ), Category = "PP2KLibrary|Math|Float" )
		static float FGetFurther( float Ref, float A, float B );

	/** Returns the closer byte in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Byte" )
		static void CloserByteArray( const uint8 ByteRefValue, const TArray<uint8>& ByteArray, const bool NotEqual, int32& IndexOfCloserValue, uint8& CloserValue );

	/** Returns the further byte in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Byte" )
		static void FurtherByteArray( const uint8 ByteRefValue, const TArray<uint8>& ByteArray, int32& IndexOfFurtherValue, uint8& FurtherValue );

	/** Returns the closer integer in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Integer" )
		static void CloserIntegerArray( const int32 IntRefValue, const TArray<int32>& IntArray, const bool NotEqual, int32& IndexOfCloserValue, int32& CloserValue );

	/** Returns the further integer in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Integer" )
		static void FurtherIntegerArray( const int32 IntRefValue, const TArray<int32>& IntArray, int32& IndexOfFurtherValue, int32& FurtherValue );

	/** Returns the closer float in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Float" )
		static void CloserFloatArray( const float FloatRefValue, const TArray<float>& FloatArray, const bool NotEqual, int32& IndexOfCloserValue, float& CloserValue );

	/** Returns the further float in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Float" )
		static void FurtherFloatArray( const float FloatRefValue, const TArray<float>& FloatArray, int32& IndexOfFurtherValue, float& FurtherValue );

	/** Returns the min byte in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Float" )
		static void MinByteArray( const TArray<uint8>& ByteArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMinValue, float& MinValue );

	/** Returns the max byte in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Float" )
		static void MaxByteArray( const TArray<uint8>& ByteArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMaxValue, float& MaxValue );

	/** Returns the min integer in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Float" )
		static void MinIntegerArray( const TArray<int32>& IntArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMinValue, float& MinValue );

	/** Returns the max integer in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Float" )
		static void MaxIntegerArray( const TArray<int32>& IntArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMaxValue, float& MaxValue );

	/** Returns the min float in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Float" )
		static void MinFloatArray( const TArray<float>& FloatArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMinValue, float& MinValue );

	/** Returns the max float in the array and their index at which it was found. Returns value of 0 and index of -1 if the supplied array is empty. */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Float" )
		static void MaxFloatArray( const TArray<float>& FloatArray, const int32 NumberOfIndexToDiscard, int32& IndexOfMaxValue, float& MaxValue );

	/** Returns closer value in a generic way */
	template< class T >
	static CONSTEXPR FORCEINLINE T Closer( const T Reference, const T A, const T B ) {
		return ( ( ( Reference - A ) >= (T)0 ) ? ( Reference - A ) : -( Reference - A ) ) <= ( ( ( Reference - B ) >= (T)0 ) ? ( Reference - B ) : -( Reference - B ) ) ? A : B;
	}

	/** Returns further value in a generic way */
	template< class T >
	static CONSTEXPR FORCEINLINE T Further( const T Reference, const T A, const T B ) {
		return ( ( ( Reference - A ) >= (T)0 ) ? ( Reference - A ) : -( Reference - A ) ) >= ( ( ( Reference - B ) >= (T)0 ) ? ( Reference - B ) : -( Reference - B ) ) ? A : B;
	}

	/**
	* Closer number to given of Array
	* @param	Array of templated type
	* @param	Reference value templated type to compare
	* @param	Optional boolean to search only the closer values and no the equals
	* @param	Optional pointer for returning the index of the closer element, if multiple closer elements the first index is returned
	* @return	The closer value found in the array or default value if the array was empty or can't find a correct value
	*/
	template< class T >
	static FORCEINLINE T Closer( const T Reference, const TArray<T>& Values, const bool NotEqual, int32* CloserIndex = NULL ) {
		if ( Values.Num() == 0 ) {
			if ( CloserIndex ) {
				*CloserIndex = INDEX_NONE;
			}
			return T();
		}

		T CurCloser = ( ( Reference - Values[0] ) >= (T)0 ) ? ( Reference - Values[0] ) : -( Reference - Values[0] );
		int32 CurCloserIndex = 0;
		if ( CurCloser == 0 && NotEqual ) {
			CurCloserIndex = -1;
		}

		for ( int32 v = 1; v < Values.Num(); ++v ) {
			const T Value = ( ( Reference - Values[v] ) >= (T)0 ) ? ( Reference - Values[v] ) : -( Reference - Values[v] );
			if ( Value < CurCloser ) {
				if ( !NotEqual || ( NotEqual && Value != 0 ) ) {
					CurCloser = Value;
					CurCloserIndex = v;
				}
			}
		}

		if ( CloserIndex ) {
			*CloserIndex = CurCloserIndex == -1 ? INDEX_NONE : CurCloserIndex;
		}
		return Values.Num() == 0 ? 0 : Values[CurCloserIndex == -1 ? 0 : CurCloserIndex];
	}

	/**
	* Further number to given of Array
	* @param	Array of templated type
	* @param	Reference value templated type to compare
	* @param	Optional pointer for returning the index of the further element, if multiple further elements the first index is returned
	* @return	The further value found in the array or default value if the array was empty
	*/
	template< class T >
	static FORCEINLINE T Further( const T Reference, const TArray<T>& Values, int32* FurtherIndex = NULL ) {
		if ( Values.Num() == 0 ) {
			if ( FurtherIndex ) {
				*FurtherIndex = INDEX_NONE;
			}
			return T();
		}

		T CurFurther = ( ( Reference - Values[0] ) >= (T)0 ) ? ( Reference - Values[0] ) : -( Reference - Values[0] );
		int32 CurFurtherIndex = 0;
		for ( int32 v = 1; v < Values.Num(); ++v ) {
			const T Value = ( ( Reference - Values[v] ) >= (T)0 ) ? ( Reference - Values[v] ) : -( Reference - Values[v] );
			if ( CurFurther < Value ) {
				CurFurther = Value;
				CurFurtherIndex = v;
			}
		}

		if ( FurtherIndex ) {
			*FurtherIndex = CurFurtherIndex == -1 ? INDEX_NONE : CurFurtherIndex;
		}
		return Values.Num() == 0 ? 0 : Values[CurFurtherIndex == -1 ? 0 : CurFurtherIndex];
	}

};