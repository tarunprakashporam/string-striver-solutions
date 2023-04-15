class Solution {
public:
    int maxDepth(string s) {
        int o = 0;
        int n = s.size();
        int answer = 0;
        for(int i =0 ;i<n;i++) {
            if(s[i] == '('){
                o++;
                answer = max(answer,o);
            }
            else if(s[i] == ')'){
                  o--;
            }
        }
        return answer;
    }
};
