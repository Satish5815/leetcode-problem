class Solution {
public:
    int strStr(string h, string n) {
       int l1=h.length();
        int l2=n.length();
        for(int i=0;i<=(l1-l2);i++){
            bool flag=true;
            for(int j=0;j<l2;j++){
                if(n[j]!=h[i+j]){
                    flag=false;
                }
            }
            if(flag==true){
                return i;
            }
        }
        return -1;  
    }
};
