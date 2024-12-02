vector<int> search(string& pat, string& txt) {
        // code here
        int n = txt.size();
        int m = pat.size();
        
        vector<int> ans;
        
        for(int i = 0;i<n;i++){
            if(pat[0] == txt[i]){
                string x = txt.substr(i,m);
                
                if(x == pat){
                    ans.push_back(i);
                }
            }
        }
        
        return ans;
    }
