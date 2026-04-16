class Solution {
public:
    int mySqrt(int x) {
        int left = 1;
        int right = x;
        int squareRoot = x;

        while(left <= right){
            long long mid = left + (right - left) / 2;
            long long value = mid * mid;

            if(value > x){
                right = mid - 1;
            }
            else if(value < x){
                left = mid + 1;
                squareRoot = mid;
            }
            else{
                return mid;
            }
        }

        return squareRoot;
    }
};