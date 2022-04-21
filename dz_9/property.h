#ifndef property_H
#define property_H

#include <iostream>

using namespace std;

class Property {
protected:
	double worth;

public:
	Property() {
		worth = 0;
	}
	Property(double worth) {
		this->worth = worth;
	}
	virtual double Tax() = 0;
	virtual int Get_worth() { return worth;}
};

class Apartament : public Property {

public:
	Apartament() :Property() {

	}
	Apartament(double worth) :Property(worth) {

	}
	double Tax() override;
};



class Car: public Property {
public:
	Car():Property() {
	}
	Car(double worth) : Property(worth) {

	}
	double Tax() override;
};

class CountryHouse : public Property {
public:
	CountryHouse():Property(){}

	CountryHouse(double worth) : Property(worth) {

	}
	double Tax() override;
};

#endif