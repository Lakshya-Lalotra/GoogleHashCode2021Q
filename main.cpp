#include <iostream>
#include <algorithm>
#include <memory>
#include <string>
#include <vector>

#define endl "\n"

using namespace std;

  int main()
{
    vector<Edge> edges =
            {
                    // `(x, y, w)` —> edge from `x` to `y` having weight `w`
                    { 0, 1, 6 }, { 1, 2, 7 }, { 2, 0, 5 }, { 2, 1, 4 },
                    { 3, 2, 10 }, { 5, 4, 1 }, { 4, 5, 3 }
            };

    return 0;
}
