#include<iostream>
#include<string>
class Myclass{
public:
	int num;
	std::string string;
	};
int main(){
	Myclass obj;
	obj.num=15;
	obj.string="Welcome to Saveetha School of Engineering";
	std::cout<<obj.num<<"\n";
	std::cout<<obj.string;
	return 0;
}
