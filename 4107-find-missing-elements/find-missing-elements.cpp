class Solution {
public:
bool isPresent(int a, vector<int> nums){
    for(int i=0; i<nums.size(); i++){
        if(a==nums[i]){
            return false;
        }
    }
    return true;
}
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            mini = min(mini, nums[i]);
        }
        vector<int>ans;
        for(int i=mini; i<=maxi; i++){
            if(isPresent(i, nums)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};