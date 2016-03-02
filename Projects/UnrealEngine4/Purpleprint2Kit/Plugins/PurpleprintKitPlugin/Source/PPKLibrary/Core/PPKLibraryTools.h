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
PPKLibraryTools.h
================================================
*/


#pragma once

#include "PPKLibraryMath.h"

#include "PPKLibraryTools.generated.h"


UENUM()
enum class EINIFilesList : uint8 {
	GGameIni 				UMETA( DisplayName = "Game" ),
	GGameUserSettingsIni	UMETA( DisplayName = "User Settings" ),
	GScalabilityIni			UMETA( DisplayName = "Scalability" ),
	GInputIni				UMETA( DisplayName = "Input" ),
	GEngineIni				UMETA( DisplayName = "Engine" )
};

UCLASS()
class PPKLIBRARY_API UPPKLibraryTools : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

	UPPKLibraryTools( const FObjectInitializer& ObjectInitializer );
private:

protected:

public:

	/** Print the whole bool array in the screen */
	UFUNCTION( BlueprintCallable, meta = ( AdvancedDisplay = "2" ), Category = "PP2KLibrary|Tools|Print" )
		static void PrintBoolArray( const TArray<bool> BoolArray, const bool SingleString = false, const FString& Text = FString( TEXT( "aBool: " ) ), const bool NoText = false, float Duration = 2.f, const bool VisualMode = false );

	/** Print the whole uint8 / Byte array in the screen */
	UFUNCTION( BlueprintCallable, meta = ( AdvancedDisplay = "2" ), Category = "PP2KLibrary|Tools|Print" )
		static void PrintByteArray( const TArray<uint8> ByteArray, const bool SingleString = false, const FString& Text = FString( TEXT( "aByte: " ) ), const bool NoText = false, float Duration = 2.f );

	/** Print the whole int32 / int array in the screen */
	UFUNCTION( BlueprintCallable, meta = ( AdvancedDisplay = "2" ), Category = "PP2KLibrary|Tools|Print" )
		static void PrintIntegerArray( const TArray<int32> IntArray, const bool SingleString = false, const FString& Text = FString( TEXT( "aInt: " ) ), const bool NoText = false, float Duration = 2.f );

	/** Print the whole float array in the screen */
	UFUNCTION( BlueprintCallable, meta = ( AdvancedDisplay = "2" ), Category = "PP2KLibrary|Tools|Print" )
		static void PrintFloatArray( const TArray<float> FloatArray, const bool SingleString = false, const FString& Text = FString( TEXT( "aFloat: " ) ), const bool NoText = false, float Duration = 2.f );

	/** Print the whole FVector2D array in the screen */
	UFUNCTION( BlueprintCallable, meta = ( AdvancedDisplay = "2" ), Category = "PP2KLibrary|Tools|Print" )
		static void PrintVector2DArray( const TArray<FVector2D> Vec2Array, const bool SingleString = false, const FString& Text = FString( TEXT( "aVec2D: " ) ), const bool NoText = false, float Duration = 2.f );

	/** Print the whole FVector array in the screen */
	UFUNCTION( BlueprintCallable, meta = ( AdvancedDisplay = "2" ), Category = "PP2KLibrary|Tools|Print" )
		static void PrintVectorArray( const TArray<FVector> VecArray, const bool SingleString = false, const FString& Text = FString( TEXT( "aVec: " ) ), const bool NoText = false, float Duration = 2.f );

	/** Print the whole FVector4 array in the screen */
	UFUNCTION( BlueprintCallable, meta = ( AdvancedDisplay = "2" ), Category = "PP2KLibrary|Tools|Print" )
		static void PrintVector4Array( const TArray<FVector4> Vec4Array, const bool SingleString = false, const FString& Text = FString( TEXT( "aVec4: " ) ), const bool NoText = false, float Duration = 2.f );

	/** Print the whole FRotator array in the screen */
	UFUNCTION( BlueprintCallable, meta = ( AdvancedDisplay = "2" ), Category = "PP2KLibrary|Tools|Print" )
		static void PrintRotatorArray( const TArray<FRotator> RotArray, const bool SingleString = false, const  FString& Text = FString( TEXT( "aRot: " ) ), const bool NoText = false, float Duration = 2.f );

	/** Returns FString with all the content in the Bool Array */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Tools|Array" )
		static FString ArrayBoolToString( const TArray<bool> BoolArray, const bool VisualMode );

	/** Returns FString with all the content in the Byte Array */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Tools|Array" )
		static FString ArrayByteToString( const TArray<uint8> ByteArray );

	/** Returns FString with all the content in the Integer Array */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Tools|Array" )
		static FString ArrayIntegerToString( const TArray<int32> IntArray );

	/** Returns FString with all the content in the Float Array */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Tools|Array" )
		static FString ArrayFloatToString( const TArray<float> FloatArray );

	/** Returns FString with all the content in the FVector2D Array */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Tools|Array" )
		static FString ArrayVector2DToString( const TArray<FVector2D> Vec2Array );

	/** Returns FString with all the content in the FVector Array */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Tools|Array" )
		static FString ArrayVectorToString( const TArray<FVector> VecArray );

	/** Returns FString with all the content in the FVector4 Array */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Tools|Array" )
		static FString ArrayVector4ToString( const TArray<FVector4> Vec4Array );

	/** Returns FString with all the content in the FRotator Array */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Tools|Array" )
		static FString ArrayRotatorToString( const TArray<FRotator> RotArray );

	/** Returns a float from two ints A and B to A.B */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Make Float" ), Category = "PP2KLibrary|Math|Float" )
		static float MakeFloatFromIntegers( const int32 A, const int32 B );

	/** Returns split a float into two ints A.B to A and B */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Break Float" ), Category = "PP2KLibrary|Math|Int" )
		static int32 DivideFloatIntoIntegers( const float Ref, int32& B );

	/** Returns the float inverted A.B to B.A */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Invert Float Order" ), Category = "PP2KLibrary|Math|Float" )
		static float InvertFloat( const float FloatValue );

	/** Returns FVector2D(A,B) from a float A.B */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector2D FloatSplitToVector2D( const float FloatValue );

	/** Returns FVector(A,B,0) from a float A.B */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector FloatSplitToVector( const float FloatValue );

	/** Returns FVector4(A,B,0,0) from a float A.B */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector4 FloatSplitToVector4( const float FloatValue );

	/** Returns FVector2D(A,B) from the FVector(A,B,C) */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector2D VectorToVector2D( const FVector &VecValue );

	/** Returns FVector2D(A,B) from the FVector4(A,B,C,D) */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector2D Vector4ToVector2D( const FVector4 &Vec4Value );

	/** Returns FVector(A,B,0) from the FVector2D(A,B) */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector Vector2DToVector( const FVector2D &Vec2Value );

	/** Returns FVector(A,B,C) from the FVector4(A,B,C,D) */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector Vector4ToVector( const FVector4 &Vec4Value );

	/** Returns FVector4(A,B,0,0) from the FVector2D(A,B) */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector4 Vector2DToVector4( const FVector2D &Vec2Value );

	/** Returns FVector4(A,B,C,0) from the FVector(A,B,C) */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Math|Vector" )
		static FVector4 VectorToVector4( const FVector &VecValue );

	/** Returns FRotator(C,B,A) from the FRotator(A,B,C) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Rotator" )
		static FRotator RotatorOrderInvert( const FRotator &RotValue );

	/** Returns FVector2D(B,A) from the FVector2D(A,B) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Vector2D" )
		static FVector2D Vector2DOrderInvert( const FVector2D &Vec2Value );

	/** Returns FVector(C,B,A) from the FVector(A,B,C) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Vector" )
		static FVector VectorOrderInvert( const FVector &VecValue );

	/** Returns FVector4(D,C,B,A) from the FVector4(A,B,C,D) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Vector4" )
		static FVector4 Vector4OrderInvert( const FVector4 &Vec4Value );

	/** Returns FRotator(C,A,B) from the FRotator(A,B,C) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Rotator" )
		static FRotator RotatorOrderRight( const FRotator &RotValue );

	/** Returns FVector(C,A,B) from the FVector(A,B,C) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Vector" )
		static FVector VectorOrderRight( const FVector &VecValue );

	/** Returns FVector(D,A,B,C) from the FVector(A,B,C) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Vector" )
		static FVector4 Vector4OrderRight( const FVector4 &Vec4Value );

	/** Returns FRotator(B,C,A) from the FRotator(A,B,C) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Rotator" )
		static FRotator RotatorOrderLeft( const FRotator &RotValue );

	/** Returns FVector(B,C,A) from the FVector(A,B,C) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Vector" )
		static FVector VectorOrderLeft( const FVector &VecValue );

	/** Returns FVector(B,C,D,A) from the FVector(A,B,C,D) */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Math|Vector" )
		static FVector4 Vector4OrderLeft( const FVector4 &Vec4Value );

	/** Returns the value of the selected bool from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static bool GetConfigBool( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Returns the value of the selected uint8 from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static uint8 GetConfigByte( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Returns the value of the selected int32 from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static int32 GetConfigInteger( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Returns the value of the selected float from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static float GetConfigFloat( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Returns the value of the selected FVector2D from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static FVector2D GetConfigVector2D( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Returns the value of the selected FVector from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static FVector GetConfigVector( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Returns the value of the selected FVector from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static FVector4 GetConfigVector4( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Returns the value of the selected FRotator from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static FRotator GetConfigRotator( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Returns the value of the selected FLinearColor from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static FLinearColor GetConfigColor( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Returns the value of the selected FString from the selected ini config file */
	UFUNCTION( BlueprintPure, Category = "PP2KLibrary|Config" )
		static FString GetConfigString( const FString SectionName, const FString VariableName, const EINIFilesList INIFile );

	/** Set the value of the selected bool from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigBool( const FString SectionName, const FString VariableName, const bool BoolValue, const EINIFilesList INIFile );

	/** Set the value of the selected uint8 from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigByte( const FString SectionName, const FString VariableName, const uint8 ByteValue, const EINIFilesList INIFile );

	/** Set the value of the selected int32 from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigInteger( const FString SectionName, const FString VariableName, const int32 IntValue, const EINIFilesList INIFile );

	/** Set the value of the selected float from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigFloat( const FString SectionName, const FString VariableName, const float FloatValue, const EINIFilesList INIFile );

	/** Set the value of the selected FVector2D from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigVector2D( const FString SectionName, const FString VariableName, const FVector2D Vec2Value, const EINIFilesList INIFile );

	/** Set the value of the selected FVector from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigVector( const FString SectionName, const FString VariableName, const FVector VecValue, const EINIFilesList INIFile );

	/** Set the value of the selected FVector from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigVector4( const FString SectionName, const FString VariableName, const FVector4 Vec4Value, const EINIFilesList INIFile );

	/** Set the value of the selected FRotator from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigRotator( const FString SectionName, const FString VariableName, const FRotator RotValue, const EINIFilesList INIFile );

	/** Set the value of the selected FLinearColor from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigColor( const FString SectionName, const FString VariableName, const FLinearColor ColorValue, const EINIFilesList INIFile );

	/** Set the value of the selected FString from the selected ini config file */
	UFUNCTION( BlueprintCallable, Category = "PP2KLibrary|Config" )
		static void SetConfigString( const FString SectionName, const FString VariableName, const FString StrValue, const EINIFilesList INIFile );

};