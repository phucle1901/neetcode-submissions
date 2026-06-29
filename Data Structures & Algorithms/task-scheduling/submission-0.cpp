class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map <char,int> mp;
        for(char task:tasks){
            if(mp.find(task)!=mp.end()){
                mp[task]++;
            }
            else{
                mp[task]=1;
            }
        }
        int max_task=0;
        for (auto x:mp){
            max_task=max(max_task,x.second);
        }
        int dem=0;
        for(auto x:mp){
            if(x.second==max_task){
                dem++;
            }
        }
        int soluong=tasks.size();
        int result=max((max_task-1)*(n+1)+dem , soluong);
        return result;
    }
};
