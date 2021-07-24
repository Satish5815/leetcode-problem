class Solution {
public:
    string longestPalindrome(string s) {
        string result="";
        int n=s.size();
        int max=0,start=0;
        for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            //odd string
            while(l>=0 && r<n && s[l]==s[r]){
               int cl=r-l+1;
                if(cl>max){
                    max=cl;
                    start=l;
                  }
                l--;
                r++;
            }
            l=i;
            r=i+1;
              while(l>=0 && r<n && s[l]==s[r]){
               int cl=r-l+1;
                if(cl>max){
                    max=cl;
                    start=l;
                  }
                l--;
                r++;
              }     
        }
        for(int i=start;i<=start+max-1;i++){
            result.push_back(s[i]);
        }
          return result;
    }
  
};
