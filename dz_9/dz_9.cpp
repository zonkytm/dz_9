#include "property.h"



//3 квартиры 2 машины 2 загородных дома
int main()
{
	Car a(1000), b(234), c(111);
	Car* a1 = &a, * b1 = &b, * c1 = &c;

	Apartament a_2(1000), b_2(234);
	Apartament* a2 = &a_2, * b2 = &b_2 ;

	CountryHouse a_3(1000), b_3(234);
	CountryHouse* a3 = &a_3, * b3 = &b_3;


	Property* arr[] =  {a1,b1,c1,a2,b2,a3,b3};//статический масив указателей => delete не нужен
	static int size = 7;
	double summ_tax = 0;
	for (int  i = 0; i < size; i++)
	{
		summ_tax += arr[i]->Tax();
		
	}
	cout << summ_tax;
}