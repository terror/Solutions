class Solution:
  def solve(self, n):
    ans = 0
    while n:
      ans += n & 1
      n >>= 1
    return ans
