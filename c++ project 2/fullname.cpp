#include<iostream>
#include<cstring>


using namespace std;

int main(){
	
	char first_name[]{};
	char last_name[]{};
	char full_name[]{};
	
	
	
	cout<<"Enter first name ";
	cin>>first_name;
	
	cout<<"Enter last name ";
	cin>>last_name;
	

	
	
	strcpy(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);
	
	cout<<"Your fullname is "<<full_name<<endl;
	
	return 0;
	
}
