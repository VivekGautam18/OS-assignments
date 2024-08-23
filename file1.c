#include <stdio.h>

int main(){
    FILE *fp;
    char ch;

    char filename[100];
    printf("enter the file name : ");
    scanf("%s" , filename);

    fp = fopen(filename , "r");
    if(fp==NULL){
        printf("error in opening file.\n");
        return 1;
    }
    while((ch = fgetc(fp)) != EOF){
        printf("%c" , ch);
    }
    fclose(fp);
    return 0;
}