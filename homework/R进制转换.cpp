//输入一个十进制数N，将它转换成尺进制数输出。
//输入数据包含多个测试实例，每个测试实例包含两个整数N(32位整数）和R(2<=R<=16,R<>10）。
#include <iostream>
#include <string>
using namespace std;
class change{
private:
	int number;
	int R;
	int cnt=0;
	char result[100];
	string str="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
public:
	void getdata(){
		cin>>number;
		cin>>R;
	}
	void getresult(){
		while(number){
			result[cnt++]=str[number%R];
			number/=R;
		}
	}
	void printresult(){
		for(int i=cnt-1;i>=0;i--){
			cout<<result[i];
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
		data.getresult();
		data.printresult();
	}
}