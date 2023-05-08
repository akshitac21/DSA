https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int k) {
	sort(nums.begin(), nums.end());
	vector<vector<int>>ans;

	for(int i=0; i<n-1; i++){
		int low=i+1, high=n-1;

		while(low<high){
			if(nums[i]+nums[low]+nums[high]<k){
				low++;
			}
			else if(nums[i]+nums[low]+nums[high] > k){
				high--;                                                                                                                          ; 
			}
			else{
                          ans.push_back({nums[i], nums[low], nums[high]});

                              int index1 = low;
                              int  index2 = high;

                          while (low < high && nums[low] == nums[index1]) //avid repetition
                            low++;
                          while (low < high && nums[high] == nums[index2])
                            high--;
			}
		}

		while(i+1<n && nums[i] == nums[i+1]) i++; //to go thru each element once
	}

	return ans;
}
