#include<iostream>
using namespace std;
int main(){
	int a=2;
	int sum=0;
	while(a<100){
		sum=sum+a;
		
		a=a+2;
	}
	cout<<"Value of sum "<<sum<<endl;
	return 0;
}
