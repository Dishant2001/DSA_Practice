//O(log(n)) time complexity
//Binary Search implemented in Rotated array
//First search point of rotation using Binary search
//Search target after point of rotation using Binary Search

int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,m;
        while(l<=h)
        {
            m=l+(h-l)/2;
            if(nums[m]==target)
                return m;
            if(nums[l]<=nums[m])   //check if first half is sorted
            {
                if(nums[l]<=target && nums[m]>=target) //check whether target might belong to first half
                    h=m-1;
                else   //target belongs to second half of array
                    l=m+1;
            }
            else   //first half not sorted
            {
                if(nums[m]<=target && nums[h]>=target)   //checking whether might target belong to second half
                    l=m+1;
                else   //searching for it in first half
                    h=m-1;
            }
        }
        return -1;
    }