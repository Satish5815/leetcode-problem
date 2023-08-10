class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return (s==t);
        if(s.size()!=t.size()) return false;
        int a[256]={0};
    for(int i=0;i<s.size();i++){
        a[s[i]]++;
        a[t[i]]--;
    }
    for(int i=0;i<256;i++){
        if(a[i]!=0) return false;
    }
    return true;
    }
};
