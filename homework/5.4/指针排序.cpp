
#include <iostream>
using namespace std;

class paixu
{
public:
	void sort_1(int num[],int n){
		int tmp;
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){
				if(num[j]>num[j+1]){
					tmp=num[j];
					num[j]=num[j+1];
					num[j+1]=tmp;

				}
			}
		}
	}
	void print(int num[],int n){
		for(int i=0;i<n;i++){
			cout<<num[i]<<" ";
		}
	}
};


int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	paixu x;
	x.sort_1(arr,n);
	x.print(arr,n);
	return 0;
}