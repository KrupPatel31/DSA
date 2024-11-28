int myAtoi(char *s) {
        // Your code here
        int n = strlen(s);
        
        long long ans = 0;
        
        bool sign = true;
        
        for(int i = 0;i<n;i++){
            if(isdigit(s[i])){
                ans = ans*10 + (s[i] - '0');
                if(ans > INT_MAX){
                    break;
                }
            }
            else if(s[i] == ' ' || s[i] == '+'){
                continue;
            }
            else if(s[i] == '-'){
                if(ans>0){
                    break;
                }
                sign = false;
            }else{
                break;
            }
        }
        
        if(sign == false){
            ans = ans * (-1);
        }
        
        if(ans<INT_MIN){
            return INT_MIN;
        }
        else if(ans>INT_MAX){
            return INT_MAX;
        }
        else{
            return ans;
        }
    }
