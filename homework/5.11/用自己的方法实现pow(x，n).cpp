/*
请用自己的方法实现 pow(a，几），即计算心的n 次幂函数。
*/
#include <iostream>
using namespace std;

class POW
{
	int x;
	int n;
	int result=1;
public:
	void getdata(){
		cin>>x;
		getchar();
		cin>>n;
	}
	void getresult(){
		for(int i=0;i<n;i++){
			result*=x;
		}
		cout<<result;
	}
};

int main(){
	POW x;
	x.getdata();
	x.getresult();

	return 0;
}