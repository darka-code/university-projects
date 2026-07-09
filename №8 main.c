#include <stdio.h>
#include <string.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    char word[50];
    int count[256] = {0};
    
    printf("Введіть слово: ");
    if (scanf("%49s", word) != 1) {
        return 1;
    }
    
    int len = strlen(word);
    
    for (int i = 0; i < len; i++) {
        count[(unsigned char)word[i]]++;
    }
    
    long long result = factorial(len);
    
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            result /= factorial(count[i]);
        }
    }
    
    printf("Кількість анаграм: %lld\n", result);
    
    return 0;
}
