class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int rotate_num = 0;
        for(int i= 0 ;i<n-1;i++){
          if (nums[i] > nums[i +1]){
              rotate_num ++;
          }
        }
        if(nums[n-1] > nums[0]){
           rotate_num++;
        }

    return rotate_num <= 1;

 }
};
