#include <stdio.h>
#define N 10000



int main(void) {
    int i, j, p, q, id[N];
    for (i = 0; i < N; i++) id[i] = i;
    while (scanf("%d %d", &p, &q) == 2) {
        int p_h = 0;
        int q_h = 0;
        for (i = p; i != id[i]; i = id[i]) p_h++;
        for (j = q; j != id[j]; j = id[j]) q_h++;
        if (i == j) continue;
        if (p_h >= q_h) {
            id[i] = j;
        } else {
            id[j] = i;
        }
        id[i] = j;
        printf("> %d %d\n", p, q);
    }
    return 0;
}