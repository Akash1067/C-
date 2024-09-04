#include <iostream>
using namespace std;

int findgcd(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
		
	}
	return a;
	
}

int main(){
	int num1,num2,gcd;
	cout<<"Enter a number 1: "<<endl;
	cin>>num1;
	cout<<"Enter a number 2: "<<endl;
	cin>>num2;
	
	gcd=findgcd(num1,num2);
	
	cout<<"The gcd of "<<num1<<"and"<<num2<<"is"<<gcd<<endl;
	return 0;
}

