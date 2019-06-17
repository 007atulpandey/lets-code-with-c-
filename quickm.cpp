#include<bits/stdc++.h>

using namespace std;
//function
void fastscan(int &x)
    {
        bool neg=false;
        register int c;//when we use some variable frequently then define it as register....
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }
    int main()
    {
    int a;
    fastscan(a);
    return 0;
    }
