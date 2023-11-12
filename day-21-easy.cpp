int subsquad(vector<int> &a) {
    unordered_set<int> uniqueSet;
    vector<int> result;

    for (int num : a) {
        if (uniqueSet.find(num) == uniqueSet.end()) {
            uniqueSet.insert(num);
            result.push_back(num);
        }
    }

    int resultlen = result.size();

    return resultlen;
}
