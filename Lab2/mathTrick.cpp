#include <iostream>

using namespace std;

int main(){

	int num=0;

	cin>>num;

	float result=0;
	
	result=(num*4+6)/(3+(num%2))-num;

	cout<<"The result is "<<result<<endl;

	return 0;
}
