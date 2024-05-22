#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int)); 

    if (ptr == NULL) {
        printf("Cap phat bo nho that bai.\n");
        exit(0);
    } else {
        printf("Nhap cac phan tu cua mang:\n");
        for (i = 0; i < n; ++i) {
            scanf("%d", ptr + i);
        }

        printf("Mang vua nhap la: ");
        for (i = 0; i < n; ++i) {
            printf("%d ", *(ptr + i));
        }
    }
    
    free(ptr); // Giải phóng bộ nhớ
    return 0;
}
