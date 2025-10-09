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
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

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
    cout << endl;

    int number = 1;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
    cout << endl;

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch += i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        ch += i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    cout << endl;

    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    char latter = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << latter << " ";
            latter++;
        }
        cout << endl;
    }
    cout << endl;

    
/*! Question No. 13                          
                                             
      1 1 1 1 1                              
        2 2 2 2                              
          3 3 3                              
            4 4                              
              5                              
*/
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  " ;
        }
        for (int m = 0; m < n-i; m++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    
/*!    Question No. 14                                          

                1                                               
              1 2 1                                             
            1 2 3 1 2                                           
          1 2 3 4 1 2 3                                         
        1 2 3 4 5 1 2 3 4                                       
*/

    for (int i = 0; i < n; i++)
    {
        for (int m = 1; m < n-i; m++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j+1 << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    cout << endl;
    
/*! Question No. 15                          
                                             
                *                            
              *   *                          
            *       *                        
          *           *                      
        *               *                    
          *           *                      
            *       *                        
              *   *                          
                *                            
*/

for (int i = 0; i < n * 2 - 1; i++) {
        // Left spaces
        if (i < n) {
            for (int j = 0; j < n - i - 1; j++)
                cout << "  ";
        } else {
            for (int j = 0; j < i - n + 1; j++)
                cout << "  ";
        }

        // First star
        cout << "* ";

        // Middle spaces
        if (i < n) {
            for (int j = 1; j < i * 2; j++)
                cout << "  ";
        } else {
            for (int j = 0; j < (((n - 1) * 4) -1) - i*2; j++)
                cout << "  ";
        }

        // Second star (only when not first or last line)
        if (i > 0 && i < n*2 - 2) {
            cout << "*";
        }

        cout << endl;
    }
    cout << endl;

    // question 16 

    for (int i = 0; i < n*2; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < n*2-i; j++)
            {
                cout << "* ";
            }
            
        }
        if (i < n)
        {
            for (int j = 0; j < (n-1-i)*2; j++)
            {
                cout << "  ";
            }
        }
        else if (i > n)
        {
            for (int j = 0; j < (i-n)*2; j++)
            {
                cout << "  "; 
            } 
        }
        if (i < n)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < n*2-i; j++)
            {
                cout << "* ";
            }
            
        }

        cout << endl;
    }

    return 0;
}