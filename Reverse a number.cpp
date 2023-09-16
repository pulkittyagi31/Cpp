#include<iostream>
using namespace std;
int main(){
	int n,r=0,x;
	//x=remainder,n=input number,r=reverse number
	cout<<"Enter any number:"<<endl;
	cin>>n;
	while(n>0){
		x=n%10;
		n=n/10;
		r=r*10+x;
			
	}
	cout<<"Reverse of the number is :"<<r<<endl;

	return 0;
}
