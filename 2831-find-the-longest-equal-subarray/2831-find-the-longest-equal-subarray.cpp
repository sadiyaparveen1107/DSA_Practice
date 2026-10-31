class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int l=0, r=0, maxlen=0, maxf=0;
        unordered_map<int,int> mp;

        while(r < nums.size()){
            mp[nums[r]]++;
            maxf = max(maxf, mp[nums[r]]);

            if((r-l+1)-maxf > k){
                mp[nums[l]]--;
                l++;
            }

            if((r-l+1)-maxf <= k) maxlen = max(maxlen, maxf);
            r++;
        }
        return maxlen;
    }
};