#include <math.h>
#include <iostream>
using namespace std;

bool checkArmstrong(int n)
{
    string digits = to_string(n);
    int digitcount = digits.size();
    int num = n;
    int r = 0;
    int sum = 0;
    while (n > 0)
    {
        r = n % 10;
        sum = pow(r, digitcount) + sum;
        n = n / 10;
    }
    if (sum == num)
    {
        return true;
    }
    else
        return false;
}

int main(){
    int n;
    cin>>n;

    cout<<checkArmstrong(n);

    return 0;
}
