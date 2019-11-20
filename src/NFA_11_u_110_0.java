import java.util.*;
import java.io.*;
import java.lang.*;

public class NFA_11_u_110_0 {
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String input=s.next();
        int state=0;

        for(int i=0;i<input.length();i++)
        {
            char inp=input.charAt(i);
            if(inp=='1' && state==0)
            {
                state=1;
                System.out.println("0-->1");
            }
            else if(inp=='1' && state==1)
            {
                state=2;
                System.out.println("1-->2");
            }
            else if(inp=='1' && state==2)
            {
                state=1;
                System.out.println("2-->1");
            }
            else if(inp=='0' && state==2)
            {
                state=3;
                System.out.println("2-->3");
            }
            else if(inp=='0' && state==3)
            {
                state=4;
                System.out.println("3-->4");
            }
            else if(inp=='1' && state==3)
            {
                state=1;
                System.out.println("3-->1");
            }
            else if(inp=='1' && state==4)
            {
                state=5;
                System.out.println("4-->5");
            }
            else if(inp=='0' && state==4)
            {
                state=5;
                System.out.println("4-->5");
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
