class Solution {
public:
void solve(int a, int& sum2){
    vector<int>arr;
    while(a>0){
        arr.push_back(a%10);
        a = a/10;
    }
    for(int i=0; i<arr.size(); i++){
        sum2 += arr[i];
    }
}
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int i=0; i<nums.size(); i++){
            sum1 += nums[i];
            solve(nums[i], sum2);
        }
        return abs(sum1-sum2);
    }
};