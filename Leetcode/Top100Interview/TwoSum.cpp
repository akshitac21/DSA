class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //using maps
        unordered_map<int,int>mp;

        for(int i=0; i<nums.size(); i++){
            int ele = target - nums[i];
            if(mp.find(ele)==mp.end()){
                mp[nums[i]]=i;
            }
            else{
                return {mp[ele], i};
            }
        }

        return {0,0};
    }
        
};
