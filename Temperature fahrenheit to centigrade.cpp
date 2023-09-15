#include<iostream>
using namespace std;
int main(){
  float c,t;
  cout<<"Enter the temperature in fahrenheit"<<endl;
  cin>>t;
  c=(t-32)*5/9;
  cout<<"Temperature in centigrade is:"<<c<<endl;
  return 0;
}
