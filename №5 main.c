#include <stdio.h>

int main() {
    int n;
    
    printf("Введіть довжину послідовності n: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    

    int result = 0;
    int MOD = 12345;
    
    if (n == 1) result = 2;
    else if (n == 2) result = 4;
    else if (n == 3) result = 7;
    else {

        int f1 = 2;
        int f2 = 4;
        int f3 = 7;
        
        
        for (int i = 4; i <= n; i++) {
            result = (f1 + f2 + f3) % MOD;
            f1 = f2;
            f2 = f3;
            f3 = result;
        }
    }

    printf("Кількість шуканих послідовностей: %d\n", result);
    
    return 0;
}
