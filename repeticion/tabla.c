#include <stdio.h>

int main()
{
    int n;
    
    printf("Cual tabla quiere? (0-10): ");
    scanf("%d", &n);
    
    /*
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    */
    
    /*
    int i = 0;
    
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    */
    
    int i = 0;
    
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    
    return 0;
}
