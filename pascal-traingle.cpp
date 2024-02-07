class Solution {
 public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> an;

    for (int i = 0; i < numRows; ++i)
      an.push_back(vector<int>(i + 1, 1));

    for (int i = 2; i < numRows; ++i)
      for (int j = 1; j < an[i].size() - 1; ++j)
        an[i][j] = an[i - 1][j - 1] + an[i - 1][j];

    return an;
  }
};
