#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    scanf("%s",&str);
    int i,j;
    char t;
    int l = strlen(str);
    for(i=0; i<l; i++){
        for(j=0; j<l-1; j++){
            if(str[j+1]<str[j]){
                t        =  str[j];
                str[j]   =  str[j+1];
                str[j+1] =  t;
            }
        }
    }
    for(i=0; i<l; i++){
        printf("%c",str[i]);
    }
}
