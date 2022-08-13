class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;
        for(auto &circle:queries) {
            int count = 0;
            for(auto &point:points) {
                if(sqrt(pow(point[0]-circle[0],2)+pow(point[1]-circle[1],2)) <= circle[2]) count++;
            }
            result.push_back(count);
        }
        return result;
    }
};