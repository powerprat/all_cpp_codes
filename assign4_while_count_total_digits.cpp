//	Assignment 4:
#include<iostream>
using namespace std;

main(){
	int n, rem, rev=0, temp, flag=0;
	cout<<"enter the number\n";
	cin>>n;
	temp=n;
	while(n!=0){
		n=n/10;
		flag++;
	}
	cout<<"number of digits = "<<flag;
}