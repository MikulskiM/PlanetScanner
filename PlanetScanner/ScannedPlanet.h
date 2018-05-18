#pragma once
#include <iostream>
#include "ScannedPlanet.h"
#include <string>
#include <time.h>

class ScannedPlanet
{
public:
	void nameGeneration();			// wymy�la nazw� planety
	void moonsScanning();			// skanuje ile planeta posiada ksi�ycy / naturalnych satelit
	void oxygenScanning();			// skanuje zawarto�� tlenu w atmosferze
	void temperatureScanning();		// odczytuje temperaturz� w danym miejscu na planecie
	void surfaceScanning();			// okre�la pi�kno planety
	void compositionScanning();		// bada sk�ad procentowy planety (wody i powierzchni ziemii)
	void floraScanning();			// bada ro�linno�� je�li istnieje
	void faunaScanning();			// bada formy �ycia je�li istniej�
	ScannedPlanet();				//nag��wek konstruktora
	~ScannedPlanet();				//nag��wek destruktora
private:
	std::string name;
	int numOfMoons;
	bool oxygen;
	int temperature;
	int surfaceType;	// 1 - ugly ... 5 - beautiful
	int waterProcentage;
	int landmassProcentage;
	int floraType;		//floraTypes: 1 - deadly/toxic for humans, 2 - no flora, 3 - a little bit of neutral flora, 4 - a lot of flora, some of it is eatable
	int faunaType[2];	// faunaType[0] - existance of fauna, 0 = does NOT exist, 1 = exists; faunaType[1] - 1 - bacteria, 2 - small forms of life ... 5
};
