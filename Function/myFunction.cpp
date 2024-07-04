#include "myFunction.h"
#include <vector>

using namespace std;

vector<int> addVec(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += 1;
    }
    return vec;
}