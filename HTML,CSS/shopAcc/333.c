#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    string a[1000];
    printf("nhap du lieu: \n");
    for (int i = 0; i < n; i++) {
        scanf("%s", &a[i]);
    }
    printf("nhap du lieu can lay ra:", &k);
    printf("%s", a[k-1]);
    return 0;
}