class Solution {
public:
    bool isPalindrome(int i,int j,string s){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i<j){
            if(s[i] != s[j]){
                return (isPalindrome(i,j-1,s) || isPalindrome(i+1,j,s));
            }
            i++;
            j--;
        }

        return true;
    }
};