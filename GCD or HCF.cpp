int calcGCD(int n, int m){
    // Write your code here.
    if(n>m){
        while(m != 0){
            int x = m;
            m = n%m;
            n = x;
        }
        return n;
    }else{
        while(n != 0){
            int x = n;
            n = m%n;
            m = x;
        }
        return m;
    }
}
