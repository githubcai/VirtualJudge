#include <cstdio>
#include <cstring>

const int MAXN = 13;
const int INF = 10000000;

int count[MAXN];

int main(){
    int N, min;
    char s[27];
    while(scanf("%d", &N) == 1 && N != 0){
        min = INF;
        getchar();
        for(int i = 0; i < N; ++i){
            fgets(s, sizeof(s), stdin);
            int cnt = 0;
            for(int j = 0; j < 25; ++j){
                if(s[j] == ' ') ++cnt;
            }
            count[i] = cnt;
            if(min > cnt) min = cnt;
        }
        int sum = 0;
        for(int i = 0; i < N; ++i){
            sum += count[i] - min;
        }
        printf("%d\n", sum);
    }
    return 0;
}
