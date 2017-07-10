#include <iostream>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while(T--)
  {
    int n,x;
    cin >>n;
    cin >> x;
    if(n%2==0){
      int mul = n/2;
      cout << mul*x << endl;
    }
    else{
      int mul = n/2 +1;
      cout << mul*x << endl;

    }
  }
}
