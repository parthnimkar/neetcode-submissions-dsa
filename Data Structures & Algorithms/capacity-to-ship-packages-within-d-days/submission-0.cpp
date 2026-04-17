class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        int maximum = 0;

        for(int weight : weights){
            sum += weight;
            maximum = max(maximum,weight);
        }

        int left = maximum;
        int right = sum;

        int minCapacity = sum;

        while(left <= right){
            int mid = left + (right - left)/2;
            int requiredDays = 1;
            int currLoad = 0;

            for(int weight : weights){
                if(currLoad + weight <= mid){
                    currLoad += weight;
                }
                else{
                    currLoad = weight;
                    requiredDays++;
                }
            }

            if(requiredDays <= days){
                minCapacity = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        return minCapacity;
        
    }

};