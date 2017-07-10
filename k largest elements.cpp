#include <iostream>
#include <algorithm>
using namespace std;
void RemoveAndrotate(int arr[],int lastToDelete,int size);
int main(){
  int T;
  cin >>T;
  while(T--){
    int n,x;
    cin >> n;
    cin >> x;
    int arr[n];
    int arr_req[x];
    for(int i = 0;i<x;i++)
    {
      cin>>arr[i];
      arr_req[i] = arr[i];

    }
    sort(arr_req,arr_req+x);
    for(int i = x;i<n;i++){
      cin >> arr[i];
      if(arr[i]>arr_req[0]){
        arr_req[0]=arr[i];
        sort(arr_req,arr_req+x);
      }
    }
    for(int i = x-1;i>-1;i--){
      std::cout << arr_req[i] << " ";
    }
    std::cout  << '\n';
  }
}
