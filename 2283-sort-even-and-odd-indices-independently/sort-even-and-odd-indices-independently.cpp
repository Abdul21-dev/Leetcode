class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        for(int i=0; i<nums.size(); i++){
            arr1.push_back(nums[i]);
            i++;
        }
        for(int i=1; i<nums.size(); i++){
            arr2.push_back(nums[i]);
            i++;
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        vector<int>ans;
        int i=0; int j=arr2.size()-1;
        while(i<arr1.size() && j>=0){
            ans.push_back(arr1[i]);
            ans.push_back(arr2[j]);
            i++;
            j--;
        }
        while(i<arr1.size()){
            ans.push_back(arr1[i]);
            i++;
        }
        while(j>=0){
            ans.push_back(arr2[j]);
            j--;
        }
        return ans;
    }
};