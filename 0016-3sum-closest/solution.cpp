class Solution {
public:
    int threeSumClosest(vector<int>& n, int target) {
        sort(n.begin(),n.end());
      int closestsum=100000000;  
       for(int i=0;i<n.size()-2;i++){
          int ptr1=i+1,ptr2=n.size()-1;
           while(ptr1<ptr2){
               int sum=n[i]+n[ptr1]+n[ptr2];
               if(abs(target-sum)<abs(target-closestsum)){
                   closestsum=sum;
               }
               if(sum>target){
                   ptr2--;
               }else{
                   ptr1++;
               }
           }
       } 
        return closestsum;
    }
};
