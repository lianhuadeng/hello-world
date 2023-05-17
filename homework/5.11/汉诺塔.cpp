/*
描述
汉诺塔是由三根杆子A，B，C组成的。A杆上有N个(N>0)穿孔圆盘，盘的尺寸由下到上依次变小，盘的数宇编号由上到下依次递增(Disk1为最顶部的圆盘）。要求按下列规则将所有圆盘
移至C枉：
1. 每次只能移动一个圆盘；
2. 大盘不能叠在小盘上面；
了.可将圆盛临时置于B杆，也可将从A杆移出的圆盘重新移回A杆，但都必须遵待上述两条规则。
*/
#include<iostream>
using namespace std;
int temp=0;
int move(int n,char a,char b,char c){
	
	if(n==0){
		
		return 0;//函数出口 
	}
	move(n-1,a,c,b);//第一步，将n-1个盘子从A柱移动至B柱（C柱为工具柱） 
	temp++;//输出移动过程前计数 
	cout<<a<<"--->"<<c<<endl;//输出移动过程 
	move(n-1,b,a,c);//第二步将B柱的n-1个盘子移动至C柱（A柱为工具柱） 
//	cout<<b<<"--->"<<c<<endl; 
}


int main(){
	int n;
	char a='A',b='B',c='C';
	cin>>n;
	move(n,a,b,c);	
	cout<<temp;
	return 0;
}
