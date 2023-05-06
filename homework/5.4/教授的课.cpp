/*
描述
教授正在为一个有N个学生的班级讲授离散数学课。他对某些学生缺乏纪律性很不满意，于是决定：如果课程开始后上课的人数小于K，就取消这门课程。
从键盘输入每个学生的到达时间，请编程确定该课程是否被取消。如果该门课程被取消，则输出"Yes”，否则输出”No"。
假设教授在时刻0开始上课。
◎如果一个学生的到达时间是非正整数，则表示该学生在上课前进入教室。
◎如果一个学生的到达时间是正整数，则表示该学生在上课后进入教室。
◎如果一个学生在时刻O进入教室，也被认为是在上课前进入教室。
假设到达时间的绝对值不超过100，学生数N不超过1000。要求在输入学生的到达时间之前，先输入N和K。
*/
#include <iostream>
using namespace std;

class attendence
{
	int n,k;
	int time[100];
	int cnt=0;
public:
	void getdata(){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>time[i];
		}
	}
	void judge(){
		for(int i=0;i<n;i++){
			if(time[i]<=0){
				cnt++;
			}
		}
	}
	void Iscancel(){
		if(cnt<k){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}
};



int main(){
	attendence x;
	x.getdata();
	x.judge();
	x.Iscancel();

	return 0;
}