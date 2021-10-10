#include <iostream>
using namespace std;

int main()
{
    int raw;
    cout << "enter the number of raws" << endl;
    cin >> raw;
    for (int i = 1; i <= raw; i++)
    {
        for (int j = 1; j <= raw + 1 - i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
