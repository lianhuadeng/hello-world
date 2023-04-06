// 打印杨辉三角形的前num行(0<=num<=15)。
// 杨辉三角形规律如下：
// （前提：顶端的数为1）.
// 1、每个数等于它上方两数之和。（比t如第5行第二个数等于第四行第一数与第四行第二数之和，第9行第7个数等于第八行第6个数与第八行第7个数之和）
// 2、每行数宇左右对称，由1开始逐渐变大。
// 3、第n行的数字有n项。
#include <iostream>
using namespace std;

class yanghui{
private:
	int numRows;
	int triangle[100][100];
public:
	yanghui(int rows){
		numRows=rows;
	}
	void print(){// 打印三角形
		for (int i = 0; i < numRows; i++) {
			for (int j = 0; j <= i; j++) {
				cout << triangle[i][j] << " ";
			}
			cout << endl;
		}
	}
	void fill1(){// 在边缘填充1
		for (int i = 0; i < numRows; i++) {
			triangle[i][0] = 1;
			triangle[i][i] = 1;
		}
	}
	void fill(){// 用上方两个数字的总和填充其余部分
		for (int i = 2; i < numRows; i++) {
			for (int j = 1; j < i; j++) {
				triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
			}
		}

	}
};

int main() {
	int n,rows;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>rows;
		yanghui x(rows);
		x.fill1();
		x.fill();
		x.print();
	}
	return 0;
}
