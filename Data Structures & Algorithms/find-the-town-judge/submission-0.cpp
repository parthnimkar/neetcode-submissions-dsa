class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() < n-1) return -1;

        // unordered_map<int,int> indegree;
        // unordered_map<int,int> outdegree;

        // for(auto &pair : trust){
        //     outdegree[pair[0]]++;
        //     indegree[pair[1]]++;
        // }

        // for(int i = 1;i<=n;i++){
        //     if(indegree[i] == n-1 && outdegree[i] == 0){
        //         return i;
        //     }
        // }

        // return -1;

        unordered_map<int,int> degreeDiff;

        for(auto & pair : trust){
            degreeDiff[pair[0]] --;
            degreeDiff[pair[1]] ++;
        }

        for(int i = 1;i<=n;i++){
            if(degreeDiff[i] == n-1) return i;
        }

        return -1;
    }
};