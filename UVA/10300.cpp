#include <cstdio>

int main(){
    int n, f, a, b, c;
    scanf("%d", &n);
    while(n-- > 0){
        scanf("%d", &f);
        int sum = 0;
        for(int i = 0; i < f; ++i){
            scanf("%d%d%d", &a, &b, &c);
            sum += a * c;
        }
        printf("%d\n", sum);
    }
    return 0;
}
