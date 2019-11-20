#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("input.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
    int flag = 1;
    while ((read = getline(&line, &len, fp)) != -1)
    {
        //printf("%s", line);
        if(strlen(line) > 4){
            for(int i=4 ; i<strlen(line) ; i+=3)
                if(isalpha(line[i])){
                    flag = 0;
                    break;
                }
        }
    }
    if(flag) printf("grammar is cnf\n");
    else printf("grammar is not cnf\n");
    fclose(fp);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
}