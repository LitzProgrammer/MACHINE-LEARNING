#include <iostream>
using namespace std;
int main(){
	int speed;
	//input speed
	cout<<"INPUT THE WIND SPEED" <<endl;
	cin>>speed;
	//output
	if (speed <=24)
	{
		cout<<"NOT A STRONG WIND"<<endl;
	}
	if ((speed >=25 && speed <=38))
	{
		cout<<"STRONG WIND" <<endl;	
	}
	if ((speed >=39 && speed <=54 ))
	{
		cout<<"GALE"<<endl;
	}
	if ((speed >=55 && speed <=72 ))
	{
		cout<<"WHOLE GALE"<<endl;
	}
	if(speed >72)
	{
		cout<<"HURRICANE"<<endl;
	}
	return 0;
}
