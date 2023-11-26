#include <iostream>
using namespace std;

int main()
{
    for(int a = 0; a <= 9; a++)
    {
        for(int b = 0; b <= 9; b++)
        {
            if (a < b)
            {
                cout << a <<b << ",";
            }
        }
    }
    cout << endl;
    return 0;
}