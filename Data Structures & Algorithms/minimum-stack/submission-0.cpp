class MinStack {
public:
    stack<pair<int,int>> s;

    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }
        else{
            if(s.top().second < val){
                s.push({val,s.top().second});
            }
            else{
                s.push({val,val});
            }
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
