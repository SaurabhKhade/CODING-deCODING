class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        // total buckets can be tested by one pig in allocated time are
        int T = minutesToTest/minutesToDie;
        // if pig still alive, poison is in next bucket, so actually one more bucket tested by pig. so total T+1 buckets checked.
        T++;
        return ceil(log(buckets)/log(T));
    }
};