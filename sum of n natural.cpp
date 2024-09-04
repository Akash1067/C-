#include <iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"Enter a positive integer: "<<endl;
	cin>>num;
	if(num<=0){
		cout<<"Please a enter a positive integer(num): "<<endl;
		return 1;
	}

	for(int i=1;i<=num;++i){
		sum+=i;
		
	}
	cout<<"Sum of "<<num<<" natural are"<<sum<<endl;
	return 0;
} 
