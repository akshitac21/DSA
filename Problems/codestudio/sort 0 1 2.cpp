https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{

   int zero=0, one=0, two=0;

   for(int i=0; i<n; i++){
      if(arr[i] == 0)
      zero++;
      if(arr[i] == 1)
      one++;
      if(arr[i] == 2)
      two++;

   }
   
   int j=0;

   for(; j<zero; j++){
      arr[j]=0;
   }

   for(; j<(zero+one); j++){
      arr[j]=1;
   }

   for (; j < (zero + one + two); j++) {
     arr[j] = 2;
   }
}
