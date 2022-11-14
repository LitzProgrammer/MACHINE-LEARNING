#include <iostream>
using namespace std;
int main (){
	char id;
	//input id
	cout<<"ENTER SHIP CLASS ID"<<endl;
	cin>>id;
	//output
	if (id == 'b'|| id == 'B')
	{
		cout<<"BATTLESHIP";
	}
	if ( id == 'c' || id == 'C' )
	{
		cout<<"CRUISER";
	}
	if (id == 'd'|| id == 'D')
	{
		cout<<"DESTROYER";
	}
	if (id == 'f' || id == 'F')
	{
		cout<<"FRIGATE";
	}
	return 0;
}
