#include <cstdio>

int main(){
    int c;
    int count = 0;
    bool flag = false;
    while((c = getchar()) != EOF){
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            flag = true;
            continue;
        }else{
            if(flag){
                ++count;
                flag = false;
            }
        }
        if(c == '\n'){
            printf("%d\n", count);
            count = 0;
        }
    }
    return 0;
}
