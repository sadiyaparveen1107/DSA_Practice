class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        // finding minimum size 
        int minSize = INT_MAX;
        for(int i=0 ; i < strs.size() ; i++){
            if( strs[i].size() < minSize ){
                minSize = strs[i].size();
            }
        }
        // using set to check common prefix
        for(int j=0; j<minSize; j++){
            unordered_set<char> s;
            for(int i=0; i<strs.size(); i++){
                s.insert(strs[i][j]);
            }
            if(s.size()!=1){
                return ans;
                break;
            }
            ans+=*s.begin();
        }
        return ans;
    }
};