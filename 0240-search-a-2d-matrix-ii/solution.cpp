class Solution {
public:
    bool isSearch(vector<int> v,int target){
        long long int low=0,heigh=v.size()-1;
        while(low<=heigh){
            long long int mid=(low+heigh)/2;
            if(v[mid]==target) return true;
            else if(v[mid]>target) heigh=mid-1;
            else low=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m=a.size();
        int n=a[0].size();
        int i=0,j=n-1;
        while(i<m && j>=0)
        {
            if(a[i][j]==target)
                return 1;
            if(a[i][j]>target)
                j--;
            else if(a[i][j]<target)
                i++;
                   
        }
        return 0;
    }
};
