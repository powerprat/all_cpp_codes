//	Assignment 7:

#include<iostream>	
using namespace std;
main(){
	int a=0, b=0,n, fibo=1;
	int sum=0;
	cin>>n;
	cout<<0;
	while(fibo<n){
		cout<<"\n"<<fibo;	
		a=b;
		b=fibo;
		sum=sum+fibo;
		fibo=a+b;
	}
	cout<<"sum is = "<<sum;
	
	
}