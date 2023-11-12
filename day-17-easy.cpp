int gearSelection(int n) {
    int count=0;

    if(n==2) {
        return 2;
    } else {
        count = (n-1)*n;
    }

    return count;
}
