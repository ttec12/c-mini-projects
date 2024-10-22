#include <iostream>
using namespace std;

int main(){
	float x;
	cout<<"Enter exam score"<<endl;
	cin>>x;
	
	if(x<=100&&x>=60){
		cout<<"you have passed"<<endl;
	}
	else{
		cout<<"You have failed"<<endl;
	}
	
	return 0;
}
