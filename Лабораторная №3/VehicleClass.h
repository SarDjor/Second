class Vehicle {
protected:
	int weight;
	int expluatation;
private:
	
public:
	Vehicle(int we,int explu,int ag,char nam[20]);
	class Driver;
	Driver *man;
	virtual void show();
	~Vehicle();
};

class Ship : public Vehicle{
public:
	Ship(int we, int explu, int ag, char nam[20]) 
		                           : Vehicle(we, explu, ag, nam){
		printf("Ship class was created!!!\n");
	};
};

class SteamRoller : public Vehicle {
public:
	SteamRoller(int we, int explu, int ag, char nam[20])
		:Vehicle(we, explu, ag, nam){
		printf("SteamRoller class was created!!!\n");
	};
};

class WingShip : public Vehicle {
public:
	WingShip(int we, int explu, int ag, char nam[20])
		:Vehicle(we, explu, ag, nam){
		printf("WingShip class was created!!!\n");
	};
};

class Korvet : public Vehicle {
public:
	Korvet(int we, int explu, int ag, char nam[20])
		:Vehicle(we, explu, ag, nam){
		printf("Korvet class was created!!!\n");
	};
};