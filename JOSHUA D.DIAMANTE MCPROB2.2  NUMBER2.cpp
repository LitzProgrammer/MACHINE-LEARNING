#include <iostream>
using namespace std;
main(){
	int year;
	//input
	cout<<"INPUT THE YEAR" <<endl;
	cin>>year;
	//output
	if (year % 4 == 0 ){
    cout << year << " IS A LEAP YEAR";
  }
  else{
  	cout<<year <<" IS NOT A LEAP YEAR";
  }
}
