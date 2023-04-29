/*
给定一个n*n矩阵A。矩阵A的鞍点是一个位置 （i，j），在该位置上的元素是第i行上的最大数，第列上的最小数。一个矩阵A也可能没有鞍点。
你的任务是找出A的鞍点。

*/
#include <iostream>
using namespace std;

class andian {
		int arr[100][100];
		int maxofrow[100];
		int minofcol[100];
		int a=-1,b;
	public:
		void getdata(int n) {
			for(int i=0; i<n; i++) {
				for(int j=0; j<n; j++) {
					cin>>arr[i][j];
				}
			}
		}
		int get(int n){
			if(n>9){
				return 100;
			}else{
				return 10;
			}
		}
		void getmaxofrow(int n) {
			for(int i=0; i<n; i++) {
				int maxj = 0;
				for(int j=1; j<n; j++) {
					if(arr[i][j]>arr[i][maxj]) {
						maxj = j;
					}
				}
				maxofrow[i] = i*get(n) + maxj;
			}
		}

		void getminofcol(int n) {
			for(int j=0; j<n; j++) {
				int mini = 0;
				for(int i=1; i<n; i++) {
					if(arr[i][j]<arr[mini][j]) {
						mini = i;
					}
				}
				minofcol[j] = mini*get(n) + j;
			}
		}
		void search(int n) {
			if(n<10) {
				for(int i=0; i<n; i++) {
					if(maxofrow[i]==minofcol[maxofrow[i]%10]) {
						a=i;
						b=maxofrow[i/10];
						cout<<a<<" "<<b<<endl;
					}
				}
				if(a<0){
					cout<<"NO";
				}
			} else {
				for(int i=0; i<n; i++) {
					if(maxofrow[i]==minofcol[maxofrow[i]%100]) {
						a=i;
						b=maxofrow[i/100];
						cout<<a<<" "<<b<<endl;
					}
				}
				if(a<0){
					cout<<"NO";
				}
			}
		}
};


int main() {
	int n;
	cin>>n;
	andian x;
	x.getdata(n);
	x.getmaxofrow(n);
	x.getminofcol(n);
	x.search(n);


	return 0;
}
