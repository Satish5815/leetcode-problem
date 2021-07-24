#include<stack>
class Solution {
public:
    int lengthOfLongestSubstring(string A) {
     vector<int> v(255,-1);
        int start=-1,maxlen=0;
        for(int i=0;i<A.size();i++){
            if(v[A[i]]>start)
                start=v[A[i]];
            v[A[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
    }
};
