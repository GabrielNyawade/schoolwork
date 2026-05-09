#include "myInclude.h"
bool odd(int x)
{
    bool res;
    if (x == 0) res = false;
    else even(x-1);
    return res;
}