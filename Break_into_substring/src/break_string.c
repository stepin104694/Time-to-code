#include "break_string.h"

char* break_string(char sen[])
{
    int k=0;
    int word_count=0;
    char tempstr[25]={0};
    //char *arrstr = (char *)calloc(10 * 15 ,sizeof(char));
    for(int i=0;i<10;i++)
        for(int j=0;j<15;j++)
            arrstr[i][j] = '\0';
    for(int i=0;k<strlen(sen);i++)
    {
        for(int j=0;sen[k]!='\0';j++)
        {
            if(sen[k] == '_')
            {
                    tempstr[j] ='\0';
                k++;
                //printf("\n");
                break;
            }
            else
            {

              tempstr[j]=sen[k];//printf("%c",str[i]);
              k++;
            }
        }
        strcpy(arrstr[i],tempstr);
        strcpy(tempstr,"\0");
        word_count++;
    }
    for(int i=0;i<word_count;i++)
      printf("%s\n",arrstr[i]);
    return arrstr;
/*
    int init_size = strlen(sen);
    char delim[] = " ";
    char arrstr[10][15];
    char *ptr = strtok(sen, delim);
    int i=0;
    while(ptr != NULL)
    {
        strcpy(arrstr[i],ptr);i++;
        ptr = strtok(NULL, delim);
    }
    return arrstr;*/
}
