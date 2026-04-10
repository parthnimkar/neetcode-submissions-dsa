class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int minimum = INT_MAX;

        int start = 0;
        int end = n - 1;

        while(start <= end){
            int mid = start + (end - start) / 2;
            minimum = min(minimum,nums[mid]);

            if(nums[start] <= nums[mid]){
                //left half is sorted
                if(nums[end] <= nums[mid]){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
            else{
                //right half is sorted
                if(nums[start] >= nums[mid]){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
        }

        return minimum;
    }
};
