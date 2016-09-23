// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "VehicleClass.h"
#include "DriverClass.h"
using namespace std;

int main(){
	Vehicle *BlackPerl = new Vehicle(500, 15, 32, "Jack Sparrow");
	BlackPerl->man->show();
	Ship *Avrora = new Ship(1000, 5, 25, "Kaptain");
	Avrora->show();
	SteamRoller *Tank = new SteamRoller(2000, 2, 42, "Evgeniy");
	Tank->show();
	WingShip *Moon = new WingShip(800, 300, 33, "Steve Hankock");
	Moon->show();
	Korvet *Beezy = new Korvet(3, 4, 19, "Pasha Kulich");
	return 0;
}
