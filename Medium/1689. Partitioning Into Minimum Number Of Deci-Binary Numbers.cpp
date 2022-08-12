class Solution {
public:
    int minPartitions(string n) {
        int max = 0;
        for(auto &i:n) {
            if(i-'0' > max) max = i-'0';
        }
        return max;
    }
};