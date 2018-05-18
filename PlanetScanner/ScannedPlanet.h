#pragma once
#include <iostream>
#include "ScannedPlanet.h"
#include <string>
#include <time.h>

class ScannedPlanet
{
public:
	void nameGeneration();			// wymyœla nazwê planety
	void moonsScanning();			// skanuje ile planeta posiada ksiê¿ycy / naturalnych satelit
	void oxygenScanning();			// skanuje zawartoœæ tlenu w atmosferze
	void temperatureScanning();		// odczytuje temperaturzê w danym miejscu na planecie
	void surfaceScanning();			// okreœla piêkno planety
	void compositionScanning();		// bada sk³ad procentowy planety (wody i powierzchni ziemii)
	void floraScanning();			// bada roœlinnoœæ jeœli istnieje
	void faunaScanning();			// bada formy ¿ycia jeœli istniej¹
	ScannedPlanet();				//nag³ówek konstruktora
	~ScannedPlanet();				//nag³ówek destruktora
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
