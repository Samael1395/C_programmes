#include <stdio.h>
// same int is absent
int main()
{
    int j=10, k=12;
    if (k>=j)
    {
        {
            k=j;
            j=k;
        }
    }
}