//brute force solution is sorting
public:
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	   int largest = INT_MIN ;
	    int second_largest = INT_MIN ;

	for(int i = 0 ;i< n;i++){
	    if( arr[i] > largest ){
	           second_largest = largest ;
	            largest = arr[i];

	         }
	   else if ( arr[i] < largest and arr[i] > second_largest){
	            second_largest = arr[i];
	          }
	          else if(second_largest == INT_MIN and i == n-1){
	              return -1;
	          }
	         }
	    return second_largest;
	}
