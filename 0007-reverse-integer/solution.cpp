class Solution {
public:
    int reverse(int x) {
        long long int sum=0,carry=10;
        while(x!=0){
            if (sum > INT_MAX / 10 ) return 0;
        if (sum < INT_MIN / 10 ) return 0;
            sum=sum*carry+(x%10);
            x=x/10;
        }
        return sum;
    }
};
