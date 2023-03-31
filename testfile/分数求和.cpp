#include <iostream>
using namespace std;
int gongyueshu(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main(){
	char ch;
	int n;
	int i;
	cin>>n;
	int fenzi[10],fenmu[10];
	for(i=0;i<n;i++){
		cin>>fenzi[i]>>ch>>fenmu[i];
	}
	int fenzihe=0,tmp;
	int j;
	for(i=0;i<n;i++){
		tmp=fenzi[i];
		for(j=0;j<n;j++){
			if(i==j){
				j++;
			}
			tmp*=fenmu[j];
		}
		fenzihe+=tmp;
	}
	int fenmuji=1;
	for(i=0;i<n;i++){
		fenmuji*=fenmu[i];
	}
	int a=gongyueshu(fenmuji,fenzihe);
	if(fenzihe%fenmuji==0){
		cout<<fenzihe%fenmuji;
	}else{
		cout<<fenzihe/a<<"/"<<fenmuji/a;
	}
}