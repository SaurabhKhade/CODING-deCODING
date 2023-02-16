class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int beams = 0, lasers = 0,prev_lasers=0;
        for(auto &str:bank) {
            for(auto &chr:str) {
                if(chr=='1') lasers++;
            }
            if(lasers==0) continue;
            beams += lasers*prev_lasers;
            prev_lasers = lasers;
            lasers = 0;
        }
        return beams;
    }
};