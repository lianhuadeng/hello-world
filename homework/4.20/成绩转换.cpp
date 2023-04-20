/*描述
本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：
•大于等于90分为A；
。小于90且大于等于80为B；
•小于80且大于等于70为C；
•小于70日大于等于60为D；
•小于60为E。*/
#include <iostream>
using namespace std;

class change
{
	int grade;
public:
	change(int i){
		grade = i;
	}
	void cal(){
		if (grade >= 90) {
            cout << "A" << endl;
        } else if (grade >= 80) {
            cout << "B" << endl;
        } else if (grade >= 70) {
            cout << "C" << endl;
        } else if (grade >= 60) {
            cout << "D" << endl;
        } else {
            cout << "E" << endl;
        }
	}
	
};
int main(){
	int i;
	cin>>i;
	change x(i);
	x.cal();
}