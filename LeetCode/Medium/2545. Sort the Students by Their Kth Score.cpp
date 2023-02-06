class compare {
    int k;
    public:
    compare(int k) {
        this->k = k;
    }
    bool operator ()(vector<int> &a, vector<int> &b) {
        return a[k]>b[k];
    }
};

class Solution {
    public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(), score.end(), compare(k));
        return score;
    }
};