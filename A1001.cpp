#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int a, b, c, remainder, count = 0;
    int ans[10];
    scanf("%d%d", &a, &b);
    c = a + b;
    if(c == 0){
        printf("0\n");
        return 0;
    }
    if(c < 0){
        printf("-");
        c = -c;
    }
    while(c != 0){
        ans[count++] = c % 10;
        c /= 10;
    }
    remainder = count % 3;
    reverse(ans, ans + count);
    for(int i = 0; i < count; i++){
        if((i - remainder == 0 || ((i - remainder) % 3 == 0)) && i != 0){
            printf(",");
        }
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}
