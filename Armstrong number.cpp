#include<iostream>
using namespace std;
int main(){
	int n,r,s,t;
	//r=remainder,n=input number,t=temp,s=sum
	cout<<"Enter any number:"<<endl;
	cin>>n;
	t=n;
	while(t>0){
		r=t%10;
		t=t/10;
		s=s+r*r*r;
	}
	if(s==n)
	cout<<"Number is armstrong"<<endl;
	else	
	cout<<"Number is not armstrong"<<endl;
	return 0;
}
