class Solution {
    int m,n;
    vector<char> choices= {'A', 'C', 'G', 'T'};
    unordered_map<string,vector<string>> links;
    unordered_map<string,bool> unvisited;
    
    void makeLinks(string &str) {
        string tmp;
        for(int i=0; i<n; i++) {
            tmp = str;
            for(int j=0; j<4; j++) {
                tmp[i] = choices[j];
                if(tmp != str && unvisited[tmp]) {
                    links[str].push_back(tmp);
                }
            }
        }
    }
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unvisited[start] = true;
        for(auto &str:bank) {
            unvisited[str] = true;
        }
        
        if(!unvisited[end]) return -1;
        
        m = bank.size(), n = start.size();
        
        makeLinks(start);
        for(auto &str:bank) {
            makeLinks(str);
        }
        
        queue<pair<string,int>> bfs;
        bfs.push({start,0});
        string str;
        int level;
        unvisited[start] = false;
        
        while(!bfs.empty()) {
            str = bfs.front().first;
            level = bfs.front().second;
            bfs.pop();
            
            for(auto &s:links[str]) {
                if(s == end) return level+1;
                if(unvisited[s]) {
                    unvisited[s] = false;
                    bfs.push({s,level+1});
                }
            }
        }
        
        return -1;
    }
};