class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<j){
            int mid = (i+j)/2;
            if((mid%2==0 and nums[mid] == nums[mid+1]) || (mid%2==1 and nums[mid]==nums[mid-1]))
                 i=mid+1;
            else
                j=mid;

        }
        return nums[i];
         
        
    }
};