class Solution {
    unordered_map<int,pair<int,double>> map;
    void traverse(TreeNode* root, int level) {
        if(!root) return;
        map[level]={map[level].first+1,map[level].second+root->val};
        traverse(root->left, ++level);
        traverse(root->right, level);
    }
public:
    vector<double> averageOfLevels(TreeNode* root) {
        traverse(root, 0);
        vector<double> ans;
        pair<int,double> empty_pair;
        for(int i=0; i<1e5; i++) {
            if(map[i]==empty_pair) break;
            ans.push_back(map[i].second/map[i].first);
        }
        return ans;
    }
};