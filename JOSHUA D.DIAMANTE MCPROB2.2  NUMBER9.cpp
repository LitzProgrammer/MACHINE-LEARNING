#include <iostream>
using namespace std;
int main(){
	int watts;
	//input 
	cout<<"=====SELECT WATTS====="<<endl;
	cout<<"1.(15 WATTS)"<<endl;
	cout<<"2.(25 WATTS)"<<endl;
	cout<<"3.(40 WATTS)"<<endl;
	cout<<"4.(60 WATTS)"<<endl;
	cout<<"5.(70 WATTS)"<<endl;
	cout<<"6.(100 WATTS)"<<endl;
	cin>>watts;
	//output
	switch(watts)
	{
		case 1 :
				cout<<"125 LUMENS IS THE EXPECTED BRIGHTNESS";
				break;
		case 2 :
				cout<<"215 LUMENS IS THE EXPECTED BRIGHTNESS";
				break;
		case 3 :
				cout<<"500 LUMENS IS THE EXPECTED BRIGHTNESS";
				break;
		case 4 :
				cout<<"880 LUMENS IS THE EXPECTED BRIGHTNESS";
				break;
		case 5 :
				cout<<"1000 LUMENS IS THE EXPECTED BRIGHTNESS";
				break;
		case 6 :
				cout<<"1675 LUMENS IS THE EXPECTED BRIGHTNESS";
				break;
		default:
				cout<<"-1 LUMENS"<<endl;
				cout<<"THE VALUE IS NOT IN THE SELECTION";
	}
	return 0;
}
