#include <stdio.h>
#define N 10000

int main(void) {
    int i, j, p, q, id[N], sz[N];
    for (i = 0; i < N; i++) {
        id[i] = i;
        sz[i] = 1;
    }
    while (scanf("%d %d", &p, &q) == 2) {
        for (i = p; i != id[i]; i = id[i]) {
            int t = i;
            i = id[id[t]];
            id[t] = i;
        }
        for (j = q; j != id[j]; j = id[j]) {
            int t = j;
            j = id[id[t]];
            id[t] = id[id[t]];
        }
        if (i == j) continue;
        if (sz[i] < sz[j]) {
            id[i] = j; sz[j] += sz[i];
        } else {
            id[j] = i; sz[i] += sz[j];
        }
        printf("> %d %d\n", p, q);
    }
    return 0;
}
