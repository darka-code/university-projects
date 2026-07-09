#include <stdio.h>


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
 
    return (a / gcd(a, b)) * b;
}

int main() {
    int p;
    
    if (scanf("%d", &p) != 1) return 1;
    
    long long current_lcm;
    long long next_num;
    
    if (scanf("%lld", &current_lcm) != 1) return 1;
    

    for (int i = 1; i < p; i++) {
        if (scanf("%lld", &next_num) != 1) return 1;
        current_lcm = lcm(current_lcm, next_num);
    }
    
   
    printf("%lld\n", current_lcm);
    
    return 0;
}
