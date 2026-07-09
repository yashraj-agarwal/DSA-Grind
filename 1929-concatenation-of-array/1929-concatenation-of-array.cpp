class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n);
        for(int num=0; num<n; num++) {
            ans[num]=nums[num];
            ans[num+n]=nums[num];
            
        }
        return ans;
    }
};