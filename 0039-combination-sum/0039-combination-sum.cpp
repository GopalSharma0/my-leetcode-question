class Solution {
public:
vector<vector<int>>ans;
void help(int i,vector<int>arr,int target,int sum,vector<int>&subset){

if(sum==target){
    ans.push_back(subset);
    return ;
}
if(sum>target) return;
if(i>=arr.size()) return ;
help(i+1,arr,target,sum,subset);

sum+=arr[i];
subset.push_back(arr[i]);
help(i,arr,target,sum,subset);
sum-=arr[i];
subset.pop_back();


}


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>subset;
        
        int sum=0;
        help(0,candidates,target,sum,subset);
       return ans;
    }
};