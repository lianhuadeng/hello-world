/*
描述
你的程序要读入一行文本，其中以空格分隔为若千个单词，以"结束。你要输出这行文本中每个单词的长度。这里的单词与语言无关，可以包括各种符号，比如“is"算一个单词，长度为
4。注意，行中可能出现连续的空格。
*/
#include <string>
#include <iostream>
using namespace std;

class len
{
	string word;
	int result[10]={0};
	int cnt=0;
public:
	void getdata(){
		getline(cin,word);
	}
	int sum(int n){
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=result[i];
		}
		return sum;
	}
	void getresult(){
		int flag;
		for(int i=0;i<word.length();i++){
			if(cnt==0){
				if(word[i]==' '){
					result[cnt++]=i;
				}
			}else{
				if(word[i]==' '||word[i]=='.'){
					result[cnt]=i-sum(cnt)-cnt;
					cnt++;
				}
			}
		}
	}
	void print(){
		for(int i=0;i<cnt;i++){
			cout<<result[i]<<' ';
		}
	}
};


int main(){
	len x;
	x.getdata();
	x.getresult();
	x.print();

	return 0;
}