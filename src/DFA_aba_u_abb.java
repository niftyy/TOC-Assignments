import java.util.*;
import java.io.*;
import java.lang.*;

public class DFA_aba_u_abb {
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String input=s.next();
        int state=0;

        for(int i=0;i<input.length();i++)
        {
            char inp=input.charAt(i);
            if(inp=='a' && state==0)
            {
                state=1;
                System.out.println("0-->1");
            }
            else if(inp=='b' && state==0)
            {
                state=5;
                System.out.println("0-->5");
            }
            else if(inp=='a' && state==1)
            {
                state=5;
                System.out.println("1-->5");
            }
            else if(inp=='b' && state==1)
            {
                state=2;
                System.out.println("1-->2");
            }
            else if(inp=='a' && state==2)
            {
                state=4;
                System.out.println("2-->4");
            }
            else if(inp=='b' && state==2)
            {
                state=3;
                System.out.println("2-->3");
            }
            else if(inp=='a' && state==3)
            {
                state=1;
                System.out.println("3-->1");
            }
            else if(inp=='b' && state==3)
            {
                state=5;
                System.out.println("3-->5");
            }
            else if(inp=='a' && state==4)
            {
                state=1;
                System.out.println("4-->1");
            }
            else if(inp=='b' && state==4)
            {
                state=5;
                System.out.println("4-->5");
            }
            else if(inp=='a' && state==5)
            {
                state=5;
                System.out.println("5-->5");
            }
            else if(inp=='b' && state==5)
            {
                state=5;
                System.out.println("5-->5");
            }
        }
        if(state==3 || state==4)
        {
            System.out.println("ACCEPTED");
        }
        else
        {
            System.out.println("NOT ACCEPTED");
        }
    }
}
