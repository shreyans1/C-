#include <iostream>

using namespace std;
void RemoveAndrotate(int arr[],int lastToDelete,int size);
int main(){
  int T;
  cin >>T;
  while(T--){
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
      cin >> arr[i];



    }

int Lo,mid,H;
Lo = 0;
mid = 0;
H = n-1;
int temp;
while(mid<=H)
{
  switch(arr[mid]){
    case 0:
      swap(arr[Lo++],arr[mid++]);
      break;
    case 1:
      mid++;
      break;
    case 2:
      swap(arr[mid],arr[H--]);
      break;

  }

}
for(int i = 0;i<n;i++)
{
  cout << arr[i] << " ";

}
std::cout  << '\n';
}
}
