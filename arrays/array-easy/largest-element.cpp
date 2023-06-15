
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    { int a = INT_MIN;
        for(int i = 0 ;i<n;i++){
        a =  max(a,arr[i]);
        }
         return a ;

    }
};
