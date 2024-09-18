class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n= nums.size();
        // return nums[n/2];
        int freq=0, ans=0;

        for(int i=0; i<nums.size(); i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans== nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;

    }
};