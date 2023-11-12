int maxVariation(int n, vector<int> &a) {
	
	unordered_set<int> seen; 
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (seen.find(a[i]) == seen.end()) {

            seen.insert(a[i]);
            count++;
        } else {

            int negated = -a[i];
            if (seen.find(negated) == seen.end()) {
                seen.insert(negated);
                count++;
            }

        }
    }

    return count;
	
}
