#include <iostream>
using namespace std;

class date {
	private:
		char xingqi[7][10]= {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
		int ey,em,ed;
		int sy=1900,sm=1,sd=1;
		int m[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
		char ch;
	public:
		int sum=0;
		void getdate() {
			cin>>ey>>ch>>em>>ch>>ed;
		}
		void cal();
		void judge() {
			if((ey%4==0&&ey%100!=0)||ey%400==0)
				m[2]=29;
			else
				m[2]=28;
		}
		void printresult(){
			sum%=7;
			cout<<xingqi[sum];
		}
};
void date::cal() {
	int i;
	for(i=sy;i<=ey;i++){
		sum+=365;
	}
	for(i=sy;i<=ey;i++){
		if((i%4==0&&i%100!=0)||i%400==0){
			sum++;
		}
	}
	if((ey%4==0&&ey%100!=0)||ey%400==0){
		if(em==1||(em==2&&ed<29)){
			sum--;
		}
	}
	judge();
	for(i=em;i<=12;i++){
		sum-=m[i];
	}
	sum+=ed;
	sum--;
}
int main(){
	date x;
	x.getdate();
	x.cal();
	x.printresult();
}
