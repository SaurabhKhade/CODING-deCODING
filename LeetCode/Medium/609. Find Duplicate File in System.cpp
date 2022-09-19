class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>> map;
        
        for(auto &path: paths) {
            stringstream ss(path);
            string directory, file;
            
            ss >> directory;
            
            while(ss >> file) {
                string filename, content;
                int i = 0;
                while(file[i] != '(') filename += file[i++];
                i++;
                while(file[i] != ')') content += file[i++];
                
                map[content].push_back(directory+'/'+filename);
            }
        }
        vector<vector<string>> ans;
        
        for(auto &pair:map) {
            if(pair.second.size()>1) ans.push_back(pair.second);
        }
        return ans;
    }
};