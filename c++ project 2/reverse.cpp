#include<iostream>
using namespace std;
int main(){
int x,div,i;
cout<<"Enter any positive integer"<<endl;
  cin>>x;
while(x>0){
div=x/10;
i=x-(div*10);
cout<<i;
x=div;}
cout<<" End of logic"<<endl;
return 0;}
