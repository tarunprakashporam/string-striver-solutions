vector<int> findUnion(int arr1[], int arr2[], int n, int m)
   {
      map<int ,int>freq;
      vector<int > ans;
      for(int i =0 ;i<n;i++){
          freq[arr1[i]]++;

      }
      for(int i =0 ;i < m ;i++){
          freq[arr2[i]]++;
      }
      for(auto num : freq){
           ans.push_back(num.first);
      }
      return ans;
    }


time complexity
for hashing :

ime Compleixty : O( (m+n)log(m+n) ) . Inserting a key in map takes logN times, where N is no of elements in map. At max map can store m+n elements
{when there are no common elements and elements in arr,arr2 are distntict}.
 So Inserting m+n th element takes log(m+n) time. Upon approximation across insertion of all elements in worst it would take O((m+n)log(m+n) time.

time complexity : O((m+n)log(m+n))
