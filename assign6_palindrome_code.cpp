//	Assignment 6:
#include<iostream>
using namespace std;

main(){
	int n, rem, rev=0, temp;
	cout<<"enter the number\n";
	cin>>n;
	temp=n;
	while(n>0){
		rem=n%10;
		rev = rev*10 + rem;
		n=n/10;
	}
	if(temp==rev){
		cout<<"number is palindrome\n";
	}
	else{
		cout<<"number is not palindrome";
	}
}
