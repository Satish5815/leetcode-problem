class Solution {
    public int maxSubArray(int[] nums) {
      int max=Integer.MIN_VALUE,max1=0;
      for(int i=0;i<nums.length;i++){
          max1+=nums[i];
          if(max<max1){
              max=max1;
          }
          if(max1<0){
              max1=0;
          }
      }  
      return max;     
    }
}
