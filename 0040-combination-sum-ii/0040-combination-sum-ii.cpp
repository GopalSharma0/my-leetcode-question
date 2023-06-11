class Solution {
public:

void help(int i,vector<int>arr,int target,int sum,vector<int>&subset,vector<vector<int>>&ans){

if(sum==target){
    ans.push_back(subset);
    return ;
}
if(sum>target) return;
if(i==arr.size()) return ;


subset.push_back(arr[i]);

sum+=arr[i];
help(i+1,arr,target,sum,subset,ans);

subset.pop_back();
sum-=arr[i];

while(i+1<arr.size() and arr[i]==arr[i+1]) i++;
help(i+1,arr,target,sum,subset,ans);




}


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>subset;
        vector<vector<int>>ans;
        int sum=0;
        help(0,candidates,target,sum,subset,ans);
       return ans;
    }
};