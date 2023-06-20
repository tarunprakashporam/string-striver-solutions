brute force :

take temp array and take all non zero elements in it and then after take the number of elements of its orginal size of array

optimal approach :

1)Start traversing from the first occurrence index of Zero
2) Tak 2 variables (i,j), i will be at the first occurrence of zero and j is at i+1
3) If element at j index is not zero then swap elements at i,j and increment i,j
4) If the element at j index is zero then only increment j.



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int n = nums.size();

        while (j < n) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};
