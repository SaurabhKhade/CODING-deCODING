class Solution {
    int max_len = 0;
    bool all_unique(string &str) {
        vector<bool> seen(26);
        for(auto &c:str) {
            if(seen[c-'a']) {
                return false;
            }
            seen[c-'a'] = true;
        }
        return true;
    }
    void filter(vector<string>& arr) {
        vector<string> arr2;
        for(auto &str:arr) {
            if(all_unique(str)) {
                arr2.push_back(str);
            }
        }
        arr = arr2;
    }
    void helper(vector<string>& arr, string word, int ind) {
        max_len = max(max_len, (int)word.size());
        
        for(int i=ind; i<arr.size(); i++) {
            string str = word+arr[i];
            if(str.size() <= 26 && all_unique(str)) {
                helper(arr, str, i+1);
            }
        }
    }
    public:
    int maxLength(vector<string>& arr) {
        vector<vector<bool>> counts;
        filter(arr);
        helper(arr, "", 0);
        return max_len;
    }
};