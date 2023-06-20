
best approach : 

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a = 0;
        int b =0 ;
        int n = nums.size();
         for(int i =0 ;i< n;i++){

             if(nums[i] == 1){
                 b++;
             }
             else{
                 b = 0;
             }

           a = max(a,b);
         }
         return a ;
    }
};
