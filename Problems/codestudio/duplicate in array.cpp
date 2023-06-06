https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include <algorithm>
int findDuplicate(vector<int> &arr) 
{
    int ans=0;

    for(int i=0; i<arr.size(); i++){
      ans = ans^arr[i]; //XOR'ing all array elements
    }

    for(int i=1; i<arr.size(); i++){
      ans = ans^i; //XOR'ing between numbers 1 to size to get the element
    }

    return ans;
}
