#include <stdlib.h>
#include <stdio.h>

int main(){
    char *str = malloc(sizeof(char) * 256);

    printf("Enter the string:\n");
    fgets(str,256,stdin);

    int cnt = 0;
    char *cur = str;

    while(*cur!='\0'){
        cnt++;
        cur++;
    }
    cnt--;
    cur-=2;

    char temp;
    for(int i=0;i<cnt/2;i++){
        temp = str[i];
        str[i] = cur[0];
        str[cnt-1-i] = temp;
        cur--;
    }

    printf("Reverse:\n%s\n", str);


}