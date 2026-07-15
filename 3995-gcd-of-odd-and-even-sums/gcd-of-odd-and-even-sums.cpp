class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        // return n;
       int sumodd=1;
       int sumeven=2;
        for(int i=1; i<n; i++){
            sumodd += 2;
        }
        int a = sumodd-2;
        while(a>0){
            sumodd += a;
            a -= 2;
        }
        for(int i=1; i<n; i++){
            sumeven += 2;
        }
        int b = sumeven-2;
        while(b>0){
            sumeven += b;
            b -= 2;
        }
        
         return gcd(sumodd, sumeven);
    }
};