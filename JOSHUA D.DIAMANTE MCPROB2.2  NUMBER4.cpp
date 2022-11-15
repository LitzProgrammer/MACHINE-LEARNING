#include <iostream>
using namespace std;
int main(){
	float pre,mid,final,total;
	//input grades
	cout<<"ENTER YOUR PRELIM GRADES" <<endl;
	cin>>pre;
		cout<<"ENTER YOUR MIDTERM GRADES" <<endl;
	cin>>mid;
		cout<<"ENTER YOUR FINAL GRADES" <<endl;
	cin>>final;
	//formula
	total= (pre * 0.3) + (mid * 0.3) + (final * 0.4);
	//output
	if ((total >=98 && total <=100)){
		cout<<"YOUR GRADE IS 1.00";
	}
	 else if ((total >=95 && total <=97)){
		cout<<"YOUR GRADE IS 1.25";
	}
	else if ((total >=92 && total <=94)){
		cout<<"YOUR GRADE IS 1.50";
	}
	else if ((total >=89 && total <=91)){
		cout<<"YOUR GRADE IS 1.75";
	}
	else if ((total >=85 && total <=88)){
		cout<<"YOUR GRADE IS 2.00";
	}
	else if ((total >=82 && total <=84)){
		cout<<"YOUR GRADE IS 2.25";
	}
	else if ((total >=80 && total <=81)){
		cout<<"YOUR GRADE IS 2.50";
	}
	else if ((total >=77 && total <=79)){
		cout<<"YOUR GRADE IS 2.75";
	}
	else if ((total >=75 && total <=76)){
		cout<<"YOUR GRADE IS 3.00";
	}
	else if ((total >=70 && total <=74)){
		cout<<"YOUR GRADE IS 4.00";
	}
	else {
		cout<<"YOUR GRADE IS 5.00";
	}
	return 0;
}
