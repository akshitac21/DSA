//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
	    
	    void swapnum(int &a, int &b){
	        a = a ^ b;
	        b = a ^ b;
	        a = a ^ b;
	    }
	    
	    void sortnum(vector<int>&v, int n){
	        for(int i=1; i<n; i++){
	            for(int j=0; j<n-i; j++){
	                if(v[j]>v[j+1]){
	                    swapnum(v[j],v[j+1]);
	                }
	            }
	        }
	    }
	    
		int find_median(vector<int> v)
		{
		    
		    int n = v.size();
		    sortnum(v,n);
		    
		    int median=0;
		    
		    if(n%2==0){
		        median = (v[n/2]+v[(n/2)-1])/2;
		    }
		    else{
		        median = v[n/2];
		    }
		    
		    return median;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
