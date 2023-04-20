/*描述
输入
在一行中给出一个整数。
输出
在一行中输出对应的季节。
*/
#include <iostream>
using namespace std;

class change
{
	char p[4][10]={"Spring","Summer","Fall","Winter"};
public:
	change(int i){
		if(i<1 || i>4){
			cout<<"Invalid input"<<endl;
			return;
		}
		cout<<p[i-1];
	}
};
int main(){
	int i;
	cin>>i;
	change x(i);
}