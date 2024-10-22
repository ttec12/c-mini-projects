
#include<iostream>
using namespace std;
int main (){
	int x, sum=0, i=0;
	do{
		cout<<"Enter a number"<<endl;
		cin>>x;
		if(x<0) goto ll;
		i=i+1;
	}while(i<11);
	ll:
	cout<<"sum="<<sum<<endl;
	return 0;
}
