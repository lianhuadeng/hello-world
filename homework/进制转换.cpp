// 描述
// 进制之间的转换非常有趣，例如将十进制的7转化为二进制为111，转化为三进制为21。
// 请编写程序将十进制整数转换成指定进制。
// 输入
// 第1行是一个整数n，表示随后有n组数据。每组数据占一行，包括2个十进制数正整数a，6，其中1≤a≤100000，2≤b≤10，用空格隔开。
// 输出
// 对每组数据，将十进制整数a转专换为6进制，并换行。
#include <iostream>
using namespace std;
class change{
private:
	int number;
	int jinzhi;
	int cnt=0;
	int yushu[100];
public:
	void getdata(){
		cin>>number;
		cin>>jinzhi;
	}
	void getyushu(){
		while(number){
			yushu[cnt++]=number%jinzhi;
			number/=jinzhi;
		}
	}
	void printresult(){
		for(int i=cnt-1;i>=0;i--){
			cout<<yushu[i];
		}
		cout<<endl;
	}
};

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		change data;
		data.getdata();
		data.getyushu();
		data.printresult();
	}
}