#include <iostream>
using namespace std;
int main(){
	int kilowatts;
	float cost;
	//input kilowatts per hour//
	cout<<"ENTER THE KILOWATTS HOURS"<<endl;
	cin>>kilowatts;
	//calculate the cost//
	if (kilowatts <100)
	{
		//formula//
		cost = kilowatts *10;
		cout<<"TOTAL ELECTRIC BILLS IS " <<cost <<".00 PESOS"<<endl;
	}
	if (kilowatts <=249)
	{
		//formula//
		cost= kilowatts * 50;
		cout<<"TOTAL ELECTRIC BILLS IS " <<cost <<".00 PESOS" <<endl;
	}
	if (kilowatts >=250)
	{
		//formula//
	cost= ( 99 * 10 )+ ( kilowatts -50)+ ( 250 -100)*50;
		cout<<"TOTAL ELECTRIC BILLS IS " <<cost <<".00 PESOS"<<endl;
	}
	return 0;
}
