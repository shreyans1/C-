#include <iostream>
#include <algorithm>

using namespace std;
int main(){
  int T,n;
  cin >> T;
  while(T--){
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }
    sort(arr,arr+n);
    int count = 0;
    int final_count = -1;
    int index = -1;

    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
          count++;

        }
        else{
          if(final_count<=count){
            final_count = count;
            count = 0;
            index = i;
          }
          else{
            count = 0;
          }

        }
        if (i+1==n-1){
          if(final_count<=count){
            final_count = count;
            count = 0;
            index = i;
          }
          else{
            count = 0;
          }

        }


    }


    if(final_count>n/2-1){
      cout << arr[index]; << endl;
    }
    else{
      cout << "NO Majority Element\n";
    }
  }
  return 0;
}
