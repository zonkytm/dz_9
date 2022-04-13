#include "property.h"


double  Apartament::Tax() {
	return worth / 1000;
}

double Car::Tax() {
	return worth / 200;
}

double CountryHouse::Tax() {
	return worth / 500;
}
