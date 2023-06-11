class Solution {
public:

void help(int i,vector<int>arr,int target,int sum,vector<int>&subset,vector<vector<int>>&ans){

if(sum==target){
    ans.push_back(subset);
    return ;
}
if(sum>target) return;
if(i>=arr.size()) return ;
help(i+1,arr,target,sum,subset,ans);

sum+=arr[i];
subset.push_back(arr[i]);
help(i,arr,target,sum,subset,ans);
sum-=arr[i];
subset.pop_back();


}


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>subset;
        vector<vector<int>>ans;
        int sum=0;
        help(0,candidates,target,sum,subset,ans);
       return ans;
    }
};