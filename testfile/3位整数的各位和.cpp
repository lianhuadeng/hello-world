#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;
    sum += num % 10; 
    num /= 10; 
    sum += num % 10; 
    num /= 10; 
    sum += num; 
    cout<< sum;
    return 0;
}
