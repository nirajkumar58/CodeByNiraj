class Solution {
private:
    vector<int> generaterow(int n){
        vector<int> row;
        long long element = 1;

        row.push_back(1);

        for(int j = 1; j < n; j++){
            element = element * (n - j) / j;
            row.push_back(element);
        }

        return row;
    }

public:
    vector<int> getRow(int rowIndex) {
        return generaterow(rowIndex + 1);
    }
};