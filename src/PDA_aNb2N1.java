import java.util.*;
import java.io.*;
import java.lang.*;

public class PDA_aNb2N1 {
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String input=s.next();
        Stack<Character> stack=new Stack<>();
        stack.push('z');
        int flag=0;
        int state=0;
        for(int i=0;i<input.length();i++)
        {
            char inp=input.charAt(i);
            if(inp=='a' && stack.peek()=='z' && state==0)
            {
                stack.push(inp);
                stack.push(inp);
            }
            else if(inp=='b' && stack.peek()=='z' && state==0)
            {
                state=1;
            }
            else if(inp=='b' && stack.peek()=='a' && state==0)
            {
                state=1;
            }
            else if(inp=='a' && stack.peek()=='a' && state==0)
            {
                stack.push(inp);
                stack.push(inp);
            }
            else if(inp=='b' && stack.peek()=='a' && state==1)
            {
                stack.pop();
            }
            else if(inp=='b' && stack.peek()=='z' && state==1)
            {
                flag=1;
            }
        }
        if(stack.peek()=='z' && flag!=1)
        {
            System.out.println("ACCEPTED");
        }
        else
        {
            System.out.println("NOT ACCEPTED");
        }
    }
}
