/*
输入
总共要输入两个多项式，每个多项式的输入格式如下：
每行输入两个数字，第一个表示幂次，第二个表示该幂次的系数，所有的系数都是整数。第一行一定是最高幂，最后一行一定是0次幂。
注意第一行和最后一行之间不一定按照幂次降低顺序排列；如果某个暑次的系数为0，就不出现在输入数据中了；0次幂的系数为0时还是会出现在输入数据中。
输出
从最高幂开始依次降到0幂，如：
2×6+3×5+12×3-6×+20
*/
#include <iostream>
using namespace std;

class adding
{
	int mici[100]={0};
	int a,b;
public:
	void getdata(){
		for(int i=0;i<2;){
			cin>>a>>b;
			if(a==0){
				i++;
				mici[a]+=b;
			}else{
				mici[a]+=b;
			}
		}
	}
	void print(){
		for(int i=100;i>0;i--){
			if(mici[i]){
				if(i!=1){
					cout<<mici[i]<<"x"<<i<<"+";
				}else{
					cout<<mici[i]<<"x"<<"+";
				}
			}
		}
		cout<<mici[0];
	}
};

int main(){
	adding x;
	x.getdata();
	x.print();

	return 0;
}