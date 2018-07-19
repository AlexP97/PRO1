#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
  int x = 0;
  int y = 0;
  int count = 0;
  while (x < X.size() and y < Y.size()) {
    if (X[x] == Y[y]) {
      count = count + 1;
      x++;
      y++;
    }
    else if (X[x] > Y[y]) y = y + 1;
    else x = x + 1;
  }
  return count;

}

