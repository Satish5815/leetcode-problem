class Solution {
public:
    int sumDigit(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int addDigits(int num) {
        int sum=sumDigit(num);
        while(sum>=10){
            sum=sumDigit(sum);
        }
        return sum;
    }
};
