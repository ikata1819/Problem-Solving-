#include <bits/stdc++.h>
using namespace std;



const int N = 100;
char name [N] [15 + 1];

int main()
{int n, y, m, d;
    while (~scanf("%d", &n))
    {
        int mn = 0, mx = 0, mnd = INT_MAX, mxd = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%s%d%d%d", name[i], &d, &m, &y);
            int date= 10000 *  y + 100* m + d;

            if (date < mnd) mnd = date, mn = i;
            if (date > mxd) mxd = date, mx = i;
        }
        printf("%s\n%s\n", name[mx], name[mn]);
    }
    return 0;
}
