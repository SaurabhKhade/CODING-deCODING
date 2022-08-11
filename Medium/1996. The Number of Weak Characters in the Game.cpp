class Solution {
    static int compare(vector<int> &a, vector<int> &b) {
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),compare);
        
        int cnt = 0;
        int max_defence = 0;
        
        for(int i=properties.size()-1; i>=0; i--) {
            if(properties[i][1]<max_defence) cnt++;
            max_defence = max(max_defence, properties[i][1]);
        }
        
        return cnt;
    }
};