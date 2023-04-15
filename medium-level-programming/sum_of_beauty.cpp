class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int minima = INT_MAX;
        int maxima = INT_MIN;
        int answer = 0;
        for(int i = 0; i < n; i++){
            map<char, int> m;
            for(int j = i; j < n; j++){
                m[s[j]]++;
                for(auto k : m){
                    minima = min(minima, k.second);
                    maxima = max(maxima, k.second);

                }
                 answer = answer + (maxima - minima);
                minima = INT_MAX;
                maxima = INT_MIN;
            }
            m.clear();
        }
        return answer;
    }
};
