/*
描述
求大于m且紧靠m的k个回文数。
（回文数即左右对称的数，如12321，1221)
输入
第1行是一个整数N，表示随后有N组数据。
每组数据包含两个整数m和k。
输出
对每组数据，输出求大于m旦紧靠m的k个回文数，以空格隔开，并换行。
*/
#include <iostream>
#include <string>
using namespace std;
class huiwen{
private:
	int m;
	int k;
	int result[100];
public:
	void getdata(){
		cin>>m>>k;
	}
	void search();
	int judge(int s);
	void printres(){
		for(int i=0;i<k;i++){
			cout<<result[i]<<" ";
		}
		cout<<endl;
	}
};
int huiwen::judge(int s){
		int y=0;
		int tmp=s;
		while(s>0){
			y=y*10+s%10;
			s/=10;
		}
		if(y==tmp){
			return 1;
		}else{
			return 0;
		}
	}
void huiwen::search(){
	int i;
	int j=0;
	for(i=m;j<k;i++){
		if(judge(i)){
			result[j++]=i;
		}
	}
}
int main(){
	int N;
	cin>>N;
	huiwen x;
	for(int i=0;i<N;i++){
		x.getdata();
		x.search();
		x.printres();
	}
}