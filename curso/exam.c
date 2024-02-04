#include <stdio.h>
#include<unistd.h>
#include<sys/stat.h>

void printfileproperties(struct stat stats);
int main(){
    char path[100];
    struct stat stats;
    printf("enter file path");
    scanf("%s", path);
    if(stat(path, &stats)==0)
        printfileproperties(stats);
    else
        printf("unable to get file properties.\n");
    return 0;        
}

void printfileproperties(struct stat stats)
{
    printf("\n-------------\n");
    if(stats.st_mode & R_OK) printf("1");else printf("-");
    if(stats.st_mode &W_OK) printf("1"); else printf("-");
    if(stats.st_mode & X_OK)printf("1"); else printf("-");
    printf("%ld",stats.st_size);
}