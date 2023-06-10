class Solution {
public:
   void find(int ind,vector<int>power,vector<vector<int>>&ans,vector<int>arr,int n){
   if(ind==n){
       ans.push_back(power);
       return;
   }
   else{
       power.push_back(arr[ind]);
       find(ind+1,power,ans,arr,n);
       power.pop_back();
       while(ind+1<n and arr[ind]==arr[ind+1]) ind++;
       find(ind+1,power,ans,arr,n);
   }
   }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>power;
        find(0,power,ans,nums,nums.size());
        return ans;
    }
};