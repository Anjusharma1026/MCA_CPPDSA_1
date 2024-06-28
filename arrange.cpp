#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int w1, w2;
        scanf("%d %d", &w1, &w2);

        // Use the min and max functions to determine the order
        int lighter = (w1 < w2) ? w1 : w2;
        int heavier = (w1 > w2) ? w1 : w2;

        printf("%d %d\n", lighter, heavier);
    }

    return 0;
}


   
