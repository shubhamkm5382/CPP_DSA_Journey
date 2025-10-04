#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n =";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int i = 0; i < n; i++)
        {
            cout << ch << " ";
            ch += 1; 
        }
        cout << endl;
    }

    return 0;
}