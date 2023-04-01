/*电子邮件地址的一般格式为 usernameedomain.com ，为简化起见，我们规定合法的电子邮件地址必须满足以下条件：
1.username、domain和com三段只能出现以下字符：小写字母a到z、大写字母A到z、数字日到9、下划线一、减号-；
2.地址中只包含一个®，旦®不在字符串最前面，也不在最未位;
3.地址中只包含一个半角小数点 ．，且这个小数点不紧挨®后，也不在最未位。*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	char email[50];
	cin>>email;
	int len=strlen(email);
	int i,j;
	int at,dian;
	for(i=0;i<len;i++){
		if(email[i]=='@'){
			at=i;
			break;
		}
	}
	for(i=0;i<at;i++){
		if(email[i]<'0'&&email[i]!='-'){
			cout<<"no";
			return 0;
		}
		if(email[i]<'A'&&email[i]>'9'){
			cout<<"no";
			return 0;
		}
		if(email[i]>'Z'&&email[i]<'a'&&email[i]!='_'){
			cout<<"no";
			return 0;
		}
		if(email[i]>'z'){
			cout<<"no";
			return 0;
		}
	}
	for(i=at;i<len;i++){
		if(email[i]=='.'){
			dian=i;
			break;
		}
	}
	if(dian==(at+1)){
		cout<<"no";
		return 0;
	}
	for(i=at+1;i<dian;i++){
		if(email[i]<'0'&&email[i]!='-'){
			cout<<"no";
			return 0;
		}
		if(email[i]<'A'&&email[i]>'9'){
			cout<<"no";
			return 0;
		}
		if(email[i]>'Z'&&email[i]<'a'&&email[i]!='_'){
			cout<<"no";
			return 0;
		}
		if(email[i]>'z'){
			cout<<"no";
			return 0;
		}
	}
	for(i=dian+1;i<len;i++){
		if(email[i]<'0'&&email[i]!='-'){
			cout<<"no";
			return 0;
		}
		if(email[i]<'A'&&email[i]>'9'){
			cout<<"no";
			return 0;
		}
		if(email[i]>'Z'&&email[i]<'a'&&email[i]!='_'){
			cout<<"no";
			return 0;
		}
		if(email[i]>'z'){
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
}