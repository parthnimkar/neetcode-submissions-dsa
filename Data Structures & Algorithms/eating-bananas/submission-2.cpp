class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maximum = INT_MIN;
        for(int pile : piles){
            maximum = max(maximum,pile);
        }

        int minSpeed = 0;

        int left = 1;
        int right = maximum;

        while(left <= right){
            int mid = left + (right - left) / 2;
            int totalHours = 0;
            for(int pile : piles){
                int hours = 1 + (pile - 1) / mid;
                totalHours += hours;    
            }

            if(totalHours <= h) {
                minSpeed = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        return minSpeed;
    }
};
