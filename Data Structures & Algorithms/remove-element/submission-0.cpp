class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()) return 0;

        int l = 0;
        int r = nums.size()-1;

        while(l<=r){
            if(nums[l] == val){
                swap(nums[l],nums[r]);
                r--;
            }
            else{
                l++;
            }
        }

        return l;
    }
};