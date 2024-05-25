#include <iostream>

int main()
{
    using namespace std;

    for (int a = 0; a <= 99; ++a)
    {
        for (int b = 0; b <= 99; ++b)
        {
            if (a < b)
            {
                if ( (a / 10) >= 1 && (a % 10) == 0)
                {
                    cout << a / 10 << a % 10 << ' ';
                }
                else if ( (a / 10) >= 0 && (a % 10) != 0 )
                {
                    cout << a / 10 << a % 10 << ' ';
                }
                else if ( (a / 10) == 0 && (a < 10))
                {
                    cout << a / 10 << a / 10 << ' ';
                }
                else
                {
                    cout << "problem occured" << endl;
                    break;
                }
                if ( (b / 10) >= 1 && (b % 10) == 0)
                {
                    cout << b / 10 << b % 10 << ',' << ' ';
                }
                else if ( (b / 10) >= 0 && (b % 10) != 0 )
                {
                    cout << b / 10 << b % 10 << ',' << ' ';
                }
                else if ( (b / 10) == 0 && (b < 10))
                {
                    cout << b / 10 << b / 10 << ',' <<' ';
                }
                else
                {
                    cout << "problem occured" << endl;
                    break;
                }
            }
            /*cout << a % 10 << b % 10 << ',' << ' ';*/
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
