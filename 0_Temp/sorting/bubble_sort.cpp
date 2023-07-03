#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
  int arrays[] = {1, 3, 8, 2, 9, 2, 5, 6};
  int n = sizeof(arrays) / sizeof(arrays[0]);
  cout << "n: " << n << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (arrays[j] > arrays[j + 1])
      {
        swap(arrays[j], arrays[j + 1]);
      }
    }
  }
  // cout << arrays << endl;
  copy (arrays, arrays + n, ostream_iterator<int>(cout, ", "));
  cout << endl;
}

//Time complexity : O(n^2)

