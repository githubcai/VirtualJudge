#include <cstdio>
#include <cstring>

const int MAXN = 102;
char s[MAXN][MAXN];

int main(){
    int row, max = -1;
    memset(s, 0, sizeof(s));
    for(row = 0; fgets(s[row], sizeof(s[row]), stdin); ++row){
        int temp = strlen(s[row]) - 1;
        if(max < temp) max = temp;
    }
    for(int i = 0; i < max; ++i){
        for(int j = row - 1; j >= 0; --j){
            if(s[j][i] == '\n' || s[j][i] == '\0'){
                printf(" ");
            }else{
                printf("%c", s[j][i]);
            }
        }
        printf("\n");
    }
    return 0;
}
