#include <iostream>
using namespace std;
int main(){
	int n,counts[1000]={0};
	int num;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++){
		cin>>num;
		counts[num]++;
	}
	for(i=0;i<1000;i++){
		if(counts[i]==2){
			cout<<i<<" ";
		}
	}
}