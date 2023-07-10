#include <iostream>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int count = 0;
  int ak = 0;

  while (true)
  {
    ak = (n / k) * k;
    count += (n - ak);
    n = ak;
    if (n < k)
      break;

    n = (n / k);
    count += 1;
    if (n==1)
      break;
  }

  cout << "count: " << count << endl;

  return 0;
}