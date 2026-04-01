class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(string s : strs){
            ans = ans + to_string(s.length()) + '#' + s ;
        }
        cout<<ans<<endl;
        return ans;
    }

    vector<string> decode(string s) {
        string str = "";
        vector<string> result;

        int i = 0;

        while(i<s.length()){
            int num = 0;
            
            while(s[i]>='0' && s[i]<='9'){
                num = num * 10 + (s[i] - '0');
                i++;
                if(s[i] == '#'){
                    i++;
                    break;
                }
            }

            string str = "";

            while(num){
                str += s[i];
                i++;
                num--;
            }

            result.push_back(str);
        }

        return result;
    }
};
