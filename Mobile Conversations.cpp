#include <iostream>

using namespace std;

int main()
{
  int n,t,x;
  cin >>n;
  int amount_spend = 0;
  int amount_recharged = 0;
  while(n--){
    cin >> t;
    amount_spend+=t;
    cin >> x;
    amount_recharged +=x;
  }
  int amount_ini;
  amount_ini = amount_spend-amount_recharged;
   std::cout << amount_ini << '\n';
}
