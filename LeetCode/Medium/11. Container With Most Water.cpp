class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int i=0, j = height.size()-1;
        while(i<j) {
            int water = min(height[i],height[j])*(j-i);
            max_water = max(water,max_water);
            if(height[i]>height[j]) j--;
            else i++;
        }
        return max_water;
    }
};