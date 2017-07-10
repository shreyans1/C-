#include <iostream>

using namespace std;

int main(){
  int T;
  cin >>T;
  while(T--){
    int n,x;
    cin >>n;
    cin >> x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin >> arr[i];
    }
    int i=0;
    int j=0;
    int sum=arr[0];
    int flag = 0;
    while(i<n){
      if(sum<x){
        j++;
        sum +=arr[j];
      }
      else if(sum>x){
        sum = sum-arr[i];
        i++;
      }
      else{
        flag = 1;
        break;
      }
    }
    if(flag==1)
            cout<<i+1<<" "<<j+1<<"\n";
        else cout<<"-1\n";
  }
}
