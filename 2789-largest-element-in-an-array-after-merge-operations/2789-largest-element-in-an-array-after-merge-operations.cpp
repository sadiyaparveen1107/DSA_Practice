class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long n = nums.size()-1 ;
        long long maxValue = nums[n];

        for(int i=n-1 ; i>-1 ; i-- ){
            maxValue = (nums[i] <= maxValue? maxValue + nums[i] : nums[i] ) ;
        }
        return  maxValue ;
    }
};