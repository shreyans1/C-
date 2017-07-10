#include <iostream>

using namespace std;

int main()
{
  int T,n;
  cin >> T;
  while(T--)
  {
  cin >> n;
  int arr[n-1];
  int sum = 0;
  for(int i = 0;i<n-1;i++){
    cin >> arr[i];
    sum += arr[i];
  }

  int missing,sum_all;
  sum_all = (n*(n+1))/2;
  missing = sum_all - sum;
  std::cout << missing << '\n';

  }
  return 0;
}
