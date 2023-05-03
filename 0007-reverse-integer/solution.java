class Solution {
    public int reverse(int x) {
       int sum=0;
       int carry=10;
       while(x!=0){
           if(sum>Integer.MAX_VALUE/10) return 0;
           if(sum<Integer.MIN_VALUE/10) return 0;
           sum=sum*carry+x%10;
           x=x/10;
       } 
       return sum;
    }
}
