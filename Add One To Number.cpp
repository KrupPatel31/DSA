vector<int> addOneToNumber(vector<int> arr)
{
    // Write your code here
    int n = arr.size();
    vector<int> ans;

    if(arr[n-1] < 9){
        arr[n-1] += 1;
        bool check = false;

        for(int i = 0;i<n;i++){
            if(arr[i] == 0 && check == 0){
                continue;
            }else{
                ans.push_back(arr[i]);
                check = 1;
            }
        }

        return ans;
    }
    else{
        int j = n-1;

        while(arr[j] == 9){
            arr[j] = 0;
            j--;
        }

        if(j>=0){
            arr[j] += 1;
            bool check = false;
            for(int i = 0;i<n;i++){
            if(arr[i] == 0 && check == 0){
                continue;
            }
            else{
                ans.push_back(arr[i]);
                check = 1;
            }
        }

        return ans;
        }else{
            ans.push_back(1);
            for(int i = 0;i<arr.size();i++){
                ans.push_back(0);
            }
            return ans;
        }
    }
}
