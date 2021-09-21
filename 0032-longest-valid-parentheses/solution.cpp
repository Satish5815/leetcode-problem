class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int> stk;
        stk.push(-1);
        int result=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                stk.push(i);
            else{
                if(!stk.empty())
                    stk.pop();
                if(!stk.empty())
                    result=max(result,i-stk.top());
                else
                    stk.push(i);
            }
        }
        return result;
    }
};
