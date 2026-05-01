class Solution {
public:
    void findAllSubsets(int idx,vector<int> subset,vector<vector<int>> &subsets,vector<int> &nums){
        if(idx == nums.size()){
            subsets.push_back(subset);
            return;
        }

        subset.push_back(nums[idx]);
        findAllSubsets(idx+1,subset,subsets,nums);
        subset.pop_back();
        findAllSubsets(idx+1,subset,subsets,nums);

        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subSets;

        findAllSubsets(0,{},subSets,nums);

        return subSets;
    }
};
