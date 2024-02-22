#include <stdio.h>

int main() {
    long int n, i,  c1 = 0, c2 = 0, s, k = 0, l;

    scanf("%ld", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
    }
    l = a[k];
    while (k < n ) {
        if (a[k] > l) {
            l = a[k];
            c1++;
        }
        k++;
    }

    k = 0;
    s = a[k];
    while (k < n ) { 
        if (a[k] < s) {
            s = a[k];
            c2++;
        }
        k++;
    }

    printf("%ld %ld", c1, c2);

    return 0;
}
