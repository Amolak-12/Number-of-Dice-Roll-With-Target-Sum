#include <iostream>
using namespace std;

int FindTotalWays(int n , int k , int target )
{
  //Base Case
  if(target < 0)
    return 0;
  if(n == 0 && target == 0)
    return 1;
  if(n == 0 && target!=0)
    return 0;
  if(n != 0 && target == 0)
    return 0;
  //1 Case
  int ans = 0;
  for(int i=1;i<=k;i++)
    {
      ans = ans + FindTotalWays(n-1,k,target-i);
    }
  return ans;
}

int main() {

  int n = 2;
  int k = 6;
  int target = 7;

  int totalWays = FindTotalWays(n, k, target);
  cout <<totalWays;
}