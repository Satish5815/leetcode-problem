class Solution {
public:
    void resultPar(int open,int close,string current,vector<string>& result){
        if(open==0 && close==0){
            result.push_back(current);
        }
        if(open>0){
            resultPar(open-1,close,current+'(',result);
        }
        if(close>open){
            resultPar(open,close-1,current+')',result);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        resultPar(n,n,"",result);
        return result;
    }
};
