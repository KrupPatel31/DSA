// Given an unsorted array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

// Note: Consider the array as circular.

void rotateArr(vector<int>& arr, int d) {
        // code here
        int l = arr.size();
        d = d%l;
        
        stack<int> s;
        
        for(int i = d-1;i>=0;i--){
            s.push(arr[i]);
        }
        
        int i = 0;
        
        for(i = 0;i<l-d;i++){
            arr[i] = arr[i+d];
        }
        
        while(!s.empty()){
            arr[i] = s.top();
            s.pop();
            i++;
        }
    }
