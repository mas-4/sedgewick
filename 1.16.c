#include <stdio.h>
#define N 10000

int main(void) {
    int i, j, p, q, id[N], sz[N];
    for (i = 0; i < N; i++) {
        id[i] = i;
        sz[i] = 1;
    }
    while (scanf("%d %d", &p, &q) == 2) {
        int po = p;
        int qo = p;
        for (i = p; i != id[i]; i = id[i]);
        for (j = q; j != id[j]; j = id[j]);
        if (i == j) continue;
        if (sz[i] < sz[j]) {
            id[i] = j; sz[j] += sz[i];
        } else {
            id[j] = i; sz[i] += sz[j];
        }
        for (i = po; i != id[i]; i = id[i])  id[i] = id[p];
        for (j = qo; j != id[j]; j = id[j])  id[j] = id[q];

        printf("> %d %d\n", p, q);
    }
    return 0;
}
