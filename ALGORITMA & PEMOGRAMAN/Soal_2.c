#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void evaluasi_string(char A[], char B[]) {
    if (strcmp(A, B) == 0) {
        printf("IDENTIK\n");
    }
    else if (strlen(A) == strlen(B)) {
        printf("MIRIP\n");
    }
    else {
        printf("BERBEDA\n");
    }
}

int main() {
    char A[100], B[100];
    
    scanf("%s", A);
    scanf("%s", B);
    
   
    evaluasi_string(A, B);
    
    return 0;
}