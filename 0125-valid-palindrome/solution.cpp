class Solution {
public:
    bool isPel(string s){
      string p=s;
        reverse(p.begin(),p.end());
        return s==p;
    }
    bool isPalindrome(string s) {
        string p="";
      
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90)
                p+=s[i];
            else if(s[i]>=97 && s[i]<=122){
                p+=s[i]-32;
                }
             else if(s[i]>=48 && s[i]<=57)
            p+=s[i];
        }
       
        return isPel(p);
    }
};
