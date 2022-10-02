class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> map;
        for(auto &chr:jewels) map[chr]++;
        int cnt = 0;
        for(auto &chr:stones) if(map[chr]) cnt++;
        return cnt;
    }
};