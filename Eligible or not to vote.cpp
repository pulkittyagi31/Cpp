#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter age:"<<endl;
	cin>>n;
	if(n>=18){
		cout<<"Eligible to vote"<<endl;
	}
	else{
		cout<<"Not Eligible to vote"<<endl;
	}
  return 0;
}
