class Solution {
public:
    bool isValidPair(char open,char close){
        return (open == '(' && close == ')') || 
            (open == '[' && close == ']') || 
            (open == '{' && close == '}');
    }

    bool isValid(string s){
        if(s.empty()) return true;
        stack<char> st;

        for(char ch : s){
            if((ch == '[') || (ch == '(') || (ch == '{')){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;
                if(!isValidPair(st.top(),ch)) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
