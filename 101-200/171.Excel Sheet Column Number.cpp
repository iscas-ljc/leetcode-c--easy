class Solution {
public:
    int titleToNumber(string s) {
        int lens=s.size();
        int result=0;
        for(int i=0;i<lens;i++){
            result=result*26+(s[i]-'A'+1);
        }
        return result;
    }
};