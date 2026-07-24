class Solution {
public:
    bool isFascinating(int n) {
        if(n==384 || n==618 || n==915) return false;
        int a = 2*n;
        int b = (n*1000)+a;
        int c = 3*n;
        int d = (b*1000)+c;
        vector<int>arr;
        while(d>0){
            arr.push_back(d%10);
            d /= 10;
        }
        for(auto p:arr){
            if(p==0){
                return false;
            }
        }
        sort(arr.begin(),arr.end());
        vector<int>ans;
        for(int i=1; i<=9; i++){
            ans.push_back(i);
        }
        if(ans==arr){
            return true;
        }
        return false;
    }
};