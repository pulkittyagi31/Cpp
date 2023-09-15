#include<iostream>
#include<math.h>
using namespace std;
int main(){
   float p,r,t;
   cout<<"Enter the Principal amount:"<<endl;
   cin>>p;
   cout<<"Enter the rate of percentage:"<<endl;
   cin>>r;
   cout<<"Enter the time:"<<endl;
   cin>>t;
   //ci=p*(1+r/100)^t
   float b=pow(1+r/100,t);
   float interest=p*b;
   cout<<"Compound Interest is:"<<interest<<endl;
   return 0;
}
