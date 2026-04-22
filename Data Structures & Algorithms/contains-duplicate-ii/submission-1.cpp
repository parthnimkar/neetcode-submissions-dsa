class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l = 0;
        unordered_map<int,int> map;

        for(int r = 0;r < nums.size(); r++){
            map[nums[r]]++;

            if(map[nums[r]] == 2) return true;

                if(r - l >= k){
                map[nums[l]]--;
                l++;
            }
        }

        return false;
    }
};