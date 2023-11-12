int gearSelection(int n) {
    // 2 2
    // 3 6
    // 4 12
    int count=0;

    if(n==2) {
        return 2;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i != j) {
                count++;
            } else {
                continue;
            }
        }
    }

    return count;
}
