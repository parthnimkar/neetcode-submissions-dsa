class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;

        for(int num : nums){
            map[num] ++;

            if(map[num] > n / 2) return num;
        }

        return -1;

        // int count = 0, res = 0;

        // for(int num : nums){
        //     if(count == 0) res = num;

        //     if(num == res) count ++;
        //     else count --;
        // }
        
        // return res;
    }
};