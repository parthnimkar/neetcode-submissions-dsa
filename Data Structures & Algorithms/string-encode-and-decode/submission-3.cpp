class Solution {
public:
    vector<string> storage;

    string encode(vector<string>& strs) {
        string ans = "";
        // for(string s : strs){
        //     ans = ans + to_string(s.lenght()) + '#' + s ;
        // }

        for(string s : strs){
            storage.push_back(s);
        }
        return ans;
    }

    vector<string> decode(string s) {
        // string str = "";
        vector<string> result;

        // for(int i = 0;i<s.size();i++){
        //     if(s[i] != '#' || s[i+1] != '#'){
        //         str += s[i];
        //     }
        //     else{
        //         result.push_back(str);
        //         str = "";
        //         i++;
        //     }
        // }

        for(string str : storage){
            result.push_back(str);
        }

        return result;
    }
};
