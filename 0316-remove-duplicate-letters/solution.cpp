class Solution {
public:
    string removeDuplicateLetters(string s) {
       int count[26]={0};
       stack<char> stk;
       unordered_set<char> visited;
       for(char c :s){
           count[c-'a']++;
       }
       for(char c: s){
           count[c-'a']--;

           if(visited.count(c)){
               continue;
           }
     while(!stk.empty() && c<stk.top() && count[stk.top()-'a']>0){
             visited.erase(stk.top());
             stk.pop();
           }
           stk.push(c);
           visited.insert(c);
       }
       string result;
       while(!stk.empty()){
        result = stk.top()+result ;
           stk.pop();
       }
       return result;
    }
};
