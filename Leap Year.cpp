#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter year :"<<endl;
	cin>>n;
	if(n%4==0&&n%100!=0){
		cout<<"Leap year"<<endl;
	}
	else{
		cout<<"Not a Leap year"<<endl;
	}
  return 0;
}
