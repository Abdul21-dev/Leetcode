class Solution {
public:
bool solve(int k,vector<int> nums){
    vector<int>arr;
    for(int i=0; i<nums.size(); i++){
        arr.push_back(nums[i]);
    }
    sort(arr.begin(), arr.end());
    vector<int>brr;
    for(int i=0; i<arr.size(); i++){
        brr.push_back(arr[(i+k)%nums.size()]);
    }
    if(brr == nums){
        return true;
    }
    return false;
}
    bool check(vector<int>& nums) {
        int small = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            small = min(small, nums[i]);
        }
       
        int k=1;
        while(k<=nums.size()){
            if(solve(k, nums)){
                return true;
            }
            k++;
        }
        return false;
    }
};