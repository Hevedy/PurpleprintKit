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
PPKLibraryUnitConverters.h
================================================
*/


#pragma once

#include "PPKLibraryUnitConverters.generated.h"


UENUM( BlueprintType )
enum class EAreaUnitsList : uint8 { // Area
	AUSKilometre		UMETA( DisplayName = "() Square Kilometre" ),
	AUSMetre			UMETA( DisplayName = "() Square Metre" ),
	AUSMile				UMETA( DisplayName = "() Square Mile" ),
	AUSYard				UMETA( DisplayName = "() Square Yard" ),
	AUSFoot				UMETA( DisplayName = "() Square Foot" ),
	AUSInch				UMETA( DisplayName = "() Square Inch" ),
	AUHectare			UMETA( DisplayName = "() Hectare" ),
	AUAcre				UMETA( DisplayName = "() Acre" )
};

UENUM(BlueprintType)
enum class EDTRUnitsList : uint8 { // Data Transfer Rate
	DTRUBitPS			UMETA( DisplayName = "() Bit per second" ),
	DTRUKilobitPS		UMETA( DisplayName = "() Kilobit per second" ),
	DTRUKilobytePS		UMETA( DisplayName = "() Kilobyte per second" ),
	DTRUKibibitPS		UMETA( DisplayName = "() Kibibit per second" ),
	DTRUMegabitPS		UMETA( DisplayName = "() Megabit per second" ),
	DTRUMegabytePS		UMETA( DisplayName = "() Megabyte per second" ),
	DTRUMebibitPS		UMETA( DisplayName = "() Mebibit per second" ),
	DTRUGigabitPS		UMETA( DisplayName = "() Gigabit per second" ),
	DTRUGigabytePS		UMETA( DisplayName = "() Gigabyte per second" ),
	DTRUGibibitPS		UMETA( DisplayName = "() Gibibit per second" ),
	DTRUTerabitPS		UMETA( DisplayName = "() Terabit per second" ),
	DTRUTerabytePS		UMETA( DisplayName = "() Terabyte per second" ),
	DTRUTebibitPS		UMETA( DisplayName = "() Tebibit per second" )
};

UENUM( BlueprintType )
enum class EDSUnitsList : uint8 { // Digital Storage
	DSUBit				UMETA( DisplayName = "() Bit" ),
	DSUKilobit			UMETA( DisplayName = "() Kilobit" ),
	DSUKibibit			UMETA( DisplayName = "() Kibibit" ),
	DSUMegabit			UMETA( DisplayName = "() Megabit" ),
	DSUMebibit			UMETA( DisplayName = "() Mebibit" ),
	DSUGigabit			UMETA( DisplayName = "() Gigabit" ),
	DSUGibibit			UMETA( DisplayName = "() Gibibit" ),
	DSUTerabit			UMETA( DisplayName = "() Terabit" ),
	DSUTebibit			UMETA( DisplayName = "() Tebibit" ),
	DSUPetabit			UMETA( DisplayName = "() Petabit" ),
	DSUPebibit			UMETA( DisplayName = "() Pebibit" ),
	DSUByte				UMETA( DisplayName = "() Byte" ),
	DSUKilobyte			UMETA( DisplayName = "() Kilobyte" ),
	DSUKibibyte			UMETA( DisplayName = "() Kibibyte" ),
	DSUMegabyte			UMETA( DisplayName = "() Megabyte" ),
	DSUMebibyte			UMETA( DisplayName = "() Mebibyte" ),
	DSUGigabyte			UMETA( DisplayName = "() Gigabyte" ),
	DSUGibibyte			UMETA( DisplayName = "() Gibibyte" ),
	DSUTerabyte			UMETA( DisplayName = "() Terabyte" ),
	DSUTebibyte			UMETA( DisplayName = "() Tebibyte" ),
	DSUPetabyte			UMETA( DisplayName = "() Petabyte" ),
	DSUPebibyte			UMETA( DisplayName = "() Pebibyte" )
};


UENUM( BlueprintType )
enum class EFrequencyUnitsList : uint8 { // Frequency
	FUHertz				UMETA( DisplayName = "() Hertz" ),
	FUKilohertz			UMETA( DisplayName = "() Kilohertz" ),
	FUMegahertz			UMETA( DisplayName = "() Megahertz" ),
	FUGigahertz			UMETA( DisplayName = "() Gigahertz" )
};


UENUM( BlueprintType )
enum class ELengthUnitsList : uint8 { // Length
	LUKilometre			UMETA( DisplayName = "() Kilometre" ),
	LUMetre				UMETA( DisplayName = "() Metre" ),
	LUCentimetre		UMETA( DisplayName = "() Centimetre" ),
	LUMillimetre		UMETA( DisplayName = "() Millimetre" ),
	LUMicrometre		UMETA( DisplayName = "() Micrometre" ),
	LUNanometre			UMETA( DisplayName = "() Nanometre" ),
	LUMile				UMETA( DisplayName = "() Mile" ),
	LUYard				UMETA( DisplayName = "() Yard" ),
	LUFoot				UMETA( DisplayName = "() Foot" ),
	LUInch				UMETA( DisplayName = "() Inch" ),
	LUNauticalMile		UMETA( DisplayName = "() Nautical Mile" )
};


UENUM( BlueprintType )
enum class EMassUnitsList : uint8 { // Mass
	MUTonne				UMETA( DisplayName = "() Tonne" ),
	MUKilogram			UMETA( DisplayName = "() Kilogram" ),
	MUGram				UMETA( DisplayName = "() Gram" ),
	MUMilligram			UMETA( DisplayName = "() Milligram" ),
	MUMicrogram			UMETA( DisplayName = "() Microgram" ),
	MUImperialTon		UMETA( DisplayName = "() Imperial Ton" ),
	MUUSTon				UMETA( DisplayName = "() US Ton" ),
	MUStone				UMETA( DisplayName = "() Stone" ),
	MUPound				UMETA( DisplayName = "() Pound" ),
	MUOunce				UMETA( DisplayName = "() Ounce" )
};

UENUM( BlueprintType )
enum class EPAUnitsList : uint8 { // Plane Angle
	PAUAngularMil		UMETA( DisplayName = "() Angular Mil" ),
	PAUDegree			UMETA( DisplayName = "() Degree" ),
	PAUGradian			UMETA( DisplayName = "() Gradian" ),
	PAUMinuteOfArc		UMETA( DisplayName = "() Minute of Arc" ),
	PAURadian			UMETA( DisplayName = "() Radian" ),
	PAUSecondOfArc		UMETA( DisplayName = "() Second of Arc" )
};

UENUM( BlueprintType )
enum class ESpeedUnitsList : uint8 { // Speed
	SUMilesPH			UMETA( DisplayName = "() Miles per Hour" ),
	SUFootPS			UMETA( DisplayName = "() Foot per Second" ),
	SUMetrePS			UMETA( DisplayName = "() Metre per Second" ),
	SUKilometrePH		UMETA( DisplayName = "() Kilometre per Hour" ),
	SUKnot				UMETA( DisplayName = "() Knot" )
};

UENUM( BlueprintType )
enum class ETempUnitsList : uint8 { // Temperature
	TUCelsius			UMETA( DisplayName = "() Celsius" ),
	TUFahrenheit		UMETA( DisplayName = "() Fahrenheit" ),
	TUKelvin			UMETA( DisplayName = "() Kelvin" )
};

UENUM( BlueprintType )
enum class ETimeUnitsList : uint8 { // Time
	TUNanosecond		UMETA( DisplayName = "(Nano) Nanosecond" ),
	TUMicrosecond		UMETA( DisplayName = "(Micro) Microsecond" ),
	TUMillisecond		UMETA( DisplayName = "(Milli) Millisecond" ),
	TUSecond			UMETA( DisplayName = "(s) Second" ),
	TUMinute			UMETA( DisplayName = "(m) Minute" ),
	TUHour				UMETA( DisplayName = "(H) Hour" ),
	TUDay				UMETA( DisplayName = "(d) Day" ),
	TUWeek				UMETA( DisplayName = "(W) Week" ),
	TUMonth				UMETA( DisplayName = "(M) Month" ),
	TUYear				UMETA( DisplayName = "(Y) Year" ),
	TUDecade			UMETA( DisplayName = "(D) Decade" ),
	TUCentury			UMETA( DisplayName = "(C) Century" )
};

UENUM( BlueprintType )
enum class EVolUnitsList : uint8 { // Volume
	VUUSLiquidGallon	UMETA( DisplayName = "() US Liquid Gallon" ),
	VUUSLiquidQuart		UMETA( DisplayName = "() US Liquid Quart" ),
	VUUSLiquidPint		UMETA( DisplayName = "() US Liquid Pint" ),
	VUUSLegalCup		UMETA( DisplayName = "() US Legal Cup" ),
	VUUSFluidOunce		UMETA( DisplayName = "() US Fluid Ounce" ),
	VUUSTablespoon		UMETA( DisplayName = "() US Tablespoon" ),
	VUUSTeaspoon		UMETA( DisplayName = "() US Teaspoon" ),
	VUCubicMetre		UMETA( DisplayName = "() Cubic Metre" ),
	VULitre				UMETA( DisplayName = "() Litre" ),
	VUMillilitre		UMETA( DisplayName = "() Millilitre" ),
	VUImperialGallon	UMETA( DisplayName = "() Imperial Gallon" ),
	VUImperialQuart		UMETA( DisplayName = "() Imperial Quart" ),
	VUImperialPint		UMETA( DisplayName = "() Imperial Pint" ),
	VUImperialCup		UMETA( DisplayName = "() Imperial Cup" ),
	VUImperialFluidOunce	UMETA( DisplayName = "() Imperial Fluid Ounce" ),
	VUImperialTablespoon	UMETA( DisplayName = "() Imperial Tablespoon" ),
	VUImperialTeaspoon	UMETA( DisplayName = "() Imperial Teaspoon" ),
	VUCubicFoot			UMETA( DisplayName = "() Cubic Foot" ),
	VUCubicInch			UMETA( DisplayName = "() Cubic Inch" )
};


USTRUCT( BlueprintType )
struct FAreaUnitsStruct { // Area
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float USKilometre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float USMetre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float USMile;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float USYard;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float USFoot;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float USInch;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UHectare;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UAcre;

	FAreaUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FDTRUnitsStruct { // Data Transfer Rate
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UBitPS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKilobitPS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKilobytePS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKibibitPS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMegabitPS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMegabytePS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMebibitPS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGigabitPS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGigabytePS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGibibitPS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UTerabitPS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UTerabytePS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UTebibitPS;

	FDTRUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FDSUnitsStruct { // Digital Storage
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UBit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKilobit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKibibit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMegabit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMebibit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGigabit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGibibit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UTerabit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UTebibit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UPetabit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UPebibit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UByte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKilobyte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKibibyte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMegabyte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMebibyte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGigabyte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGibibyte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UTerabyte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UTebibyte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UPetabyte;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UPebibyte;

	FDSUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FFrequencyUnitsStruct { // Frequency
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UHertz;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKilohertz;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMegahertz;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGigahertz;

	FFrequencyUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FLengthUnitsStruct { // Length
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKilometre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMetre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UCentimetre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMillimetre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMicrometre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UNanometre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMile;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UYard;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UFoot;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UInch;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UNauticalMile;

	FLengthUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FMassUnitsStruct { // Mass
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UTonne;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKilogram;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGram;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMilligram;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMicrogram;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UImperialTon;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UUSTon;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UStone;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UPound;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UOunce;

	FMassUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FPAUnitsStruct { // Plane Angle
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UAngularMil;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UDegree;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UGradian;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMinuteOfArc;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float URadian;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float USecondOfArc;

	FPAUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FSpeedUnitsStruct { // Speed
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMilesPH;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UFootPS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMetrePS;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKilometrePH;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKnot;

	FSpeedUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FTempUnitsStruct { // Temperature
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UCelsius;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UFahrenheit;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UKelvin;

	FTempUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FTimeUnitsStruct {
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UNanosecond;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UMicrosecond;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UMillisecond;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float USecond;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UMinute;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UHour;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UDay;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UWeek;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UMonth;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UYear;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UDecade;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
	float UCentury;

	FTimeUnitsStruct() { }
};

USTRUCT( BlueprintType )
struct FVolUnitsStruct { // Volume
	GENERATED_USTRUCT_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UUSLiquidGallon;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UUSLiquidQuart;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UUSLiquidPint;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UUSLegalCup;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UUSFluidOunce;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UUSTablespoon;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UUSTeaspoon;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UCubicMetre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float ULitre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UMillilitre;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UImperialGallon;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UImperialQuart;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UImperialPint;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UImperialCup;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UImperialFluidOunce;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UImperialTablespoon;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UImperialTeaspoon;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UCubicFoot;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "PP2KLibrary|Units|Converters" )
		float UCubicInch;

	FVolUnitsStruct() { }
};

UCLASS()
class PPKLIBRARY_API UPPKLibraryUnitConverters : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

	UPPKLibraryUnitConverters( const FObjectInitializer& ObjectInitializer );
private:

protected:

public:
	static float GetAreaUnitValue( const EAreaUnitsList AreaUnit );

	static float GetDTRUnitValue( const EDTRUnitsList DTRUnit );

	static float GetDSUnitValue( const EDSUnitsList DSUnit );

	static float GetFrequencyUnitValue( const EFrequencyUnitsList FrequencyUnit );

	static float GetLengthUnitValue( const ELengthUnitsList LengthUnit );

	static float GetMassUnitValue( const EMassUnitsList MassUnit );

	static float GetPAUnitValue( const EPAUnitsList PAUnit );

	static float GetSpeedUnitValue( const ESpeedUnitsList SpeedUnit );

	static float GetTempUnitValue( const ETempUnitsList TempUnit );

	static float GetTimeUnitValue( const ETimeUnitsList TimeUnit );

	static float GetVolUnitValue( const EVolUnitsList VolUnit );


	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Area Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float AreaUnitsConverterSimple( const float UnitValue, const EAreaUnitsList UnitFrom, const EAreaUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Area Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void AreaUnitsConverterAdvanced( const float UnitValue, const EAreaUnitsList UnitFrom, const EAreaUnitsList UnitToValueA, const EAreaUnitsList UnitToValueB,
											   const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Area Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void AreaUnitsConverterComplete( const float UnitValue, const EAreaUnitsList UnitFrom, const bool bTruncate, FAreaUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Data Transfer Rate Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float DTRUnitsConverterSimple( const float UnitValue, const EDTRUnitsList UnitFrom, const EDTRUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Data Transfer Rate Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void DTRUnitsConverterAdvanced( const float UnitValue, const EDTRUnitsList UnitFrom, const EDTRUnitsList UnitToValueA, const EDTRUnitsList UnitToValueB,
											   const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Data Transfer Rate Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void DTRUnitsConverterComplete( const float UnitValue, const EDTRUnitsList UnitFrom, const bool bTruncate, FDTRUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Digital Storage Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float DSUnitsConverterSimple( const float UnitValue, const EDSUnitsList UnitFrom, const EDSUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Digital Storage Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void DSUnitsConverterAdvanced( const float UnitValue, const EDSUnitsList UnitFrom, const EDSUnitsList UnitToValueA, const EDSUnitsList UnitToValueB,
											   const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Digital Storage Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void DSUnitsConverterComplete( const float UnitValue, const EDSUnitsList UnitFrom, const bool bTruncate, FDSUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Frequency Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float FrequencyUnitsConverterSimple( const float UnitValue, const EFrequencyUnitsList UnitFrom, const EFrequencyUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Frequency Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void FrequencyUnitsConverterAdvanced( const float UnitValue, const EFrequencyUnitsList UnitFrom, const EFrequencyUnitsList UnitToValueA, const EFrequencyUnitsList UnitToValueB,
												const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Frequency Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void FrequencyUnitsConverterComplete( const float UnitValue, const EFrequencyUnitsList UnitFrom, const bool bTruncate, FFrequencyUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Length Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float LengthUnitsConverterSimple( const float UnitValue, const ELengthUnitsList UnitFrom, const ELengthUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Length Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void LengthUnitsConverterAdvanced( const float UnitValue, const ELengthUnitsList UnitFrom, const ELengthUnitsList UnitToValueA, const ELengthUnitsList UnitToValueB,
												const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Length Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void LengthUnitsConverterComplete( const float UnitValue, const ELengthUnitsList UnitFrom, const bool bTruncate, FLengthUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Mass Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float MassUnitsConverterSimple( const float UnitValue, const EMassUnitsList UnitFrom, const EMassUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Mass Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void MassUnitsConverterAdvanced( const float UnitValue, const EMassUnitsList UnitFrom, const EMassUnitsList UnitToValueA, const EMassUnitsList UnitToValueB,
												const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Mass Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void MassUnitsConverterComplete( const float UnitValue, const EMassUnitsList UnitFrom, const bool bTruncate, FMassUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Plane Angle Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float PAUnitsConverterSimple( const float UnitValue, const EPAUnitsList UnitFrom, const EPAUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Plane Angle Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void PAUnitsConverterAdvanced( const float UnitValue, const EPAUnitsList UnitFrom, const EPAUnitsList UnitToValueA, const EPAUnitsList UnitToValueB,
												const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Plane Angle Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void PAUnitsConverterComplete( const float UnitValue, const EPAUnitsList UnitFrom, const bool bTruncate, FPAUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Speed Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float SpeedUnitsConverterSimple( const float UnitValue, const ESpeedUnitsList UnitFrom, const ESpeedUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Speed Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void SpeedUnitsConverterAdvanced( const float UnitValue, const ESpeedUnitsList UnitFrom, const ESpeedUnitsList UnitToValueA, const ESpeedUnitsList UnitToValueB,
												const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Speed Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void SpeedUnitsConverterComplete( const float UnitValue, const ESpeedUnitsList UnitFrom, const bool bTruncate, FSpeedUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Temperature Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float TempUnitsConverterSimple( const float UnitValue, const ETempUnitsList UnitFrom, const ETempUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Temperature Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void TempUnitsConverterAdvanced( const float UnitValue, const ETempUnitsList UnitFrom, const ETempUnitsList UnitToValueA, const ETempUnitsList UnitToValueB,
												const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Temperature Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void TempUnitsConverterComplete( const float UnitValue, const ETempUnitsList UnitFrom, const bool bTruncate, FTempUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Time Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float TimeUnitsConverterSimple( const float UnitValue, const ETimeUnitsList UnitFrom, const ETimeUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Time Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void TimeUnitsConverterAdvanced( const float UnitValue, const ETimeUnitsList UnitFrom, const ETimeUnitsList UnitToValueA, const ETimeUnitsList UnitToValueB, 
												const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Time Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
	static void TimeUnitsConverterComplete( const float UnitValue, const ETimeUnitsList UnitFrom, const bool bTruncate, FTimeUnitsStruct& UnitList );

	/** Returns a float with the converted unit */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Volume Units Converter" ), Category = "PP2KLibrary|Units|Converters" )
		static float VolUnitsConverterSimple( const float UnitValue, const EVolUnitsList UnitFrom, const EVolUnitsList UnitTo, const bool bTruncate );

	/** Returns two floats with the converted units */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Volume Units Converter (Advanced)" ), Category = "PP2KLibrary|Units|Converters" )
		static void VolUnitsConverterAdvanced( const float UnitValue, const EVolUnitsList UnitFrom, const EVolUnitsList UnitToValueA, const EVolUnitsList UnitToValueB,
												const bool bTruncateA, const bool bTruncateB, float& UnitValueOriginal, float& UnitValueATo, float& UnitValueBTo );

	/** Returns all converted units in floats */
	UFUNCTION( BlueprintCallable, meta = ( DisplayName = "Volume Units Converter (Complete)" ), Category = "PP2KLibrary|Units|Converters" )
		static void VolUnitsConverterComplete( const float UnitValue, const EVolUnitsList UnitFrom, const bool bTruncate, FVolUnitsStruct& UnitList );

};