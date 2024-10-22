#include<iostream>
using namespace std;
int main(){
	
	char oper;
	float Num1, Num2, s;
	
	cout<<"Enter first number: "<<endl;
	cin>>Num1;
	
	cout<<"Enter an operator(*,+,-,/): "<<endl;
	cin>>oper;
	
	cout<<"Enter second number: "<<endl;
	cin>>Num2;
	
	if(oper=='+'){
		s= Num1 + Num2;
	}
	
	else if(oper=='*'){
		s= Num1 * Num2;
	}
	else if(oper=='/'){
		s= Num1 / Num2;
	}
	
	else if(oper=='-'){
		s= Num1 - Num2;
	}
	
	else{
		cout<<"The operator is not recognized. Use any of the following: *,+,/,-"<<endl;
	}
	
	cout<<"Output of the computation: "<<s<<endl;
	
	return 0;
}
