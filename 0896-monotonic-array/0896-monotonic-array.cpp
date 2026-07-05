class Solution {
public:
bool incresing(vector<int>& nums){
    int i=0;
    while(i<nums.size()-1){
        if(nums[i]<=nums[i+1]){
            i++;
            continue;
        }
        return false;
    }
    return true;
}
bool decresing(vector<int>& nums){
    int i=0;
    while(i<nums.size()-1){
        if(nums[i]>=nums[i+1]){
            i++;
            continue;
        }
        return false;
    }
    return true;
}
    bool isMonotonic(vector<int>& nums) {
        return incresing(nums) || decresing(nums);
    }
};