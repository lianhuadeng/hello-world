/*
描述
UTC是世界协调时，BJT是北京时间，UTC时间相当于BJT减去8。现在，你的程序要读入一个整数，表示BJT的时和分。整数的个位和十位表示分，百位和千位表示小时。如果小时小于
10，则没有千位部分；如果小时是0，则没有百位部分；如果小时不是0而分小于10分，需要保留十位上的0；如果小时是0而分小于10分的，则不需要保留十位上的0。如1124表示11点24
分，而905表示9点5分，36表示0点36分，7表示0点7分。
有效的输入范围是0到2359，即你的程序不可能从测试服务器读到0到2359以外的输入数据。
你的程序要输出这个时间对应的UTC时间，输出的格式和输入的相同，即输出一个整数，表示UTC的时和分。整数的个位和十位表示分，百位和千位表示小时。如果小时小于10，
位部分；如果小时是0，则没有百位部分；如果小时不是0而分小于10分，需要保留十位上的0；如果小时是0而分小于10分的，则不需要保留十位上的0。
提醒：要小心跨日的换算。
输入
一个整数，表示BT的时和分。整数的个位和十位表示分，百位和千位表示小时。如果小时小于10，则没有千位部分；如果小时是0，则没有百位部分：如果小时不是0而分小于10分，需
保留十位上的0；如果小时是0而分小于10分的，则不需要保留十位上的0。
*/
#include <iostream>
using namespace std;
class change{
private:
	int bjt_h;
	int bjt_min;
	int utc_h;
	int utc_min;
public:
	void getime(){
		int tmp;
		cin>>tmp;
		if((tmp/100)!=0){
			bjt_h=tmp/100;
			utc_min=tmp%100;
		}else if((tmp/100)==0){
			bjt_h=0;
			utc_min=tmp%100;
		}
	}
	void cal(){
		utc_h=bjt_h-8;
		if(utc_h<0){
			utc_h+=24;
		}
	}
	void printres(){
		if((utc_h!=0)&&(utc_min<10&&utc_min>0)){
			cout<<utc_h<<"0"<<utc_min;
		}else if((utc_h!=0)&&utc_min==0){
			cout<<utc_h<<"00";
		}else{
            cout<<utc_min;
        }
	}
};
int main(){
	change x;
	x.getime();
	x.cal();
	x.printres();
}