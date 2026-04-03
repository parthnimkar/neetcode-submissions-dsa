class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i] ++;
        }

        vector<vector<int>> bucket(n+1);

        for(auto it : mp){
            bucket[it.second].push_back(it.first);
        }
        
        vector<int> result;
        for(int i = n;i>=0;i--){
            for(int i : bucket[i]){
                result.push_back(i);
                if(result.size() == k) return result;
            }
        }

        return result;
    }
};
