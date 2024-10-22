#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int size = 10;
	int i=1;
	while(i<=11){
		int j=1;
		while (j<=11){
			cout<<"*";
			j++;
		}
		cout<< endl;
		i++;
	}
	getch();
}
