#include <iostream>
using namespace std;
main(){
	int input;
	//input number
	cout<<"INPUT YOUR NUMBER" <<endl;
	cin>>input;
	//output
	if ((input % 5 == 0) && (input % 11 == 0)){
		cout<<"THE NUMBER IS DIVISIBLE BY 5 AND 11" <<endl;
	}
	else{
		cout<<"THE NUMBER IS NOT DIVIBLE BY 5 AND 11" <<endl;
	}
	return 0;
}
