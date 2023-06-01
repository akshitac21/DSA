#include <iostream>
#include <math.h>
using namespace std;

void print_binary(int num)
{
    int result = 0;

    int i=0;

    while(!(num==0 | num == -1))
    {
        int bit = num & 1; //rightmost bit from num

        result += bit * pow(10,i);

        num = num>>1;
        i++;

    }

    cout<<result<< endl;
}

    int main()
    {
        int num;
        cin>>num;

        if(num<0)
        {
            int neg_num = ~num + 1; //take 2's complement
            print_binary(neg_num);
        }
        else
        {
            print_binary(num);
        }

}
