class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int val=INT_MIN;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                cnt++;
            }
            else if(cnt==0){
                val=nums[i];
                cnt++;
            }
            else
            cnt--;
        }
        return val;
    }
};