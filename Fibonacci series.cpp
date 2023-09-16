#include<iostream>
using namespace std;
int main(){
	int n,n1=0,n2=1,n3=0;
	cout<<"Enter number:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i==1){
			cout<<n1<<endl;
			continue;
		}
		if(i==2){
			cout<<n2<<endl;
			continue;
		}
		n3=n1+n2;
		n1=n2;
		n2=n3;
		cout<<n3<<endl;
	}
	
	return 0;
}
