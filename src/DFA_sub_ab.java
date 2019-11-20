import java.util.*;
import java.io.*;
import java.lang.*;

public class DFA_sub_ab {
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
                state=3;
                System.out.println("0-->3");
            }
            else if(inp=='a' && state==1)
            {
                state=1;
                System.out.println("1-->1");
            }
            else if(inp=='b' && state==1)
            {
                state=2;
                System.out.println("1-->2");
            }
            else if(inp=='a' && state==2)
            {
                state=2;
                System.out.println("2-->2");
            }
            else if(inp=='b' && state==2)
            {
                state=2;
                System.out.println("2-->2");
            }
            else if(inp=='a' && state==3)
            {
                state=1;
                System.out.println("3-->1");
            }
            else if(inp=='b' && state==3)
            {
                state=3;
                System.out.println("3-->3");
            }
        }
        if(state==2)
        {
            System.out.println("ACCEPTED");
        }
        else
        {
            System.out.println("NOT ACCEPTED");
        }
    }
}
