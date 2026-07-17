class Solution {
public:
bool isPrime(int a){
    if(a <= 1) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;

    for(int i = 3; i * i <= a; i += 2) {
        if(a % i == 0)
            return false;
    }
    return true;
}
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans=0;
        int i=0; int j=0;
        while(i<nums.size() && j<nums[0].size()){
            if(isPrime(nums[i][j])){
                ans = max(ans, nums[i][j]);
            }
            i++;
            j++;
        }
        i=0; j=nums[0].size()-1;
        while(i<nums.size() && j>=0){
            if(isPrime(nums[i][j])){
                ans = max(ans, nums[i][j]);
            }
            i++;
            j--;
        }
        return ans;
    }
};