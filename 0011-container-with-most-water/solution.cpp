class Solution {
public:
    int maxArea(vector<int>& h) {
       int maxh=0;
        int i=0,j=h.size()-1;
        while(i<j){
        int curr=min(h[i],h[j]);
            maxh=max(maxh,curr*(j-i));
            if(h[i]<h[j])
                i++;
            else
                j--;
        }
        return maxh;
    }
};
