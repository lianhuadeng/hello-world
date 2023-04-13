/*
描述
给定一个圆的半径后，打印其直径、周长和面积(每个数据单独一行）。
输入
第1行输入一个整数「，表示圆的半径，换行。r取3.14。
输出
计算圆的直径、周长和面积，每个数据单独显示一行。
其中圆的周长及面积的计算分别写在两个函数里面，并通过函数调用的方法输出结果。
*/
#include <iostream>
using namespace std;
const float pi=3.14;
class yuan{
private:
	int r;
	int tmp;
public:
	void get_r(){
		cin>>r;
	}
	void print_d(){
		cout<<"直径="<<2*r<<endl;
	}
	void print_c(){
		cout<<"周长="<<2*r*pi<<endl;
	}
	void print_s(){
		cout<<"周长="<<pi*r*r<<endl;
	}
};
int main(){
	yuan date;
	date.get_r();
	date.print_d();
	date.print_c();
	date.print_s();
}