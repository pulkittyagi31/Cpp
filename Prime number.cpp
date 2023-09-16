#include<iostream>
using namespace std;
int main(){
	int n,i,count=0;
	cout<<"Enter any number:"<<endl;
	cin>>n;
	if(n==0){
		cout<<"Not a prime number"<<endl;
	}
	else{
		for(i=2;i<n;i++){
			if(n%i==0)
			count++;
		}
		if(count>1){
			cout<<"Not a prime number"<<endl;
		}
		else{
			cout<<"Prime number"<<endl;
		}
	}
	return 0;
}
