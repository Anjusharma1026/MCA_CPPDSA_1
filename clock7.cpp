#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#include <stdbool.h>


bool doIntersect(int a, int b, int c, int d) {

    if (a > b) { int temp = a; a = b; b = temp; }
    if (c > d) { int temp = c; c = d; d = temp; }
    
    
    bool intersects = (a < c && c < b && b < d) || (c < a && a < d && d < b);
    return intersects;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (doIntersect(a, b, c, d)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}