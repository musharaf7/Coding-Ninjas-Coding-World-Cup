long long rejection(int n, vector<int> &a, vector<int> &b) {

    long maxSum=0, sum = 0;

    int i=0;
    while(i!=n) {
        sum = b[i];
        for(int j=0; j<n; j++) {
            
            if(i != j) {
                sum += a[j];
                
            } else {
                continue;
            }
        }
        maxSum = max(sum, maxSum);
        i++;
    }

    return maxSum;
    
}
