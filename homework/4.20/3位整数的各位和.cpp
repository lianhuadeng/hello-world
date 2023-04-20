#include <iostream>
using namespace std;

class problem
{
    int num;
    int sum;
public:
    problem(int n){
        num=n;
    }
    void cal(){
        sum=0;
        sum += num % 10; 
        num /= 10; 
        sum += num % 10; 
        num /= 10; 
        sum += num; 
        cout<< sum;
    }

};

int main() {
    int n;
    cin >> n;
    problem x(n);
    x.cal();
    return 0;
}
