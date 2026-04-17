class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target) return true;

            if(nums[left] == nums[mid]){
                left++;
                continue;
            }

            if(nums[mid] == nums[right]){
                right--;
                continue;
            }

            if(nums[left] < nums[mid]){
                //left sorted
                if(nums[left] <= target && target < nums[mid]){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
            else{
                //right sorted
                if(nums[mid] < target && target <= nums[right]){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
        }

        return false;
    } 
};