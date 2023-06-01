#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int arr[3][3];


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Output: "<<endl;

    for(int i=0;i<3;i++){ //row wise
        for(int j=0;j<3;j++){ //column wise
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    /*
    
    int sum = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
    }

    cout<<"sum: "<<sum<<endl;

    int arr2[3][4];

    
    cout<<"Taking column wise input: "<<endl;

    for(int i=0; i<4; i++){ //column wise
        for(int j=0; j<3; j++){ //row wise
            cin>>arr2[j][i]; //col input then row input
        }
    }

    cout<<"Output: "<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    

   cout<<"Search a key: "<<endl;
   int key;
   cin>>key;

   for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(arr[i][j]==key){
            cout<<"Key found at row: "<<i<<" and column: "<<j<<endl;
            break;
        }
    }
    }

  cout<<"column wise sum: "<<endl;
  for(int j=0; j<3; j++){
    int sum = 0; //initial sum
    for(int i=0; i<3; i++){
        sum+=arr[i][j]; //sum of all elements in row i
    }
    cout<<"Sum in col"<<j<<" is: "<<sum<<endl;
  }
  */

 cout<<"Greatest Row wise sum: "<<endl;
 int maxi = INT_MIN; //climits header 
 int index = -1;

   for(int i=0; i<3; i++){
    int sum = 0; //initial sum
    for(int j=0; j<3; j++){
        sum+=arr[i][j]; //sum of all elements in row i
    }
    if(sum>maxi){
        maxi = sum;
        index = i;
    }
   }
   cout<<"Max row sum: "<<maxi<<" At index: "<<index<<endl;

    return 0;

}
