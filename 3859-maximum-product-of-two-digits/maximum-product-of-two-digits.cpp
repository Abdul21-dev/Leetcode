class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        while(n>0){
            arr.push_back(n%10);
            n /= 10;
        }
        int max1 = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            max1 = max(max1, arr[i]);
        }
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==max1){
                arr[i] = INT_MIN;
                break;
            }
        }
        int max2 = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            max2 = max(max2, arr[i]);
        }
        return max1*max2;
    }
};