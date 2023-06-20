brute force : two for loops
better approach :
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        int n = nums.size();
        for(int i = 0 ;i<n;i++){
            m[nums[i]]++;
        }
        for(auto  num : m){
            if (num.second == 1){
                return num.first;
            }
        }
        return -1;
    }

optimal approach :

properties :

 a ^a = 0
  a^ 0 = a


int singleNumber(vector<int>&nums){
  int a = 0;
  for(int i =0 ;i<n;i++){
    a = a ^ nums[i];
  }
  return a;
}
