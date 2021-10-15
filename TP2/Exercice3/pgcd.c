int pgcd(int a, int b) {
    int r = 1;
    if(b == 0) {
        return(0);
    }
    else {
        while(r != 0){
            r = a % b;
            if( r != 0) {
                a = b;
                b = r;
            }
        }
        return(b);
    }
}
