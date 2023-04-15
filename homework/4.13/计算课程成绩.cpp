/*
描述
输入学生姓名和某课程的平时成绩和期末成绩，按平时成绩占40%，期木成绩占60%计算总分，输出学生该课程的成绩。
输入
输入若千行，每行输入一个学生的信息和成绩，长度不超过100个字符，输入格式为：
姓名 平时成绩 期末成绩
其中，学生姓名不包含空格，长度不超过30字符，成绩范围0-100分的浮点数，学生数不超过100个。
输出
按总分由高到低排序输出，成绩取2位小数，输出格式：
姓名 平时成绩 期末成绩 总成绩
*/
#include <iostream>
#include <string>
using namespace std;
class grade{
public:
	float pingshi;
	float qimo;
	string name;
	float final;
	void getdata(){
		cin>>pingshi>>qimo;
	}
	void cal(){
		final=pingshi*0.4+qimo*.6;
	}
};
void sort(grade *x,int cnt){
	int i,j;
	grade tmp;
	for(i=0;i<cnt-1;i++){
		for(j=0;j<cnt-i-1;j++){
			if(x[j].final<x[j+1].final){
				tmp=x[j];
				x[j]=x[j+1];
				x[j+1]=tmp;
			}
		}
	}
}
void printres(grade *x,int cnt){
	for(int i=0;i<cnt;i++){
		cout<<x[i].name<<" "<<x[i].pingshi<<" "<<x[i].qimo<<" "<<x[i].final<<endl;
	}
}
int main(){
	grade x[100];
	string tmp;
	int cnt=0;
	while(cin>>tmp){
		x[cnt].name=tmp;
		x[cnt].getdata();
		x[cnt].cal();
		cnt++;
	}
	sort(x,cnt);
	printres(x,cnt);
}