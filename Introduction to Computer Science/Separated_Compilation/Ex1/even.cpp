#include "myInclude.h"
bool even(int x)
{
    bool res;
    if (x == 0) res = true;
    else odd(x-1);
    return res;
}