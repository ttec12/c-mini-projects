#include<iostream>
using namespace std;

int main(){
	
	
	float x;
	
	cout<<"Enter student exam score"<<endl;
	cin>>x;
	
	if(x<=100&&x>=60){
		cout<<"You have passed"<<endl;
	}
	else{
		cout<<"You have failed"<<endl;
	}
	if(x>100){
		cout<<"score is above the accepted range"<<endl;
	}
	return 0;
}
