#include <iostream>

//Kadane's Algo
using namespace std;

int main()
{
  int T,n;
  cin >> T;
  while(T--){
    int max_so_far = 0;
    int max_ending_here = 0;
    int index = 0;
    int start_index = 0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }

    for(int j = 0;j<n;j++){
      max_ending_here += arr[j];
      if(max_ending_here<0){
        max_ending_here = 0;
        start_index = j+1;
      }
      if(max_so_far<max_ending_here){
        max_so_far = max_ending_here;
        index = j;
      }
    }
    for(int k = start_index;k<=index;k++){
      cout << arr[k] << " ";
    }
    std::cout << '\n';
  }
  return 0;
}
