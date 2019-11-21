#include<stdio.h>



    int  main()
    {
        printf("enter the size of string and then string respectively\n");
        int n;scanf("%d",&n);
        char s[n];
        printf("enter the string \n");
        scanf("%s",s);
        int state=0;

        for(int i=0;i<n;i++)
        {
            char inp=s[i];
            if(inp=='1' && state==0)
            {
                state=1;
                printf("0-->1\n");
            }
            else if(inp=='1' && state==1)
            {
                state=2;
                printf("1-->2\n");
            }
            else if(inp=='1' && state==2)
            {
                state=1;
                printf("2-->1\n");
            }
            else if(inp=='0' && state==2)
            {
                state=3;
                printf("2-->3\n");
            }
            else if(inp=='0' && state==3)
            {
                state=4;
                printf("3-->4\n");
            }
            else if(inp=='1' && state==3)
            {
                state=1;
                printf("3-->1\n");
            }
            else if(inp=='1' && state==4)
            {
                state=5;
                printf("4-->5\n");
            }
            else if(inp=='0' && state==4)
            {
                state=5;
                printf("4-->5\n");
            }
        }
        if(state==3 || state==4)
        {
            printf("ACCEPTED\n");
        }
        else
        {
            printf("NOT ACCEPTED\n");
        }
    }

