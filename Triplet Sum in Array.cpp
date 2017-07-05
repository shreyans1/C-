#include <iostream>
#include <algorithm>

using namespace std;

int main(){
int T,n,x;
cin >> T;
while(T-->0){
  cin >>n;
  cin >>x;
  int arr[n];
  for(int j = 0;j<n;j++){
    cin >> arr[j];
  }
  int flag = 0;
  sort(arr,arr+n);
  for(int k = 0;k<n-2;k++){
    int l = k+1;
    int u = n-1;
    while(l<u){
    if(arr[k]+arr[l]+arr[u]==x){
      cout << 1 << endl;
      flag = 1;
      break;
    }
    else if (arr[k]+arr[l]+arr[u]<x){
      l++;
    }
    else{
      u--;
    }
  }
  if(flag==1){
    break;
  }
  }
if(flag==0){
  cout << 0 << endl;
}

}
return 0;
}
