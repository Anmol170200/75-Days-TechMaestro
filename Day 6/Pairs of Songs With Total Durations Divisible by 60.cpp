#include <unordered_map>
class Solution {
public:
 int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map < int, int > umap;
      int ans = 0, val;
      for (int t: time) {
        val = t % 60 != 0 ? 60 - t % 60 : 0;
        ans += umap[val], umap[t % 60]++;
      }
      return ans;
    }
};