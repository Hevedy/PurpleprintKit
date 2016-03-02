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
PPKLibraryTools.cpp
================================================
*/


#include "PPKLibraryPrivatePCH.h"
#include "PPKLibraryTools.h"
#include "PPKLibraryMath.h"


UPPKLibraryTools::UPPKLibraryTools( const class FObjectInitializer& ObjectInitializer ) {

}

void UPPKLibraryTools::PrintBoolArray( const TArray<bool> BoolArray, const bool SingleString, const FString& Text, const bool NoText,
									   float Duration, const bool VisualMode ) {
#if !( UE_BUILD_TEST || UE_BUILD_SHIPPING ) // Do not Print in Shipping or Test builds
	if ( NoText ) { Text == ""; }
	if ( GConfig && Duration < 0 ) { GConfig->GetFloat( TEXT( "Kismet" ), TEXT( "PrintStringDuration" ), Duration, GEngineIni ); }
	if ( BoolArray.Num() != 0 ) {
		if ( !SingleString ) {
			for ( int32 i = 0; i < BoolArray.Num(); i++ ) {
				GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + ( BoolArray[i] ? TEXT( "true" ) : TEXT( "false" ) ) );
			}
		} else {
			GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + ArrayBoolToString( BoolArray, VisualMode ) );
		}
	} else {
		GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Yellow, TEXT( "The Bool Array is empty" ) );
	}
#endif
}

void UPPKLibraryTools::PrintByteArray( const TArray<uint8> ByteArray, const bool SingleString, const FString& Text, const bool NoText,
									   float Duration ) {
#if !( UE_BUILD_TEST || UE_BUILD_SHIPPING ) // Do not Print in Shipping or Test builds
	if ( NoText ) { Text == ""; }
	if ( GConfig && Duration < 0 ) { GConfig->GetFloat( TEXT( "Kismet" ), TEXT( "PrintStringDuration" ), Duration, GEngineIni ); }
	if ( ByteArray.Num() != 0 ) {
		if ( !SingleString ) {
			for ( int32 i = 0; i < ByteArray.Num(); i++ ) {
				GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + FString::FromInt( ByteArray[i] ) );
			}
		} else {
			GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + ArrayByteToString( ByteArray ) );
		}
	} else {
		GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Yellow, TEXT( "The Byte Array is empty" ) );
	}
#endif
}

void UPPKLibraryTools::PrintIntegerArray( const TArray<int32> IntArray, const bool SingleString, const FString& Text, const bool NoText,
										  float Duration ) {
#if !( UE_BUILD_TEST || UE_BUILD_SHIPPING ) // Do not Print in Shipping or Test builds
	if ( NoText ) { Text == ""; }
	if ( GConfig && Duration < 0 ) { GConfig->GetFloat( TEXT( "Kismet" ), TEXT( "PrintStringDuration" ), Duration, GEngineIni ); }
	if ( IntArray.Num() != 0 ) {
		if ( !SingleString ) {
			for ( int32 i = 0; i < IntArray.Num(); i++ ) {
				GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + FString::FromInt( IntArray[i] ) );
			}
		} else {
			GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + ArrayIntegerToString( IntArray ) );
		}
	} else {
		GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Yellow, TEXT( "The Integer Array is empty" ) );
	}
#endif
}

void UPPKLibraryTools::PrintFloatArray( const TArray<float> FloatArray, const bool SingleString, const FString& Text, const bool NoText,
										float Duration ) {
#if !( UE_BUILD_TEST || UE_BUILD_SHIPPING ) // Do not Print in Shipping or Test builds
	if ( NoText ) { Text == ""; }
	if ( GConfig && Duration < 0 ) { GConfig->GetFloat( TEXT( "Kismet" ), TEXT( "PrintStringDuration" ), Duration, GEngineIni ); }
	if ( FloatArray.Num() != 0 ) {
		if ( !SingleString ) {
			for ( int32 i = 0; i < FloatArray.Num(); i++ ) {
				GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + FString::SanitizeFloat( FloatArray[i] ) );
			}
		} else {
			GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + ArrayFloatToString( FloatArray ) );
		}
	} else {
		GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Yellow, TEXT( "The Float Array is empty" ) );
	}
#endif
}

void UPPKLibraryTools::PrintVector2DArray( const TArray<FVector2D> Vec2Array, const bool SingleString, const FString& Text,
										   const bool NoText, float Duration ) {
#if !( UE_BUILD_TEST || UE_BUILD_SHIPPING ) // Do not Print in Shipping or Test builds
	if ( NoText ) { Text == ""; }
	if ( GConfig && Duration < 0 ) { GConfig->GetFloat( TEXT( "Kismet" ), TEXT( "PrintStringDuration" ), Duration, GEngineIni ); }
	if ( Vec2Array.Num() != 0 ) {
		if ( !SingleString ) {
			for ( int32 i = 0; i < Vec2Array.Num(); i++ ) {
				GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + "( " +
												  FString::SanitizeFloat( Vec2Array[i].X ) + " , " + 
												  FString::SanitizeFloat( Vec2Array[i].Y ) + " )" );
			}
		} else {
			GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + ArrayVector2DToString( Vec2Array ) );
		}
	} else {
		GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Yellow, TEXT( "The FVector2D Array is empty" ) );
	}
#endif
}

void UPPKLibraryTools::PrintVectorArray( const TArray<FVector> VecArray, const bool SingleString, const FString& Text, const bool NoText,
										 float Duration ) {
#if !( UE_BUILD_TEST || UE_BUILD_SHIPPING ) // Do not Print in Shipping or Test builds
	if ( NoText ) { Text == ""; }
	if ( GConfig && Duration < 0 ) { GConfig->GetFloat( TEXT( "Kismet" ), TEXT( "PrintStringDuration" ), Duration, GEngineIni ); }
	if ( VecArray.Num() != 0 ) {
		if ( !SingleString ) {
			for ( int32 i = 0; i < VecArray.Num(); i++ ) {
				GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + "( " +
												  FString::SanitizeFloat( VecArray[i].X ) + " , " + 
												  FString::SanitizeFloat( VecArray[i].Y ) + " , " + 
												  FString::SanitizeFloat( VecArray[i].Z ) + " )" );
			}
		} else {
			GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + ArrayVectorToString( VecArray ) );
		}
	} else {
		GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Yellow, TEXT( "The FVector Array is empty" ) );
	}
#endif
}

void UPPKLibraryTools::PrintVector4Array( const TArray<FVector4> Vec4Array, const bool SingleString, const FString& Text,
										  const bool NoText, float Duration ) {
#if !( UE_BUILD_TEST || UE_BUILD_SHIPPING ) // Do not Print in Shipping or Test builds
	if ( NoText ) { Text == ""; }
	if ( GConfig && Duration < 0 ) { GConfig->GetFloat( TEXT( "Kismet" ), TEXT( "PrintStringDuration" ), Duration, GEngineIni ); }
	if ( Vec4Array.Num() != 0 ) {
		if ( !SingleString ) {
			for ( int32 i = 0; i < Vec4Array.Num(); i++ ) {
				GEngine->AddOnScreenDebugMessage( -1, 10.f, FColor::Green, Text + "( " +
												  FString::SanitizeFloat( Vec4Array[i].X ) + " , " +
												  FString::SanitizeFloat( Vec4Array[i].Y ) + " , " +
												  FString::SanitizeFloat( Vec4Array[i].Z ) + " , " +
												  FString::SanitizeFloat( Vec4Array[i].W ) + " )" );
			}
		} else {
			GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + ArrayVector4ToString( Vec4Array ) );
		}
	} else {
		GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Yellow, TEXT( "The FVector4 Array is empty" ) );
	}
#endif
}

void UPPKLibraryTools::PrintRotatorArray( const TArray<FRotator> RotArray, const bool SingleString, const FString& Text,
										  const bool NoText, float Duration ) {
#if !( UE_BUILD_TEST || UE_BUILD_SHIPPING ) // Do not Print in Shipping or Test builds
	if ( NoText ) { Text == ""; }
	if ( GConfig && Duration < 0 ) { GConfig->GetFloat( TEXT( "Kismet" ), TEXT( "PrintStringDuration" ), Duration, GEngineIni ); }
	if ( RotArray.Num() != 0 ) {
		if ( !SingleString ) {
			for ( int32 i = 0; i < RotArray.Num(); i++ ) {
				GEngine->AddOnScreenDebugMessage( -1, 10.f, FColor::Green, Text + "( " +
												  FString::SanitizeFloat( RotArray[i].Pitch ) + " , " +
												  FString::SanitizeFloat( RotArray[i].Roll ) + " , " +
												  FString::SanitizeFloat( RotArray[i].Yaw ) + " )" );
			}
		} else {
			GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Green, Text + ArrayRotatorToString( RotArray ) );
		}
	} else {
		GEngine->AddOnScreenDebugMessage( -1, Duration, FColor::Yellow, TEXT( "The FRotator Array is empty" ) );
	}
#endif
}



FString UPPKLibraryTools::ArrayBoolToString( const TArray<bool> BoolArray, const bool VisualMode ) {
	FString tempString = TEXT( "Empty" );
	if ( BoolArray.Num() != 0 ) {
		if ( VisualMode ) {
			tempString = "{ ";
			for ( int32 i = 0; i < BoolArray.Num(); i++ ) {
				if ( i == 0 ) {
					tempString = tempString + ( BoolArray[i] ? TEXT( "[X]" ) : TEXT( "[ ]" ) );
				} else { tempString = tempString + ", " + ( BoolArray[i] ? TEXT( "[X]" ) : TEXT( "[ ]" ) ); }
			}
			tempString = tempString + " }";
		} else {
			tempString = "{ ";
			for ( int32 i = 0; i < BoolArray.Num(); i++ ) {
				if ( i == 0 ) {
					tempString = tempString + ( BoolArray[i] ? TEXT( "true" ) : TEXT( "false" ) );
				} else { tempString = tempString + ", " + ( BoolArray[i] ? TEXT( "true" ) : TEXT( "false" ) ); }
			}
			tempString = tempString + " }";
		}
	}
	return tempString;
}


FString UPPKLibraryTools::ArrayByteToString( const TArray<uint8> ByteArray ) {
	FString tempString = TEXT( "Empty" );
	if ( ByteArray.Num() != 0 ) {
		tempString = "{ ";
		for ( int32 i = 0; i < ByteArray.Num(); i++ ) {
			if ( i == 0 ) { tempString = tempString + FString::FromInt( ByteArray[i] ); 
			} else { tempString = tempString + ", " + FString::FromInt( ByteArray[i] ); }
		}
		tempString = tempString + " }";
	}
	return tempString;
}


FString UPPKLibraryTools::ArrayIntegerToString( const TArray<int32> IntArray ) {
	FString tempString = TEXT( "Empty" );
	if ( IntArray.Num() != 0 ) {
		tempString = "{ ";
		for ( int32 i = 0; i < IntArray.Num(); i++ ) {
			if ( i == 0 ) { tempString = tempString + FString::FromInt( IntArray[i] ); 
			} else { tempString = tempString + ", " + FString::FromInt( IntArray[i] ); }
		}
		tempString = tempString + " }";
	}
	return tempString;
}


FString UPPKLibraryTools::ArrayFloatToString( const TArray<float> FloatArray ) {
	FString tempString = TEXT( "Empty" );
	if ( FloatArray.Num() != 0 ) {
		tempString = "{ ";
		for ( int32 i = 0; i < FloatArray.Num(); i++ ) {
			if ( i == 0 ) { tempString = tempString + FString::SanitizeFloat( FloatArray[i] ); 
			} else { tempString = tempString + ", " + FString::SanitizeFloat( FloatArray[i] ); }
		}
		tempString = tempString + " }";
	}
	return tempString;
}


FString UPPKLibraryTools::ArrayVector2DToString( const TArray<FVector2D> Vec2Array ) {
	FString tempString = TEXT( "Empty" );
	if ( Vec2Array.Num() != 0 ) {
		tempString = "{ ";
		for ( int32 i = 0; i < Vec2Array.Num(); i++ ) {
			if ( i == 0 ) { 
				tempString = tempString + "( " +
				FString::SanitizeFloat( Vec2Array[i].X ) + " , " +
				FString::SanitizeFloat( Vec2Array[i].Y ) + " )";
			} else { 
				tempString = tempString + ", " + "( " +
				FString::SanitizeFloat( Vec2Array[i].X ) + " , " +
				FString::SanitizeFloat( Vec2Array[i].Y ) + " )";
			}
		}
		tempString = tempString + " }";
	}
	return tempString;
}


FString UPPKLibraryTools::ArrayVectorToString( const TArray<FVector> VecArray ) {
	FString tempString = TEXT( "Empty" );
	if ( VecArray.Num() != 0 ) {
		tempString = "{ ";
		for ( int32 i = 0; i < VecArray.Num(); i++ ) {
			if ( i == 0 ) { 
				tempString = tempString + "( " +
					FString::SanitizeFloat( VecArray[i].X ) + " , " +
					FString::SanitizeFloat( VecArray[i].Y ) + " , " +
					FString::SanitizeFloat( VecArray[i].Z ) + " )";
			} else { 
				tempString = tempString + ", " + "( " +
					FString::SanitizeFloat( VecArray[i].X ) + " , " +
					FString::SanitizeFloat( VecArray[i].Y ) + " , " +
					FString::SanitizeFloat( VecArray[i].Z ) + " )"; }
		}
		tempString = tempString + " }";
	}
	return tempString;
}


FString UPPKLibraryTools::ArrayVector4ToString( const TArray<FVector4> Vec4Array ) {
	FString tempString = TEXT( "Empty" );
	if ( Vec4Array.Num() != 0 ) {
		tempString = "{ ";
		for ( int32 i = 0; i < Vec4Array.Num(); i++ ) {
			if ( i == 0 ) { 
				tempString = tempString + "( " +
					FString::SanitizeFloat( Vec4Array[i].X ) + " , " +
					FString::SanitizeFloat( Vec4Array[i].Y ) + " , " +
					FString::SanitizeFloat( Vec4Array[i].Z ) + " , " +
					FString::SanitizeFloat( Vec4Array[i].W ) + " )";
			} else { 
				tempString = tempString + ", " + "( " +
					FString::SanitizeFloat( Vec4Array[i].X ) + " , " +
					FString::SanitizeFloat( Vec4Array[i].Y ) + " , " +
					FString::SanitizeFloat( Vec4Array[i].Z ) + " , " +
					FString::SanitizeFloat( Vec4Array[i].W ) + " )"; }
		}
		tempString = tempString + " }";
	}
	return tempString;
}


FString UPPKLibraryTools::ArrayRotatorToString( const TArray<FRotator> RotArray ) {
	FString tempString = TEXT( "Empty" );
	if ( RotArray.Num() != 0 ) {
		tempString = "{ ";
		for ( int32 i = 0; i < RotArray.Num(); i++ ) {
			if ( i == 0 ) { 
				tempString = tempString + "( " +
					FString::SanitizeFloat( RotArray[i].Pitch ) + " , " +
					FString::SanitizeFloat( RotArray[i].Roll ) + " , " +
					FString::SanitizeFloat( RotArray[i].Yaw ) + " )";
			} else { 
				tempString = tempString + ", " + "( " +
					FString::SanitizeFloat( RotArray[i].Pitch ) + " , " +
					FString::SanitizeFloat( RotArray[i].Roll ) + " , " +
					FString::SanitizeFloat( RotArray[i].Yaw ) + " )"; }
		}
		tempString = tempString + " }";
	}
	return tempString;
}


float UPPKLibraryTools::MakeFloatFromIntegers( const int32 A, const int32 B ) {
	float value = A;
	int32 m = 1;
	for ( int32 i = 0; i <= UPPKLibraryMath::IntCount( B ); ++i ) { m *= 10; }
	return value + ( B / m );
}

int32 UPPKLibraryTools::DivideFloatIntoIntegers( const float Ref, int32& B ) {
	B = FMath::Frac( Ref );
	return FMath::TruncToInt( Ref );
}

float UPPKLibraryTools::InvertFloat( const float FloatValue ) {
	int32 a = FMath::TruncToInt( FloatValue );
	int32 b = FMath::Frac( FloatValue );
	int32 m = 1;
	for ( int32 i = 0; i <= UPPKLibraryMath::IntCount( FloatValue ); ++i ) { m *= 10; }
	return b + ( a / m );
}

FVector2D UPPKLibraryTools::FloatSplitToVector2D( const float FloatValue ) {
	return FVector2D( FMath::TruncToInt( FloatValue ), FMath::Frac( FloatValue ) );
}

FVector UPPKLibraryTools::FloatSplitToVector( const float FloatValue ) {
	return FVector( FMath::TruncToInt( FloatValue ), FMath::Frac( FloatValue ), 0.0f );
}

FVector4 UPPKLibraryTools::FloatSplitToVector4( const float FloatValue ) {
	return FVector4( FMath::TruncToInt( FloatValue ), FMath::Frac( FloatValue ), 0.0f, 0.0f );
}

FVector2D UPPKLibraryTools::VectorToVector2D( const FVector &VecValue ) {
	return FVector2D( VecValue.X, VecValue.Y );
}

FVector2D UPPKLibraryTools::Vector4ToVector2D( const FVector4 &Vec4Value ) {
	return FVector2D( Vec4Value.X, Vec4Value.Y );
}

FVector UPPKLibraryTools::Vector2DToVector( const FVector2D &Vec2Value ) {
	return FVector( Vec2Value.X, Vec2Value.Y, 0.0f );
}

FVector UPPKLibraryTools::Vector4ToVector( const FVector4 &Vec4Value ) {
	return FVector( Vec4Value.X, Vec4Value.Y, Vec4Value.Z );
}

FVector4 UPPKLibraryTools::Vector2DToVector4( const FVector2D &Vec2Value ) {
	return FVector4( Vec2Value.X, Vec2Value.Y, 0.0f, 0.0f );
}

FVector4 UPPKLibraryTools::VectorToVector4( const FVector &VecValue ) {
	return FVector4( VecValue.X, VecValue.Y, VecValue.Z, 0.0f );
}

FRotator UPPKLibraryTools::RotatorOrderInvert( const FRotator &RotValue ) {
	return FRotator( RotValue.Roll, RotValue.Yaw, RotValue.Pitch );
}

FVector2D UPPKLibraryTools::Vector2DOrderInvert( const FVector2D &Vec2Value ) {
	return FVector2D( Vec2Value.Y, Vec2Value.X );
}

FVector UPPKLibraryTools::VectorOrderInvert( const FVector &VecValue ) {
	return FVector( VecValue.Z, VecValue.Y, VecValue.X );
}

FVector4 UPPKLibraryTools::Vector4OrderInvert( const FVector4 &Vec4Value ) {
	return FVector4( Vec4Value.W, Vec4Value.Z, Vec4Value.Y, Vec4Value.X );
}

FRotator UPPKLibraryTools::RotatorOrderRight( const FRotator &RotValue ) {
	return FRotator( RotValue.Roll, RotValue.Pitch, RotValue.Yaw );
}

FVector UPPKLibraryTools::VectorOrderRight( const FVector &VecValue ) {
	return FVector( VecValue.Z, VecValue.X, VecValue.Y );
}

FVector4 UPPKLibraryTools::Vector4OrderRight( const FVector4 &Vec4Value ) {
	return FVector4( Vec4Value.W, Vec4Value.X, Vec4Value.Y, Vec4Value.Z );
}

FRotator UPPKLibraryTools::RotatorOrderLeft( const FRotator &RotValue ) {
	return FRotator( RotValue.Yaw, RotValue.Roll, RotValue.Pitch );
}

FVector UPPKLibraryTools::VectorOrderLeft( const FVector &VecValue ) {
	return FVector( VecValue.Y, VecValue.Z, VecValue.X );
}

FVector4 UPPKLibraryTools::Vector4OrderLeft( const FVector4 &Vec4Value ) {
	return FVector4( Vec4Value.Y, Vec4Value.Z, Vec4Value.W, Vec4Value.X );
}

bool UPPKLibraryTools::GetConfigBool( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return false;

	bool value = false;
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetBool( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetBool( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetBool( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetBool( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetBool( *SectionName, *VariableName, value, GEngineIni );
	}
	return value;
}

uint8 UPPKLibraryTools::GetConfigByte( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return 0;

	// PR GetByte
	int32 value = 0;
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GEngineIni );
	}
	return ( value < 0 ) ? 0 : ( value > sizeof( uint8 ) ) ? sizeof( uint8 ) : value;
}

int32 UPPKLibraryTools::GetConfigInteger( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return 0;

	int32 value = 0;
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetInt( *SectionName, *VariableName, value, GEngineIni );
	}
	return value;
}

float UPPKLibraryTools::GetConfigFloat( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return 0;

	float value = 0.0f;
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetFloat( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetFloat( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetFloat( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetFloat( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetFloat( *SectionName, *VariableName, value, GEngineIni );
	}
	return value;
}

FVector2D UPPKLibraryTools::GetConfigVector2D( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return FVector2D::ZeroVector;

	FVector2D value = FVector2D::ZeroVector;
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetVector2D( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetVector2D( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetVector2D( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetVector2D( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetVector2D( *SectionName, *VariableName, value, GEngineIni );
	}
	return FVector2D( value.X, value.Y );
}

FVector UPPKLibraryTools::GetConfigVector( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return FVector::ZeroVector;

	FVector value = FVector::ZeroVector;
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetVector( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetVector( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetVector( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetVector( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetVector( *SectionName, *VariableName, value, GEngineIni );
	}
	return value;
}

FVector4 UPPKLibraryTools::GetConfigVector4( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return FVector4( 0.f, 0.f, 0.f, 0.f );

	// PR FVector4::ZeroVector
	FVector4 value = FVector4( 0.f, 0.f, 0.f, 0.f );
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetVector4( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetVector4( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetVector4( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetVector4( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetVector4( *SectionName, *VariableName, value, GEngineIni );
	}
	return value;
}

FRotator UPPKLibraryTools::GetConfigRotator( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return FRotator::ZeroRotator;

	FRotator value = FRotator::ZeroRotator;
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetRotator( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetRotator( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetRotator( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetRotator( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetRotator( *SectionName, *VariableName, value, GEngineIni );
	}
	return value;
}

FLinearColor UPPKLibraryTools::GetConfigColor( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return FColor::Black;

	FColor value = FColor::Black;
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetColor( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetColor( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetColor( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetColor( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetColor( *SectionName, *VariableName, value, GEngineIni );
	}
	return FLinearColor( value );
}

FString UPPKLibraryTools::GetConfigString( const FString SectionName, const FString VariableName, const EINIFilesList INIFile ) {
	if ( !GConfig ) return "";

	FString value = "";
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->GetString( *SectionName, *VariableName, value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->GetString( *SectionName, *VariableName, value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->GetString( *SectionName, *VariableName, value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->GetString( *SectionName, *VariableName, value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->GetString( *SectionName, *VariableName, value, GEngineIni );
	}
	return value;
}

void UPPKLibraryTools::SetConfigBool( const FString SectionName, const FString VariableName, const bool BoolValue, 
									  const EINIFilesList INIFile ) {
	if ( !GConfig ) return;
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetBool( *SectionName, *VariableName, BoolValue, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetBool( *SectionName, *VariableName, BoolValue, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetBool( *SectionName, *VariableName, BoolValue, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetBool( *SectionName, *VariableName, BoolValue, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetBool( *SectionName, *VariableName, BoolValue, GEngineIni );
	}

}

void UPPKLibraryTools::SetConfigByte( const FString SectionName, const FString VariableName, const uint8 ByteValue,
										 const EINIFilesList INIFile ) {
	if ( !GConfig ) return;

	// PR SetByte
	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetInt( *SectionName, *VariableName, ByteValue, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetInt( *SectionName, *VariableName, ByteValue, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetInt( *SectionName, *VariableName, ByteValue, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetInt( *SectionName, *VariableName, ByteValue, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetInt( *SectionName, *VariableName, ByteValue, GEngineIni );
	}
}

void UPPKLibraryTools::SetConfigInteger( const FString SectionName, const FString VariableName, const int32 IntValue, 
									 const EINIFilesList INIFile ) {
	if ( !GConfig ) return;

	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetInt( *SectionName, *VariableName, IntValue, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetInt( *SectionName, *VariableName, IntValue, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetInt( *SectionName, *VariableName, IntValue, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetInt( *SectionName, *VariableName, IntValue, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetInt( *SectionName, *VariableName, IntValue, GEngineIni );
	}
}

void UPPKLibraryTools::SetConfigFloat( const FString SectionName, const FString VariableName, const float FloatValue, 
									   const EINIFilesList INIFile ) {
	if ( !GConfig ) return;

	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetFloat( *SectionName, *VariableName, FloatValue, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetFloat( *SectionName, *VariableName, FloatValue, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetFloat( *SectionName, *VariableName, FloatValue, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetFloat( *SectionName, *VariableName, FloatValue, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetFloat( *SectionName, *VariableName, FloatValue, GEngineIni );
	}
}

void UPPKLibraryTools::SetConfigVector2D( const FString SectionName, const FString VariableName, const FVector2D Vec2value,
										  const EINIFilesList INIFile ) {
	if ( !GConfig ) return;

	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetVector2D( *SectionName, *VariableName, Vec2value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetVector2D( *SectionName, *VariableName, Vec2value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetVector2D( *SectionName, *VariableName, Vec2value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetVector2D( *SectionName, *VariableName, Vec2value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetVector2D( *SectionName, *VariableName, Vec2value, GEngineIni );
	}
}

void UPPKLibraryTools::SetConfigVector( const FString SectionName, const FString VariableName, const FVector VecValue, 
										const EINIFilesList INIFile ) {
	if ( !GConfig ) return;

	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetVector( *SectionName, *VariableName, VecValue, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetVector( *SectionName, *VariableName, VecValue, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetVector( *SectionName, *VariableName, VecValue, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetVector( *SectionName, *VariableName, VecValue, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetVector( *SectionName, *VariableName, VecValue, GEngineIni );
	}
}

void UPPKLibraryTools::SetConfigVector4( const FString SectionName, const FString VariableName, const FVector4 Vec4Value,
										const EINIFilesList INIFile ) {
	if ( !GConfig ) return;

	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetVector4( *SectionName, *VariableName, Vec4Value, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetVector4( *SectionName, *VariableName, Vec4Value, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetVector4( *SectionName, *VariableName, Vec4Value, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetVector4( *SectionName, *VariableName, Vec4Value, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetVector4( *SectionName, *VariableName, Vec4Value, GEngineIni );
	}
}

void UPPKLibraryTools::SetConfigRotator( const FString SectionName, const FString VariableName, const FRotator RotValue, 
										 const EINIFilesList INIFile ) {
	if ( !GConfig ) return;

	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetRotator( *SectionName, *VariableName, RotValue, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetRotator( *SectionName, *VariableName, RotValue, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetRotator( *SectionName, *VariableName, RotValue, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetRotator( *SectionName, *VariableName, RotValue, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetRotator( *SectionName, *VariableName, RotValue, GEngineIni );
	}
}

void UPPKLibraryTools::SetConfigColor( const FString SectionName, const FString VariableName, const FLinearColor ColorValue, 
									   const EINIFilesList INIFile ) {
	if ( !GConfig ) return;

	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetColor( *SectionName, *VariableName, ColorValue.ToFColor( true ), GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetColor( *SectionName, *VariableName, ColorValue.ToFColor( true ), GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetColor( *SectionName, *VariableName, ColorValue.ToFColor( true ), GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetColor( *SectionName, *VariableName, ColorValue.ToFColor( true ), GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetColor( *SectionName, *VariableName, ColorValue.ToFColor( true ), GEngineIni );
	}
}

void UPPKLibraryTools::SetConfigString( const FString SectionName, const FString VariableName, const FString StrValue, 
										const EINIFilesList INIFile ) {
	if ( !GConfig ) return;

	switch ( INIFile ) {
		case EINIFilesList::GGameIni:
			GConfig->SetString( *SectionName, *VariableName, *StrValue, GGameIni );
		case EINIFilesList::GGameUserSettingsIni:
			GConfig->SetString( *SectionName, *VariableName, *StrValue, GGameUserSettingsIni );
		case EINIFilesList::GScalabilityIni:
			GConfig->SetString( *SectionName, *VariableName, *StrValue, GScalabilityIni );
		case EINIFilesList::GInputIni:
			GConfig->SetString( *SectionName, *VariableName, *StrValue, GInputIni );
		case EINIFilesList::GEngineIni:
			GConfig->SetString( *SectionName, *VariableName, *StrValue, GEngineIni );
	}
}