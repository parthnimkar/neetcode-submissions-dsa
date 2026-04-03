class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int maxLength = 0;

        for(int i : nums){
            if(!s.count(i-1)){
                int count = 1;
                while(s.count(i+1)){
                    count++;
                    i++;
                } 
                maxLength = max(maxLength,count);
            }
        }

        return maxLength;
    }
};
