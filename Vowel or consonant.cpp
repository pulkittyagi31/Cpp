#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter any character:"<<endl;
	cin>>ch;
	if(ch>='a'&&ch<='z'|| ch>='A'&&ch<='Z'){
		switch (ch){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
		cout<<"It is a vowel character"<<endl;
		break;
		default:
		cout<<"It is a consonant character"<<endl;
		}
}
else{
	cout<<"It is not an alphabet"<<endl;
}
  return 0;
}
