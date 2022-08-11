class Solution {
public:
    vector<int> getRow(int rowindex) {
     vector<int> res;
        int i=rowindex;
        long val=1;
        for(int j=0;j<=i;j++){
            res.push_back(val);
        val=val*(i-j)/(j+1); 
        }
        for(auto i:res) {
            cout<<i<<" ";
        }
        return res;
    }
};