int minHours(vector<int> a) {

    int n = a.size();
    int strdiff = 0;
    int revdiff = abs(a[0] - a[n-1]);
    
    for(int i=0; i<n-1; i++) {
        int diff1 = abs(a[i] - a[i+1]);
        int newdiff = abs(diff1);
        strdiff += newdiff;
    }

    for(int j=n-1; j>1; j--) {
        int diff = a[j] - a[j-1];
        int newdiff = abs(diff);
        revdiff += newdiff;
    }

    int mindiff = min(strdiff, revdiff);

    return mindiff;
}
