//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int rowStart = 0;
        int rowEnd = r-1;
        
        int colStart =0;
        int colEnd = c-1;
        
        vector<int>ans;
        
        while(rowStart<=rowEnd && colStart<=colEnd){
            
            //left to right -> (0,0)(0,1)(0,2)(0,3)
            for(int i=colStart; i<=colEnd; i++){
                ans.push_back(matrix[rowStart][i]);
            }
            rowStart++; //from row = 1
            
            //topEnd to bottomEnd-> (1,3),(2,3),(3,3)
            for(int i=rowStart; i<=rowEnd; i++){
                ans.push_back(matrix[i][colEnd]);
            }
            colEnd--; //from col 2
            
            if(rowStart<=rowEnd){
                
                //bottom right to bottom left
            for(int i=colEnd; i>=colStart; i--){
                ans.push_back(matrix[rowEnd][i]);
            }
            rowEnd--; //starts from 2
            
            }
            
            if(colStart <= colEnd){
                //bottom to up from right
            for(int i=rowEnd; i>=rowStart; i--){
                ans.push_back(matrix[i][colStart]);
            }
            colStart++; //starts from 1
            
            }
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
