#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = i; j <= n; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}