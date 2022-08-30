class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int arr[n];
        int trust_count[n];
        memset(arr, 0, sizeof(arr));
        memset(trust_count, 0, sizeof(trust_count));
        for(auto &person:trust) {
            arr[person[0]-1] = 1;
            trust_count[person[1]-1]++;
        }
        for(int i=0; i<n; i++) if(arr[i]==0 && trust_count[i]==n-1) return i+1;
        return -1;
    }
};