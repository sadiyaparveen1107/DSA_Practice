class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastLetter = s.length()-1;
        int count=0 ;

        while(lastLetter>=0 && s[lastLetter]==' '){
            lastLetter-- ;
        }
        while(lastLetter>=0 && s[lastLetter] != ' '){
            count++ ;
            lastLetter-- ;
        }
        return count ;
    }
};