/*
描述
C语言中有一个函数strstr。我们编写一个类似功能的函数，mystrstr
int mystrstr(char alI, char bI]);
作用是查找字符串a中出现的第一个b串的下标，如果没有找到，返回-1。
*/
#include <iostream>
#include <string>
using namespace std;

int mystrstr(char a[],char b[]);

int main(){
	char a[1000];
	char b[100];
	cin>>a>>b;
	cout<<mystrstr(a,b);

	return 0;
}
int mystrstr(char a[],char b[]){
	int i,j,n;
	int flag;
	for(i=0;i<strlen(a);i++){
		n=i;
		if(a[i]==b[0]){
			for(j=0;j<strlen(b);){
				if (a[n]==b[j])
				{
					n++;
					j++;
				}
			}
			if(j==strlen(b)){
				return i;
			}
		}
		if(i==strlen(a)){
			return -1;
		}
	}
	return -1;
}