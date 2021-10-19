#include <cinttypes>
#include <cmath>
#include <algorithm>

uint64_t descendingOrder(uint64_t a) {
// Takes any non-negative integer as an argument 
// and returns it with its digits in descending order.  
  
  int ptr, len; ptr = len = a > 0 ? std::log10(a)+1 : 0; // get length
  
  int * nums = new (std::nothrow) int[len]; // array for numbers
  if (nums == nullptr) return 0; // failed allocating memory
  
  while (ptr-->0) { // get the numbers
    nums[ptr] = a % 10;
    a /= 10;
  }
   
  std::sort(nums, nums + len); // sort
  
  uint64_t ret = 0; // form an int value to return
  for (ptr = len - 1; ptr >= 0; ptr--) {
      uint64_t power = std::pow(10, ptr);
      ret = ret + nums[ptr] * power;
  }
  delete[] nums;
  return ret;
}
