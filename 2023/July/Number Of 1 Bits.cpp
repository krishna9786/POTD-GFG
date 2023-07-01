// Number of 1 Bits
// TC: O(logn)
// SC: O(1)

//approach - we will iterate and do AND with N-1 and in each iteration we are clearing the last set bit

int setBits(int N) {
      int res = 0;
      while(N > 0) {
          N = N & (N-1);
          res++;
      }
      return res;
    }
