class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        char type[3] = {'P','G','M'};
        int time = 0;
        travel.insert(travel.begin(),0);
        for(int i=0; i<3; i++) {
            char garb = type[i];
            int tr = 0;
            for(int j=0; j<garbage.size(); j++) {
                bool flag = false;
                for(auto &k:garbage[j]) {
                    if(k==garb) {
                        tr++;
                        flag = true;
                    }
                }
                tr += travel[j];
                if(flag) {
                    time += tr;
                    tr = 0;
                }
            }
        }        
        return time;
    }
};