class Solution {
public:
    string removeOuterParentheses(string s) {
        int i = 0 ;int n = s.size();
        int count =0;
       string tarun = "";
        for(int i = 0;i<n;i++){
if(s[i] == '(' && count == 0){
    count++;
}
else if(s[i]== '(' && count >= 1){
   tarun += s[i];
    count++;
}
else if(s[i] == ')' && count > 1){
   tarun += s[i];
   count--;

}
else if( s[i] == ')' && count == 1){
    count--;
}


        }
        return tarun;
    }
};
