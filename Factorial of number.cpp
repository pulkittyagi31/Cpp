#include<iostream>
using namespace std;
int main(){
	int i,f,n;
	cout<<"Enter any number:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	cout<<"Factorial of number is :"<<f<<endl;
	return 0;
}
