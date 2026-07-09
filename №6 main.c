#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    

    printf("Введіть координати x1, y1, x2, y2 через пробіл: ");
    if (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != 4) {
        printf("Помилка введення даних.\n");
        return 1;
    }
    
    double dx = x2 - x1;
    double dy = y2 - y1;
    double length = sqrt(dx * dx + dy * dy);
    

    printf("Довжина вектора: %.6f\n", length);
    
    return 0;
}
