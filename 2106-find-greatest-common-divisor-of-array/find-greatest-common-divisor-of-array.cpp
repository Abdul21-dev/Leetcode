class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
           maxi = max(maxi, nums[i]); 
        }
        int mini = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            mini = min(mini, nums[i]);
        }
        return gcd(maxi, mini);
    }
};