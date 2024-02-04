
#include <assert.h>
#include <stdio.h>

int compute(const char *lhs, const char *rhs){
    int len1 = strlen(lhs);
    int len2 = strlen(rhs);
    
    if(len1 != len2){
        printf("As strings tem comprimento diferente");
        return -1;
    }
    int count = 0;
    for(int i = 0; i < len1;i++){
        if(lhs[i]!=rhs[i]){
            count+=1;
        }
    }
    return count;    
}

int main(){

    printf("%d",compute("AATG", "AAA"));
    printf("%d",compute("", "G"));
    
    return 0;
}

