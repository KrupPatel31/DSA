bool areAnagrams(string& s1, string& s2) {
        // Your code here
        int n1 = s1.size();
        int n2 = s2.size();
        
        if(n1 != n2){
            return false;
        }else{
            unordered_map<char,int> map;
            
            for(int i = 0;i<n1;i++){
                map[s1[i]]++;
            }
            
            for(int i = 0;i<n2;i++){
                map[s2[i]]--;
            }
            
            bool ans = true;
            for(auto i : map){
                if(i.second != 0){
                    ans = false;
                    break;
                }
            }
            
            return ans;
        }
