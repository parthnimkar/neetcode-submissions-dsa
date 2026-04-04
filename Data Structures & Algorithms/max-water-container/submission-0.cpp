class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n -1;
        int maxAmount = 0;

        while(i<j){
            int currAmount = min(heights[i],heights[j]) * (j - i);
            maxAmount = max(maxAmount,currAmount);
            if(heights[i] < heights[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return maxAmount;
    }
};
