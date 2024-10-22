#include<iostream>
using namespace std;
int main(){
	int i=1, j=1, a=10;
	do{
		do{
			cout<<i;
			i=i+1;
		}while(i<=a);
		i=1;
		j=j+1;
		a--;
		cout<<""<<endl;
	}while(j<11);
	return 0;
	
	}

