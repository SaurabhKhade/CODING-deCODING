class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int cost = 0, i = 0;
        while(i<colors.size()-1) {
            if(colors[i] == colors[i+1]) {
                int max_c = neededTime[i], tot_c = neededTime[i];
                while(colors[i] == colors[i+1]) {
                    max_c = max(max_c, neededTime[i+1]);
                    tot_c += neededTime[i+1];
                    i++;
                }
                cost += tot_c - max_c;
            }
            i++;
        }
        return cost;
    }
};