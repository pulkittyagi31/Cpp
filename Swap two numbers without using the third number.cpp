#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter first number:"<<endl;
  cin>>a;
  cout<<"Enter second number:"<<endl;
  cin>>b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"Swap of two number without using the third number is :"<<a<<","<<b<<endl;
  return 0;
}
