int boxFilling(int n, int x, int y){
    
    int balls = n * x;

    int reqbox = 0;

    if(balls%y == 0) {
        reqbox = balls / y;
    } else {
        reqbox = (balls / y) + 1;
    }

    return reqbox;
}
