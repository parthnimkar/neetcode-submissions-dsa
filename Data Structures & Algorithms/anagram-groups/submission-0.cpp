class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string str : strs){
            string s(26,'0');
            for(char ch : str){
                s[ch - 'a'] = (s[ch - 'a'] - '0') + 1 + '0';
            }
            mp[s].push_back(str);
        }

        vector<vector<string>> result;

        for(auto it : mp){
            result.push_back(it.second);
        }

        return result;
    }
};
