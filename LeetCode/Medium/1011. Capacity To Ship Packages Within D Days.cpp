class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0, maxx = 0;
        for(auto &i:weights) {
            sum += i;
            maxx = max(maxx,i);
        }
        int n = sum/days>maxx?sum/days:maxx;
        while(true) {
            int load = 0, day = 0;
            for(auto &w:weights) {
                load += w;
                if(load > n) {
                    day++;
                    load = w;
                } else if(load == n) {
                    day++;
                    load = 0;
                }
            }
            if(load != 0) day++;
            if(day<=days) {
                return n;
            }
            n++;
        }
    }
};