class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>arr;
        int a = n;
        while(a>0){
            int y = a%10;
            if(y!=0){
                arr.push_back(y);
            }
            a = a/10;
        }
        long long sum=0;
        while(n>0){
            sum += n%10;
            n = n/10;
        }
        long long x=0;
        int t=0;
        for(int i=0; i<arr.size(); i++){
            x += arr[i]*pow(10,t);
            t++;
        }
        long long v = x*sum;
        return v;
    }
};