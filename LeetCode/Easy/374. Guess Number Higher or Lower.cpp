class Solution {
public:
    int guessNumber(int n) {
        unsigned long int low = 1, high  = n;
        while(low <= high) {
            unsigned long int mid = (low+high)/2;
            if(guess(mid)==0) return mid;
            else if(guess(mid)==-1) high = mid-1;
            else low = mid+1;
        }
        return -1;
    }
};