class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ops(boxes.size());
        
        for(int i=0; i<boxes.size(); i++) {
            if(boxes[i]=='0') continue;
            for(int j=0; j<boxes.size(); j++) {
                ops[j] += abs(i-j);
            }
        }
        
        return ops;
    }
};