class Solution {
public:
char shift(char x, char y){
    x += (y-'0');
    return x;
}
    string replaceDigits(string s) {
        for(int i=0; i<s.size(); i++){
            s[i+1] = shift(s[i],s[i+1]);
            i++;
        }
        return s;
    }
};