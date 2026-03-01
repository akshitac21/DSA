#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        int count = 1;
        for (int j = i; j < input; j++)
        {
            cout << count++;
        }
        cout << endl;
    }

    return 0;
}