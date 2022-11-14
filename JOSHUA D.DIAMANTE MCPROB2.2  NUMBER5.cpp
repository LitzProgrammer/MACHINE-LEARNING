#include <iostream>
using namespace std;
int main (){
	int assign,seatwork,quiz,exam;
	float total;
	//INPUT YOUR SCORES//
	cout<<"ENTER YOUR GRADE SCORE IN ASSIGNMENT"<<endl;
	cin>>assign;
	cout<<"ENTER YOUR GRADE SCORE IN SEATWORK"<<endl;
	cin>>seatwork;
	cout<<"ENTER YOUR GRADE SCORE IN QUIZ"<<endl;
	cin>>quiz;
	cout<<"ENTER YOUR GRADE SCORE IN EXAM"<<endl;
	cin>>exam;
	//TOTAL GRADES //
	total= (assign * 0.1) + (seatwork * 0.2) + (quiz * 0.3) + (exam * 0.4);
	//OUTPUT//
	if ((total >= 97 && total <=100)){
		cout<<"YOUR TOTAL GRADE IS:" <<total <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 1.00" <<endl;
		cout<<"EXCELLENT";
	}
	else if ((total >=94 && total <=96)){
		cout<<"YOUR TOTAL GRADE IS:" <<total <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 1.25" <<endl;
		cout<<"EXCELLENT";
	}
	else if ((total >=91 && total <=93)){
		cout<<"YOUR TOTAL GRADE IS:" <<total  <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 1.50" <<endl;
		cout<<"VERY GOOD";
	}
	else if ((total >=88 && total <=90)){
		cout<<"YOUR TOTAL GRADE IS:" <<total <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 1.75" <<endl;
		cout<<"VERY GOOD";
	}
	else if ((total >=85 && total <=87)){
		cout<<"YOUR TOTAL GRADE IS:" <<total <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 2.00" <<endl;
		cout<<"GOOD";
	}
	else if ((total >=82 && total <=84)){
		cout<<"YOUR TOTAL GRADE IS:" <<total <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 2.25" <<endl;
		cout<<"GOOD";
	}
	else if ((total >=79 && total <=81)){
		cout<<"YOUR TOTAL GRADE IS:" <<total <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 2.50" <<endl;
		cout<<"SATISFACTORY";
	}
	else if ((total >=76 && total <=78)){
		cout<<"YOUR TOTAL GRADE IS:" <<total <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 2.75" <<endl;
		cout<<"FAIR";
	}
	else if (total >=75){
		cout<<"YOUR TOTAL GRADE IS:" <<total <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 3.00" <<endl;
		cout<<"PASSED";
	}
	else{
		cout<<"YOUR TOTAL GRADE IS:" <<total <<endl;
		cout<<"YOUR EQUIVALENT GRADE IS 5.00"<<endl;
		cout<<"FAILED";
	}
	return 0;
}
