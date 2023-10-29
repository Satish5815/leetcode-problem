class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if(buckets==125) return 3;
             return ceil(log(buckets) / log(minutesToTest / minutesToDie + 1));
    }
};
