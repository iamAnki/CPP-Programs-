//This is the code for the Interviewbit problem Word Ladder II

vector<vector<string> > Solution::findLadders(string start, string end, vector<string> &dic){
   int n = dic.size();
   if(start == end) return {{start}};
   vector<vector<string>> ans;
   queue<vector<string>> q;
   unordered_set<string> dict;
   for(int i = 0; i <  n; i++){
       dict.insert(dic[i]);
   }
   int level = 1, minlevel = INT_MAX;
   unordered_set<string> visited;
   q.push({start});
   while(!q.empty()){
       vector<string> path = q.front();
       q.pop();
       if(path.size() > level){
           for (string w : visited) dict.erase(w);
           visited.clear();
           if(path.size() > minlevel){
               break;
           }
           level = path.size();
       }
       string last  = path.back();
       for(int i = 0; i  < last.length(); i++){
           string temp = last;
           for(int j = 0; j < 26; j++){
               temp[i] = 'a'+ j;
               if(dict.find(temp) != dict.end()){
                   visited.insert(temp);
                   vector<string> np = path;
                   np.push_back(temp);
                   if(temp == end){
                       minlevel = level;
                       ans.push_back(np);
                   }
                   else{
                       q.push(np);
                   }
               }
           }
       }
   }
   return ans;
}
