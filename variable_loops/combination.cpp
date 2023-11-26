#include <iostream>
using namespace std;

int main()
{
    for(int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                if (a < b && c > b)
                {
                    cout << a << b << c << ",";
                }
            }
            
        }
        
    }
    cout << endl;
    return 0;
}