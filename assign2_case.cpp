//	Assignment 2:

#include<iostream>	
using namespace std;
main(){
	int a,b;
	char cv;
	cout<<"enter the 1st number ";
	cin>>a;
	cout<<"enter the 2nd number ";
	cin>>b;
	
	cout<<"enter the operation sign\n";
	cin>>cv;
	
	switch(cv){
		case '+':
			cout<<"\nAddition = "<<a+b;
			break;
		case '-':
			cout<<"\nSubtraction = "<<a-b;
			break;
		case '*':
			cout<<"\nMultiplication = "<<a*b;
			break;
		case '/':
			cout<<"\nDivision = "<<a/b;
			break;
		default:
			cout<<"Invalid input";
	}
}
