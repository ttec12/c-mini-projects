#include <iostream>
using namespace std;

int main(){
	
	float grade;
	
	cout<<"Enter student grade "<<endl;
	cin>>grade;
	
	if (grade>=80&&grade<=100){
		cout<<" Your grade letter is: "<<"A";
	}
	else if (grade>=70&&grade<80){
		cout<<"Your grade letter is: "<<"B";
	}
	else if (grade>=60&&grade<70){
		cout<<"Your grade letter is: "<<"C";
	}
	else if (grade>=50&&grade<60){
		cout<<"Your grade letter is: "<<"D";
	}
	
	else {
		cout<<"Your grade letter is: "<<"F";
	}
	if(grade<0){
		if(grade=='char'){
			cout<<" error";
		
		cout<<"  error"<<endl;
	}
}
	return 0;
}
