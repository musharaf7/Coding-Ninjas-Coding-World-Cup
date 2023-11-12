long long baitAndSwitch(int n, vector<int> &a, int k, int m) {
    
    vector<int> diff(n); // Differences array
    long long sum = 0;

    // Calculate differences
    for(int i = 0; i < n; ++i) {
        diff[i] = abs(a[i] - m);
    }

    // Partially sort to get the top k differences
    partial_sort(diff.begin(), diff.begin() + k, diff.end(), greater<int>());

    // Sum the top k differences
    for(int i = 0; i < k && i < diff.size(); ++i) {
        sum += diff[i];
    }

    return sum;
}
