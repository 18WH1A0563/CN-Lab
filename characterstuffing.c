#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool compare(char*s, char*t, int l){
        for(int i = 0;i < l; i++){
                if(s[i] != t[i]){
                        return false;
                }
        }
        return true;
}

int main(){
        char s[50], stx[20], etx[20], res[40];
        printf("Enter the text: ");
        scanf("%s", s);
        printf("Enter starting delimiter: ");
        scanf("%s", stx);
        printf("Enter ending delimiter: ");
        scanf("%s", etx);
        int l = strlen(s);
        int l_stx = strlen(stx);
        int l_etx = strlen(etx);

        printf("Output : ");
        strcpy(res, stx);

        for(int i = 0;i < l; i++){
                if(s[i] == stx[0]){
                        if(compare(s+i, stx, l_stx)){
                                strcat(res, "esc");
                        }
                }
                else if(s[i] == etx[0]){
                        if(compare(s+i, etx, l_etx)){
                                strcat(res, "esc");
                        }
                }
                if(s[i] == 'e'){
                        if(compare(s+i, "esc", 3)){
                                strcat(res, "esc");
                        }
                }                   

                char temp[2];
                temp[0] = s[i];
                temp[1] = '\0';
                strcat(res, temp);
        }

        strcat(res, etx);
        printf("%s\n", res);
        return 0;
}
