class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            int req=target-nums[i-1];
            if(mp[req]!=0){
                return {mp[req]-1,i-1};
            }
            mp[nums[i-1]]=i;
        }
        return {};
    }
};
