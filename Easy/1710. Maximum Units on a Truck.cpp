class Solution {
    static bool compare(vector<int> v1, vector<int> v2) {
        return (v1[1]>v2[1]);
    }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int units = 0, size = 0;
        for(auto box:boxTypes) {
            if(size+box[0] <= truckSize) {
                size+=box[0];
                units += box[0]*box[1];
            } else {
                units += (truckSize-size)*box[1];
                break;
            }
        }
        return units;
    }
};