class Solution {
    vector<int> status = vector<int>(10,1);
    
    char smallest() {
        for(int i=1; i<10; i++) {
            if(status[i]==1){
                status[i] = 0;
                return i+'0';
            }
        }
        return 0;
    }
    string smallest(int d) {
        vector<int> ss;
        for(int i=1; i<10; i++) {
            if(status[i]==1){
                status[i] = 0;
                ss.push_back(i);
            }
            if(ss.size()==d) break;
        }
        string pat = "";
        for(auto i=0; i<d; i++){
            pat = (char)('0'+ss[i])+pat;
        }   
        return pat;
    }
public:
    string smallestNumber(string pt) {
        vector<int> occ;
        int curr = 0;
        for(auto &i:pt) {
            if(i=='I') {
                if(curr<0) {
                    occ.push_back(curr);
                    curr = 0;
                }
                curr++;
            } else {
                if(curr>0){
                    occ.push_back(curr);
                    curr = 0;
                }
                curr--; 
            }
        }
        occ.push_back(curr);
        string pat = "";
        if(pt[0]=='I') pat += smallest();
        
        for(int i=0; i<occ.size(); i++) {
            if(occ[i]>0) {
                if(i<occ.size()-1) occ[i]--;
                while(occ[i]--) pat+=smallest();
            } else {
                pat += smallest(abs(occ[i])+1);
            }
        }
        return pat;
    }
};