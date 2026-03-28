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

    cout<<"Sine wave: " << endl;

    for(int j=0; j<col; j++){
        if(j&1){ //odd column
            for(int i=row-1; i>=0; i--){
                cout << matrix[i][j] << " "; //down to up
            }
        }
        else{ //even column
            for(int i=0; i<row; i++){
                cout << matrix[i][j] << " "; //up to down
            }
        }
    }

}
