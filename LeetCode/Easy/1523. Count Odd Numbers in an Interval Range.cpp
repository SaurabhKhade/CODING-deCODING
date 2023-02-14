class Solution {
public:
    int countOdds(int low, int high) {
        low = low%2==1?low:low+1;
        high = high%2==1?high:high-1;
        return ((high)-(low))/2+1;
    }
};