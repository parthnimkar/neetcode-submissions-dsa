class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(string operation : operations){
            if(operation == "C"){
                s.pop();
            }
            else if(operation == "D"){
                s.push(2 * s.top());
            }
            else if(operation == "+"){
                int topNum = s.top();
                s.pop();
                int sum = topNum + s.top();
                s.push(topNum);
                s.push(sum);
            }
            else{
                int num = 0;
                int i = 0;
                int sign = 1;
                if(operation[0] == '-'){
                    i++;
                    sign = -1;
                }
                while(i<operation.size()){
                    num = num*10 + (operation[i] - '0');
                    i++;
                }
                num *= sign;
                s.push(num);
            }
        }
        int sum = 0;
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }

        return sum;
    }
};