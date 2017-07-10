#include <iostream>
#include <string>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while(T--)
  {
  string s;
  cin >> s;
  string R_S[s.size()];
  for(int i = 0;i<s.size();i++)
  {
    std::cout << s[s.size()-i-1] ;
  }
  std::cout  << '\n';

}
return 0;
}
