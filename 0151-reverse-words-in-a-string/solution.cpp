class Solution {
public:
    string reverseWords(string s) {
    stack<string> ans;
    string s1 = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') { // Use '==' for comparison
            if (!s1.empty()) {
                ans.push(s1);
            }
            s1 = "";
        } else {
            s1 += s[i];
        }
    }
    if (!s1.empty()) {
        ans.push(s1);
    }
    
    string s2 = "";
    while (!ans.empty()) {
        s2 += ans.top();
        ans.pop();
        if (!ans.empty()) {
            s2 += ' '; // Add space between words
        }
    }
    return s2;
    }
};
