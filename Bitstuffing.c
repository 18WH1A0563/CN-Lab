#include<stdio.h>
#include<string.h>

int main(){
        char s[20];
        scanf("%s", s);
        int l = strlen(s), c = 0, i = 0, j ;
        char res[100];
        strcat(res, "01111110");
        j = strlen(res);
        for(i = 0;i < l;i++){
                if(s[i] == '1'){
                        c++;
                        res[j++] = '1';
                        if(c == 5){
                                res[j++] = '0';
                        }
                }
                else{
                        c = 0;
                        res[j++] = '0';
                }
        }
        strcat(res, "01111110");
        
              
        printf("%s\n", res);
        return 0;
}
