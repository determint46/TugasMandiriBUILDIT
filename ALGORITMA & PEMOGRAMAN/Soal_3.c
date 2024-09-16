#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool cek_prima(long long N) {
    
    if (N < 2) {
        return false;
    }

  
    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    long long N;
 
    scanf("%lld", &N);

    if (cek_prima(N)) {
        printf("PRIMA", N);
    } else {
        printf("BUKAN", N);
    }

    return 0;
}