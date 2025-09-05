#include <stdio.h>
#include <string.h>
int main() {
    char kt1[98767];
	char kt2[98767];
    printf("Chuoi ki tu 1: ");
    gets(kt1);
    printf("Chuoi ki tu 2: ");
     gets(kt2);
    char *a;
	char *b;
    if (strlen(kt1) <= strlen(kt2)) {
        a = kt1;
        b = kt2;
    } else {
      	a = kt2;
        b = kt1;
    }
    if (strstr(b, a) != NULL) {
        printf("2 ki tu co chu trung nhau \n");
    } else {
        printf("2 ki tu khong co nhu cung nhau \n");
    }

}