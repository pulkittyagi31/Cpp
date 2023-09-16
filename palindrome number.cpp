#include<iostream>
using namespace std;
int main(){
	int n,r=0,x;
	//x=remainder,n=input number,r=reverse number,t=temp
	cout<<"Enter any number:"<<endl;
	cin>>n;
	int t=n;
	while(n>0){
		x=n%10;
		n=n/10;
		r=r*10+x;
	}
	if(t==r)
	cout<<"Number is palindrome"<<endl;
	else	
	cout<<"Number is not palindrome"<<endl;
	return 0;
}
