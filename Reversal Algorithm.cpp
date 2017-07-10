#include <iostream>

using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--)
  {
    int n,d;
    cin >> n;
    int arr[n];

    for(int i = 0;i<n;i++){
      cin >> arr[i];
    }
    cin >>d;
    int arr2[d];
    for(int i = 0;i<d;i++){
      arr2[i]=arr[i];
    }
    for(int i = 0;i<n-d;i++){
      arr[i]=arr[i+d];
    }
    for(int i=0;i<d;i++){
      arr[i+n-d]=arr2[i];
    }
    for(int i = 0;i<n;i++){
      cout << arr[i]<< " ";
    }
    cout<<endl;
  }
}
