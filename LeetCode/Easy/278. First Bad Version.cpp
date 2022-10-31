// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#define ULI unsigned long int

class Solution {
public:
    int firstBadVersion(int n) {
        int first = n;
        ULI i=1, j=n,m;
        while(i<=j) {
            m = (i+j)/2;
            if(isBadVersion(m)) {
                first = m;
                j = m-1;
            } else {
                i = m+1;
            }
        }
        return first;
    }
};