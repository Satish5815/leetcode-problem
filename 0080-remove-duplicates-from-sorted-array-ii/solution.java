class Solution {
    public int removeDuplicates(int[] nums) {
       int n=nums.length;
       int i=1,j=1,count=1;
       while(i<n){
           if(nums[i]==nums[i-1]){
                if(count<2){
                    count++;
                    nums[j++]=nums[i];
                }
           }else{
               count=1;
               nums[j++]=nums[i];
           }
           i++;
       }
       return j;
    }
}
