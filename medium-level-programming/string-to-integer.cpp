class Solution {
public:
    int myAtoi(string s) {
        bool tarun = true;
        long long n = s.size();
        long long neg = 1;
        long long ans = 0;

        for(int i =0 ;i<n;i++){
            if(s[i] == ' ' && tarun ){
                continue;
            }
            else if(s[i] == '-'&& tarun ){
                neg = -1;
                tarun = false;
            }
            else if(s[i] == '+' && tarun ){
                tarun = false;
                neg = 1;
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                ans = (ans * 10) + (s[i]- '0');
                tarun = false;
            }
          else {
                 break;
          }
            if((ans*neg) < INT_MIN ){
                return INT_MIN ;
            }
            else if((ans*neg) > INT_MAX ){
                return INT_MAX;
            }
        }

        ans = neg* ans;
        return ans;
    }
};
