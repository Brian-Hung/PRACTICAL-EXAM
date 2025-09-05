#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong trong mang: ");
    scanf("%d", &n);

    int arr[n];
    int count = 0; 
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri thu %d: ", i );
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int a = arr[i];
        int dem_uoc = 0;

        if (a >= 2) {
            for (int j = 1; j <= a; j++) {
                if (a % j == 0) {
                	dem_uoc++;
				}
            }
        }

        if (dem_uoc == 2) { 
            printf("%d ", a);
            count++;
        }
    }

    if (count == 0) {
        printf("No prime number");
    }

}