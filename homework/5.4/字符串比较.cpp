/*
描述
题目说起来很简单，你会读到两个宇符串，每个字符串占据一行，每个宇符串的长度均小于10000字符，而且第一个字符串的长度小于第二个字符串的。你的程序要找出第一个宇符串在第
二个字符串中出现的位置，输出这些位置，如果找不到，则输出-1。
注意，第一个字符的位置是0。
注意，第一个字符串在第二个宇符串中的位置可能不止一处。
注意，字符串中可能含有空格。
注意，两个字符串的长度一定大于0。
注意，为简化程序，两个字符串均只由26个小马英文字母组成的情况。
*/
#include <iostream>
#include <string>
using namespace std;

class compare
{
	string str1;
	string str2;
	int result[100];
	int cnt=0;
public:
	void getdata(){
		cin>>str1;
		getchar();
		getline(cin,str2);
	}
	void getresult();
	void print(){
		for(int i=0;i<cnt;i++){
			cout<<result[i]<<" ";
		}
	}
};
void compare::getresult(){
		int len1=str1.length();
		int len2=str2.length();
		int i,j;
		int tmp;
		for(i=0;i<len2-len1+1;i++){
			if(str2[i]==str1[0]){
				tmp=i;
				for(j=0;j<len1;){
					if(str2[tmp]==str1[j]){
						tmp++;
						j++;
					}else{
						break;
					}
				}
				if(j==len1){
					result[cnt++]=i;
				}
			}
		}
	}

int main(){
	compare x;
	x.getdata();
	x.getresult();
	x.print();
	return 0;
}
