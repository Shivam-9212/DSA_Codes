    int MissingNumber(vector<int>& array, int n) {
        sort(array.begin(), array.end());
        for (int i = 0; i < n; i++)
        {
            if((array.at(i+1)) != (array.at(i) + 1)){
                return(array.at(i) + 1);
            }
        }