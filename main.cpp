#include <iostream>
#include <vector>

#include "myFunction.h"

using namespace std;

int main()
{
    vector<int> events = {1, 2, 3, 4, 5};
    vector<int> res = addVec(events);

    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << ' ';
    }
    cout << endl;
    return 0;
}