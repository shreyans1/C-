#include <iostream>

using namespace std;
void RemoveAndrotate(int arr[],int lastToDelete,int size);
int main(){
  int T;
  cin >>T;
  while(T--){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
      cin >> arr[i];
    }
    int res;
    RemoveAndrotate(arr,n-1,n);



  }
}

void RemoveAndrotate(int arr[],int lastToDelete,int size){
  int siz;
  siz = size;
  if(lastToDelete>siz-1){
    lastToDelete = siz-1;
  }
  if(siz == 1){
    cout << arr[0];
    return;
  }
  int temp=arr[siz-1];
  for(int i = siz-1;i>0;i--){

    arr[i]=arr[i-1];

  }
arr[0]=temp;
int arr2[siz-1];
for(int i = 0;i<lastToDelete;i++){
  arr2[i] = arr[i];
}
for(int i = lastToDelete;i<size-2;i++){
  arr2[i] = arr[i+1];
}
\
RemoveAndrotate(arr2,lastToDelete-1,siz-1);
}
