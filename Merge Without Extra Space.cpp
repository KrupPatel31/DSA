    int i = n-1;
    int j = 0;
    
    if(a[n-1] <= b[0]){
        return ;
    }
    
    while(a[i]>b[j] && (i>=0) && (j<m)){
        int x = a[i];
        a[i] = b[j];
        b[j] = x;
        i--;
        j++;
    }
