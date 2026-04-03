class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int i = 0;
        while(i<n){
            if(i>0 && nums[i] == nums[i-1]){
                i++;
                continue;
            }

            int target = -nums[i];
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[j] + nums[k];
                if(sum < target){
                    j++;
                }
                else if(sum > target){
                    k--;
                }
                else{
                    result.push_back({nums[i],nums[j],nums[k]});
                    while(nums[j] == nums[j+1]){
                        j++;
                    }
                    j++;
                }
            }
            i++;
        }
        return result;
    }
};
