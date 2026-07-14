class Solution {
public:
bool isVowel(char x){
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        return true;
    }
    return false;
}
void solve(string a, int& count){
    if(isVowel(a[0]) && isVowel(a[a.size()-1])){
        count++;
    }
}
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left; i<=right; i++){
            solve(words[i], count);
        }
        return count;
    }
};