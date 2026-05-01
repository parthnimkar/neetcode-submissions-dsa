class Solution {
public:
    int xorTotals(int idx,int currXor,vector<int> &nums){
        if(idx == nums.size()) return currXor;

        int include = xorTotals(idx + 1,currXor ^ nums[idx],nums);
        int exclude = xorTotals(idx + 1,currXor,nums);

        return (include + exclude);
    }

    int subsetXORSum(vector<int>& nums) {
        return xorTotals(0,0,nums);
    }
};