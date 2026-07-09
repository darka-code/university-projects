#include <stdio.h>

int main() {
    long long x1, y1, r1, x2, y2, r2;
    

    printf("Введіть координати центра та радіус першого кола (x1 y1 r1): ");
    if (scanf("%lld %lld %lld", &x1, &y1, &r1) != 3) {
        printf("Помилка введення даних.\n");
        return 1;
    }
    
    printf("Введіть координати центра та радіус другого кола (x2 y2 r2): ");
    if (scanf("%lld %lld %lld", &x2, &y2, &r2) != 3) {
        printf("Помилка введення даних.\n");
        return 1;
    }
 
    long long d_sq = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    
    long long r_sum_sq = (r1 + r2) * (r1 + r2);    
    long long r_diff_sq = (r1 - r2) * (r1 - r2);    
    
   
    if (d_sq == 0 && r1 == r2) {
        printf("Результат: -1 (кола збігаються, точок перетину безкінечно багато)\n");
    }
    else if (d_sq > r_sum_sq || d_sq < r_diff_sq) {
        printf("Результат: 0 точок перетину (кола не дотикаються)\n");
    }
    else if (d_sq == r_sum_sq || d_sq == r_diff_sq) {
        printf("Результат: 1 точка перетину (внутрішній або зовнішній дотик)\n");
    }
    else {
        printf("Результат: 2 точки перетину (кола перетинаються)\n");
    }
    
    return 0;
}
