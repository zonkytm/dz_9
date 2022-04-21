#include "property.h"



//3 квартиры 2 машины 2 загородных дома
int main()
{
	Property* arr[7];//статический масив указателей => delete не нужен
	static int size = 7;
	double summ_tax = 0;
	for (int j = 0; j < size; j++)
	{
		if (j<3)
		{
			arr[j] = new Car(rand()%4000+1);
		}
		else if (j >= 3 and j <= 4) {
			arr[j] = new Apartament(rand() % 4000 + 1);
		}
		else {
			arr[j] = new CountryHouse(rand() % 4000 + 1);
		}
		 
	}
	for (int  i = 0; i < size; i++)
	{
		summ_tax += arr[i]->Tax();
		cout << arr[i]->Get_worth()<<endl ;
		delete arr[i];
		
	}
	cout << summ_tax;
}