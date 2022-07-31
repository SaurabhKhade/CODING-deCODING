class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int low = 0, high = size-1;
        int i1 = 0, i2 = 0;
        
        
        while(low<high) {
            if(numbers[low]+numbers[high]==target) {
                i1 = low;
                i2 = high;
                break;
            } else if (numbers[low]+numbers[high]>target) {
                high--;
            } else {
                low++;
            }
        }
        
        vector<int> sol = {i1+1,i2+1};
        return sol;
    }
};