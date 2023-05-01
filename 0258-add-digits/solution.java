class Solution {
    int sumDigit(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    public int addDigits(int num) {
        Solution s=new Solution();
        int sum=s.sumDigit(num);
        while(sum>=10){
            sum=s.sumDigit(sum); 
        }
        return sum;
    }
}
