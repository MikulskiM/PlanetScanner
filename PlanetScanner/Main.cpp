#include <iostream>
#include "ScannedPlanet.h"
#include <string>
#include <time.h>

int main()
{
	std::string decision;
	ScannedPlanet* wsk;
	do {
		
		wsk = new ScannedPlanet;
		std::cout << "\n\nPlaneta znajduje sie w pamieci pod adresem: "<<wsk<<"\n\n";
		std::cout << "\n\n   Would you like to send your probe torwards another planet? ";
		std::cin >> decision;
		delete wsk;
	} while (decision == "yes" || decision == "y" || decision == "tak" || decision == "t");



	system("pause");
	return 0;
}