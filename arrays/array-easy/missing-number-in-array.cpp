class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = n-1 ;i>= 0;i--){
            if ( nums[i] != i+1){
                     return i+1;
            }
        }
        return 0;
  }
};


more optimal approach :


int missingNumber(vector<int>& nums) {
  int sumofn-numbers = (n* (n+1))/2;
  int s2 = 0 ;
  for(int i =0 ;i<n;i++){
    s2 += nums[i];
  }
  return sumofn-numbers - s2;
};
