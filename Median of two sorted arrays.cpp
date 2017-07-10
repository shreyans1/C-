#include <iostream>

using namespace std;

int main()
{
int T,n;
cin >>T;
while(T--){
std::cin >> n;
int arr1[n];
int arr2[n];
for(int i=0;i<n;i++){
  cin >> arr1[n];
}
for(int i=0;i<n;i++){
  std::cin >> arr2[n];
}
int arr3[n];

int u=0,v=0;
while(u+v<n-1){
  if(arr1[n-1]<arr2[0]){
    std::cout << (arr1[n-1]+arr1[n-2])/2 << '\n';
    return 0;
  }
  else if(arr2[n-1]<arr1[0]){
    std::cout << (arr2[n-1]+arr2[n-2])/2 << '\n';
    return 0;

  }
  if(arr1[u]<=arr2[v]){
    arr3[u+v]=arr1[u];
    u++;
  }
  else{
    arr3[u+v]=arr2[v];
    v++;
  }

}
cout << (arr3[n-2]+arr3[n-1])/2 << endl;
}
  }
