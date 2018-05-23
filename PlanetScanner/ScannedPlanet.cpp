#include <iostream>
#include "ScannedPlanet.h"
#include <string>
#include <time.h>

void ScannedPlanet::nameGeneration()
{
	int pre = rand() % 11;
	int cor = rand() % 11;
	int suf = rand() % 11;
	
	std::string prefix[] = { "Co","Si","Pa","Ri","Do","Mhe","Paah","Ly","Fre","Dol","Met" };
	std::string core[] = { "uni","opu","anu","uyaa","eqiu","asa","mo","nu","k","p","ti" };
	std::string suffix[] = { "ium","ova","suk","nus","lax","zar","ru","lop","ea","on","ka" };
	
	if (rand() % 5 == rand() % 5){
		int ext = rand() % 13;
		std::string extra[] = { " Delta"," V"," III"," IV"," II"," I", " VI"," Delta-V"," Delta-III"," Delta-IV"," Delta-II"," Delta-I", " Delta-VI" };

		ScannedPlanet::name = prefix[pre] + core[cor] + suffix[suf] + extra[ext];
		std::cout << " planet's name: '" << ScannedPlanet::name << "'\n\n";
	}
	else {
		ScannedPlanet::name = prefix[pre] + core[cor] + suffix[suf];
		std::cout << " planet's name: '" << ScannedPlanet::name << "'\n\n";
	}
};
void ScannedPlanet::moonsScanning()
{
	//std::cout << "turning on the moon detector...\n";
	numOfMoons = rand() % 7;
	if(numOfMoons==1)
		std::cout << "	" << numOfMoons << " orbiting body found\n";
	else
		std::cout << "	" << numOfMoons << " orbiting bodies found\n";

};
void ScannedPlanet::oxygenScanning()
{
	if (rand() % 2 == 1) {
		oxygen = true;
		std::cout << "	Oxygen found!\n";
		if (rand() % 3 == 2) {
			std::cout << "	Humans could breath there!";
		}
		else
			std::cout << "	but it would be hard for humans to breath, there isn't much of it";
	}
	else {
		oxygen = false;
		std::cout << "	Oxygen not found\n";
		if (rand() % 3 == 2)
			std::cout << "	this atmosphere is toxic to people!";
		else
			std::cout << "	Unbreathable for humans";
	}

};
void ScannedPlanet::temperatureScanning() {
	temperature = rand() % 201 - 100;

	std::cout << "\n	Current temperature: " << temperature<< static_cast<char>(248) << "C" << std::endl;

};
void ScannedPlanet::surfaceScanning() {
	/*surfaceType = rand() % 5 + 1;							// jakby to dobrze powi¹zaæ z pozosta³ymi atrybutami?
	switch sufaceType:
	case 1:
		std::cout<< ""
		*/
};
void ScannedPlanet::compositionScanning() {
	waterProcentage = rand() % 101;
	landmassProcentage = 100 - waterProcentage;
	std::cout << "	This planet consists of: \n		 " << waterProcentage << "% water\n		 " << landmassProcentage << "% landmass\n";

};
void ScannedPlanet::floraScanning() {
	
	floraType = rand() % 4 + 1;
	int random = rand() % 3;

	switch (floraType)
	{
		case 1:
			std::cout << "danger! flora on this planet is toxic for humans!\n";
			break;
		case 2:
			std::cout << "there is no flora on this planet\n";
			break;
		case 3:
			if (temperature >= 10 && temperature <= 50 && oxygen == true)
			{
				switch (random) {
				case 0:
					std::cout << "There is a little bit of flora on this planet, some of it is known on Earth";
				case 1:
					std::cout << "There is a little bit of flora on this planet, all of it looks like flora from Earth";
				case 2:
					std::cout << "There is a little bit of flora on this planet, none of it looks like flora from Earth";
				}
			}
			else
			{
				std::cout << "There is a little bit of flora on this planet, none of it looks like flora from Earth";
			}
			break;
		case 4:
			std::cout << "There is a lot of flora on this planet, none of it looks like flora from Earth";
			break;
		default:
			break;
	}
	



};
void ScannedPlanet::faunaScanning() {


};
ScannedPlanet::ScannedPlanet(){		//konstruktor
	srand(time(NULL));
	nameGeneration();
	moonsScanning();
	oxygenScanning();
	temperatureScanning();
	surfaceScanning();
	compositionScanning();
	floraScanning();
	faunaScanning();
};
ScannedPlanet::~ScannedPlanet() {	//destruktor


};


