/*
描述
从键盈输入六个整数，计算它们的的平均值和方差
输入
第一行是一个整数n，表示有n组测试数据；
然后有n行数据，每行包含6个整数，使用空格隔开
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class cal{
private:
	float data[6];
	float pingjun;
	float fangcha;
public:
	void getdata(){
		for (int i = 0; i < 6; i++)
		{
			cin>>data[i];
		}
	}
	void calprevent(){
		float sum=0;
		for (int i = 0; i < 6; i++)
		{
			sum+=data[i];
		}
		pingjun=sum/6;
	}
	void calfangcha(){
		float sum=0;
		for (int i = 0; i < 6; i++)
		{
			sum+=pow((data[i]-pingjun),2);
		}
		fangcha=sum/6;
	}
	void printres(){
		cout << fixed << setprecision(2) << pingjun << " " << fangcha << endl;	}
};
int main(){
	int n;
	cin>>n;
	cal x;
	for (int i = 0; i < n; i++)
	{
		
		x.getdata();
		x.calprevent();
		x.calfangcha();
		x.printres();	
	}
}