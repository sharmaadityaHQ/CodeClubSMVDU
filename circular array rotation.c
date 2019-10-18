#include <math.h>
#include <stdio.h>


int main() {
    int n, k, q;
    scanf("%d", &n);
    scanf("%d", &k);
    scanf("%d", &q)
    int data[n];
    for(int i=0; i<n; i++) scanf("%d", &data[i]);
    k = k % n;
    while(q--) {
        int x;
        scanf("%d", &x);
        x = x - k;
        if(x < 0) x = x + n;
        printf("%d\n", data[x]);
    }
    return 0;
}
