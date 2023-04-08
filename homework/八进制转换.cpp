//编写一个程序，读入用户输入的整数并按八进制显示出来。 (0~32767)
#include <iostream>
using namespace std;
class change{
private:
	int number;
	int yushu[100];
	int cnt=0;
public:
	void getnumber(){
		cin>>number;
	}
	void getyushu(){
		while(number){
			yushu[cnt++]=number%8;
			number/=8;
		}
	}
	void printresult(){
		for(int i=cnt-1;i>=0;i--){
			cout<<yushu[i];
		}
	}
};
int main(){
	change number;
	number.getnumber();
	number.getyushu();
	number.printresult();
}