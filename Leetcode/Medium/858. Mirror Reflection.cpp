class Solution {
public:
    int mirrorReflection(int p, int q) {
        bool reverse = false, left = true;
        if(q==0) return 0;
        int curr = 0;
        
        while(true) {
            left = !left;
            if((curr+q)%p == 0){
                if(left) return 2;
                else if(reverse) return 0;
                else return 1;
            } else {
                curr += q;
                if(curr>p) {
                    reverse = !reverse;
                    curr -= p;
                }
            }
        }
    }
};