#include <iostream>
using namespace std;

int main(){
	int i,j,n;
	cout<<"Enter a number of rows: ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=i;j<n;j++){
			cout<<" ";
		}
		for(j=1;j<=(2*i-1);j++){
			if(j==1||j==(2*i-1)||i==n){
				cout<<"*";
			}else{
				cout<<" ";
				
			}
		}
		cout<<endl;
	}
	for(i=n-1;i>=1;i--){
		for(j=n;j>i;j--){
			cout<<" ";
		}
		for(j=1;j<=(2*i-1);j++){
			if(j==1||j==(2*i-1)||i==1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
