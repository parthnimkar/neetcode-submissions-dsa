class KthLargest {
public:
    int k;
    priority_queue<int,vector<int>,greater<int>> pq;

    KthLargest(int k, vector<int>& nums) {
        pq = priority_queue<int,vector<int>,greater<int>> (nums.begin(),nums.end());
        while(pq.size() > k) pq.pop();
        this->k = k;
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size() > k) pq.pop();
        return pq.top();
    }
};
