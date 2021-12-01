//Value of integer equal to index(1-based indexing)
	
vector<int> valueEqualToIndex(int arr[], int n) {
// code here
vector<int> fixed_point;
for(int i=0;i<n;++i)
   {
       if(arr[i]==i+1)
	  fixed_point.push_back(arr[i]);
   }
   return fixed_point;
}