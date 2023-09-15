#include<iostream>
using namespace std;
int main(){
   float p,r,t;
   cout<<"Enter the Principal amount:"<<endl;
   cin>>p;
   cout<<"Enter the rate of percentage:"<<endl;
   cin>>r;
   cout<<"Enter the time:"<<endl;
   cin>>t;
   //simple interest=(p*r*t)/100
   float interest=(p*r*t)/100;
   cout<<"Simple Interest is:"<<interest<<endl;
    return 0;
}
