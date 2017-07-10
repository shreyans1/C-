#include <iostream>


using namespace std;
int main(){
  int T,n,x;
  cin >>T;



  while(T--){
    int sum = 0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
      sum +=arr[i];
    }
    cin >>x;
    sort(arr,arr+n);
    if(sum<x){
      cout << "Empty\n";
      return 0;
    }
    int flag = 0;

      int first = 0;
      int last = n-1;

    while(first<last){
      if(arr[first]+arr[last]==x){
        flag = 1;
        std::cout << "("<<arr[first]<<" "<< arr[last]<<")" << '\n';
        break;
      }
      else if(arr[first]+arr[last]>x){
        last--;
      }
      else{
        first++;
      }

    }
          
    }

  }
