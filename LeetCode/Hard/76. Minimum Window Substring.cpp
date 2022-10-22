class Solution {
    bool isEqual(unordered_map<char,int> &map1, unordered_map<char,int> &map2) {
        for(auto &p:map1)
            if(p.second > map2[p.first])
                return false;
        
        return true;
    }
public:
    string minWindow(string s, string t) {
        int m = s.size(), n = t.size(), min_size=INT_MAX;
        string min_str = "";
        unordered_map<char,int> map1, map2;
        for(auto &i:t) {
            map1[i]++;
        }
        int i=0, j=-1;
        while(j<m-1) {
            while(!isEqual(map1,map2)) {
                if(j==m) break;
                map2[s[++j]]++;
            }
            while(i<=j && isEqual(map1,map2)) {
                if(min_size > j-i+1) {
                    min_size = j-i+1;
                    min_str = s.substr(i,min_size);
                }
                map2[s[i++]]--;
            }
        }
        
        return min_str;
    }
};