import java.util.*;
import java.io.*;
import java.lang.*;

public class DFA_wmod2 {
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String input=s.next();
        int state=0;

        for(int i=0;i<input.length();i++)
        {
            char inp=input.charAt(i);
            if((inp=='a' || inp=='b') && state==0)
            {
                state=1;
                System.out.println("0-->1");
            }
            else if((inp=='a' || inp=='b') && state==1)
            {
                state=0;
                System.out.println("1-->0");
            }

        }
        if(state==0)
        {
            System.out.println("ACCEPTED");
        }
        else
        {
            System.out.println("NOT ACCEPTED");
        }
    }
}
