/*描述
用户输入一个1-100之问的整数（包含1和100），然后根据输入，分别输出代表年龄段划分的中：
•1-10: Children
•11-20: Teenagers
• 21-40: Youth
• 41-50: middle-aged
• 51-80:Elderly
• 81-100: old man
输入
在一行中给出一个整数。
*/
#include <iostream>
using namespace std;

class change
{
	int age;
public:
	change(int i){
		age=i;
	}
	void cal(){
		if (age >= 1 && age <= 10) {
			cout << "Children" << endl;
		} else if (age >= 11 && age <= 20) {
			cout << "Teenagers" << endl;
		} else if (age >= 21 && age <= 40) {
			cout << "Youth" << endl;
		} else if (age >= 41 && age <= 50) {
			cout << "middle-aged" << endl;
		} else if (age >= 51 && age <= 80) {
			cout << "Elderly" << endl;
		} else if (age >= 81 && age <= 100) {
			cout << "old man" << endl;
		}
	}
};

int main(){
	int i;
	cin>>i;
	change x(i);
	x.cal();
}