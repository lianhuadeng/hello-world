
#include <iostream>
using namespace std;

class tel
{
	string zimu;
	int result[7];
public:
	void getdata(){
		cin>>zimu;
	}
	void change(){
		for(int i=0;i<7;i++){
			if(zimu[i]>='A'&&zimu[i]<='C'){
				result[i]=2;
			}
			if(zimu[i]>='D'&&zimu[i]<='F'){
				result[i]=3;
			}
			if(zimu[i]>='G'&&zimu[i]<='I'){
				result[i]=4;
			}
			if(zimu[i]>='J'&&zimu[i]<='L'){
				result[i]=5;
			}
			if(zimu[i]>='M'&&zimu[i]<='O'){
				result[i]=6;
			}
			if(zimu[i]>='P'&&zimu[i]<='S'){
				result[i]=7;
			}
			if(zimu[i]>='T'&&zimu[i]<='V'){
				result[i]=8;
			}
			if(zimu[i]>='W'&&zimu[i]<='Z'){
				result[i]=9;
			}
		}
	}
	void print(){
		for(int i=0;i<7;i++)
		cout<<result[i];
	}
};


int main(){
	tel x;
	x.getdata();
	x.change();
	x.print();

	return 0;
}