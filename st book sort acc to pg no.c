#include<stdio.h>

enum {length= 50};

void main() {
    int n, i, j;
    scanf("%d", &n);

    typedef struct {
        char title[length];
        int pg;
    } book;

    book t, b[n];

    for (i = 0; i < n; i++) {
        getchar();
        gets(b[i].title);
        scanf("%d", &b[i].pg);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (b[i].pg > b[j].pg) {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }

    for (i = 0; i < n; i++) {
        puts(b[i].title);
    }
}
