#include <iostream>
using namespace std;

void reverseNum(int n)
{
    int revNum = 0;
    int temp = n;

    while (temp > 0)
    {
        int lastDigit = temp % 10;

        temp = temp / 10;

        revNum = (revNum * 10) + lastDigit;
    }

    if(n == revNum) cout<<"Pallindrome";
    else cout<<"Not Pallindrome";
}

int main()
{
    int n;
    cin >> n;

    reverseNum(n);
}