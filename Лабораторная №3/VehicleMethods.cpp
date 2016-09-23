#include "stdafx.h"

#include <iostream>
#include "VehicleClass.h"
#include "DriverClass.h"
using namespace std;

Vehicle::Vehicle(int we,int explu, int ag, char nam[20]): weight(we),expluatation(explu){
	man = new Driver(ag,nam);
	cout << "Vehicle class was created!!!" << endl;
}

void Vehicle::show(){
	cout << "Weight: " << weight << endl
		<< "Expluatation: " << expluatation << endl
		<< "Captan's age: " << this->man->age << endl
		<< "Captan's name: " << this->man->age << endl;
}

