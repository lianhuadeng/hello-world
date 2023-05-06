/*
描述
有一个非空的密钥宇符串 S，只包含字母，数字以及’’(破折号）。其中，N个’一将宇符串分成了 N+1组。
给你一个正整数K，请你只保留S中的宇母和数字，重新格式化宇符串，使每个分组恰好包含K 个宇符。特别地，第一个分组包含的宇符个数必须小于等于 K，但至少要包含1个字符。两
个分组之间需要用’’(破折号）隔开，并且将所有的小写字母转换为大写宇母。
用给定的非空字符串 S 和正整数K，按照上面描述的规则进行格式化。
*/
#include <string>
#include <iostream>
using namespace std;

class geshihua
{
	string S;
	int k;
	string result;
public:
	void getdata(){
		cin>>S;
		cin>>k;
	}
	void change(){
		for(int i=0;i<S.length();i++){
			if(S[i]>='a'&&S[i]<='z'){
				S[i]-=32;
			}
		}
	}
	void getresult();
	void print(){
		cout<<result;
	}
};
void geshihua::getresult() {
    // 去掉破折号
    string tmp;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] != '-') {
            tmp += S[i];
        }
    }
    // 插入破折号 
    //substr(位置，长度)获取子串
    result = tmp.substr(0, tmp.length() % k);
    for (int i = tmp.length() % k; i < tmp.length(); i += k) {
        if (result.length() > 0) {
            result += '-';
        }
        result += tmp.substr(i, k);
    }
}

int main(){
	geshihua x;
	x.getdata();
	x.change();
	x.getresult();
	x.print();

	return 0;
}