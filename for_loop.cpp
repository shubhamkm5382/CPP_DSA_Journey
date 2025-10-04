#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    cout << "Enter the number :" << endl;
    cin >> num;
    for (int i = 1; i <= num; i += 2)
    {
        sum += i;
    }
    cout << "Sum of odd numbers up to " << num << " is = " << sum << endl;
    return 0;
}
