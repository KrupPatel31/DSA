vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int,int> map;

    vector<int> ans(2,0);

    for(int i = 0;i<v.size();i++){
        map[v[i]]++;
    }

    int high = INT_MIN;
    int low = INT_MAX;

    for(auto i : map){
        if(high < i.second){
            high = i.second;
            ans[0] = i.first;
        }

        if(low > i.second){
            low = i.second;
            ans[1] = i.first;
        }
    }

    return ans;
}
