//输入几个分数并对他们求和，并用化简。最简形式是指分子分母的最大公约数为1;若最終结果的
//分母为1，则直接用整数表示。
#include <iostream>
using namespace std;
int gongyueshu(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main(){
	char ch;
	int n;
	int i;
	cin>>n;
	int fenzi[10],fenmu[10];
	for(i=0;i<n;i++){
		cin>>fenzi[i]>>ch>>fenmu[i];
	}
	int fenzihe=0,tmp;
	int j;
	for(i=0;i<n;i++){
		tmp=fenzi[i];
		for(j=0;j<n;j++){
			if(i==j){
				continue;
			}
			tmp*=fenmu[j];
		}
		fenzihe+=tmp;
	}
	int fenmuji=1;
	for(i=0;i<n;i++){
		fenmuji*=fenmu[i];
	}
	int a=gongyueshu(fenmuji,fenzihe);
	if(fenzihe%fenmuji==0){
		cout<<fenzihe%fenmuji;
	}else{
		cout<<fenzihe/a<<"/"<<fenmuji/a;
	}
}