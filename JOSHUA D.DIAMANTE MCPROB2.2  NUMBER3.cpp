#include <iostream>
using namespace std;
 int main(){
	char character;
	//input
	cout<<"INPUT A CHARATER" <<endl;
	cin>>character;
	//output
	if((character >= 'a' && character <= 'z') || (character >='A' && character <='Z')){
		cout<<character <<" IS ALPHABET ";
	}
	else{
	cout<<character <<" IS NOT ALPHABET";
	}
	return 0;
}
