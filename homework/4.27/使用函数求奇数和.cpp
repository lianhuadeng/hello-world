
/*描述
使用函数求奇数和：输入一批正整数（遇到以零或负数为结束标志时，计算结束），求其中的奇数和。
要求定义和调用函数even(n)判断西数的奇偶性，当n为偶数时返回1，否则返回0。试编写相应程序。
输入
输入一批正整数，其中整数之间以空格隔开
输出
整数*/
#include <iostream>
using namespace std;

class jishuhe
{
	int arr[100];
	int cnt=0;
	int result=0;
public:
	int even(int i){
		if (i%2==0)
		{
			return 1;
		}else{
			return 0;
		}
	}
	void getdata(){
		int tmp;
		while(1){
			cin>>tmp;
			if(tmp>0){
				arr[cnt++]=tmp;
			}else{
				break;
			}
		}
	}
	void cal(){
		for(int i=0;i<cnt;i++){
			if (even(arr[i])==0)
			{
				result+=arr[i];
			}
		}
	}
	void print(){
		cout<<result;
	}
};


int main(){
	jishuhe x;
	x.getdata();
	x.cal();
	x.print();
	

	return 0;
}