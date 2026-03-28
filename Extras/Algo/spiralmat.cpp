#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix(3,vector<int>(3));
    int row = matrix.size();
    int col = matrix[0].size();
    matrix= {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << matrix[i][j] << " ";
    }
      cout << endl;
    }

    //initializing the indices

    int rowS = 0;
    int colS = 0;
    int rowE = row-1;
    int colE = col-1;

    while(rowS <= rowE && colS <= colE){
        //left to right
        for(int i=0; i<=colE; i++){
            cout << matrix[rowS][i] << " ";
        }
        rowS++;
   }
}