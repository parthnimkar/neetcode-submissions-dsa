class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int minimum = INT_MAX;

        int start = 0;
        int end = n - 1;

        while(start <= end){
            if(nums[start] <= nums[end]){
                minimum = min(minimum,nums[start]);
                break;
            }

            int mid = start + (end - start) / 2;
            minimum = min(minimum,nums[mid]);

            if(nums[start] <= nums[mid]){
                //left half is sorted
                start = mid + 1;
            }
            else{
                //right half is sorted
                end = mid -1;
            }
        }

        return minimum;
    }
};
