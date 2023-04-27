/*
写一个程序，输入一个分数，计算出它的小数形式。无论是否可以除尽，输出最多小数点后200位。
*/
#include <iostream>
using namespace std;

class calc
{
	int res[200];
	int a;
	int b;
	int cnt=0;
public:
	void getdata(){
		cin>>a;
		getchar();
		cin>>b;
	}
	void cal(){
		while(cnt<200){
			a*=10;
			res[cnt++] = a / b;
			a = a % b;
			if(a == 0){
				break;
			}
		}
	}
	void print(){
		cout<<"0.";
		for(int i=0;i<cnt;i++){
			cout<<res[i];
		}
	}
};



	int main(){
		calc x;
		x.getdata();
		x.cal();
		x.print();

		return 0;
	}