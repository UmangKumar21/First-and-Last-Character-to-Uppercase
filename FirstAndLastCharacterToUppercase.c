#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char s[1001];
    scanf("%[^\n]",&s);
    int l=strlen(s);
    for(int i=0;i<l;i++){
        if(i==0 || s[i-1]==' '){
            s[i]=toupper(s[i]);
        }
        else if(s[i+1]==' ' || s[i+1]=='\0'){
            s[i]=toupper(s[i]);
        }
    }
    printf("%s",s);
    return 0;
}
