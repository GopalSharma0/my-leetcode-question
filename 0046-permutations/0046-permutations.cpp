class Solution {
public:
    void help(vector<int>nums,vector<vector<int>>&ans,int ind){
        if(ind>=nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            help(nums,ans,ind+1);
            swap(nums[ind],nums[i]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int ind = 0;
        help(nums,ans,ind);
        return ans;
        
    }
};