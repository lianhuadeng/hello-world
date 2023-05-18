/*
颠倒给定的 32 位无符号整数的二进制位。
*/
#include <string>
#include <iostream>
using namespace std;

class diandao
{
	string data;

public:
	void getdata(){
		cin>>data;
	}
	void change(){
		reverse(data.begin(),data.end());
		cout<<data;
	}
};

int main(){
	diandao x;
	x.getdata();
	x.change();

	return 0;
}