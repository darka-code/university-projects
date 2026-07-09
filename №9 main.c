#include <stdio.h>
#include <math.h>


long long min_steps(long long x, long long y) {
    long long diff = y - x;
    if (diff <= 0) return 0;
  
    long long k = (long long)sqrt(diff);
    
    if (k * k == diff) {
        return 2 * k - 1;
    }
    else if (diff - k * k <= k) {
        return 2 * k;
    }

    else {
        return 2 * k + 1;
    }
}

int main() {
    long long x, y;
    
    printf("Введіть цілі числа x та y через пробіл: ");
    if (scanf("%lld %lld", &x, &y) != 2) {
        return 1;
    }
    
    if (x > y) {
        printf("Помилка: за умовою має бути x <= y\n");
        return 1;
    }
    
    long long steps = min_steps(x, y);
    printf("Мінімальна кількість кроків: %lld\n", steps);
    
    return 0;
}
