#include<iostream>
using namespace std;

int main() {
	
	float x;
	
	cout<<"Enter student exam score"<<endl;
	cin>>x;
	if(x<=100&&x>=60){
		cout<<"You have passed"<<endl;
	}
	if(x>=0&&x<60){
		cout<<"You have failed"<<endl;
	}
	return 0;
}
