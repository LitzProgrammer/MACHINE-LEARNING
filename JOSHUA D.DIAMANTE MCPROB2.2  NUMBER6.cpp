#include <iostream>
using namespace std;
int main(){
	int grade;
	//input average
	cout<<"INPUT YOUR GRADE  POINT GRADE AVERAGE" <<endl;
	cin>>grade;
	//output
	if ((grade ==0 && grade <=0.99)){
		cout<<"FAILED SEMESTER-REGISTRATION SUSPENDED";
	}
	if ((grade >=1.0 && grade <=1.99)){
	cout<<"ON PROBATION FOR NEXT SEMESTER";
	}
	if ((grade >= 2.0 && grade <=2.99)){
	}
	if ((grade >=3.0 && grade <=3.49)){
		cout<<"DEAN'S LIST FOR SEMESTER";
	}
	if ((grade >=3.5 && grade <=4.00)){
		cout<<"HIGHEST HONORS FOR SEMESTER";
	}
	return 0;
}
