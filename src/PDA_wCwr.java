import java.util.*;
import java.io.*;
import java.lang.*;
public class PDA_wCwr {
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String input=s.next();
        Stack<Character> stack=new Stack<>();
        stack.push('z');
        int state=0;
        for(int i=0;i<input.length();i++)
        {
            char inp=input.charAt(i);
            if(inp=='a' && stack.peek()=='z' && state==0)
            {
                stack.push(inp);
            }
            else if(inp=='b' && stack.peek()=='z' && state==0)
            {
                stack.push(inp);
            }
            else if(inp=='b' && stack.peek()=='b' && state==0)
            {
                stack.push(inp);
            }
            else if(inp=='a' && stack.peek()=='a' && state==0)
            {
                stack.push(inp);
            }
            else if(inp=='b' && stack.peek()=='a' && state==0)
            {
                stack.push(inp);
            }
            else if(inp=='a' && stack.peek()=='b' && state==0)
            {
                stack.push(inp);
            }
            else if(inp=='c' && state==0)
            {
                state=1;
            }
            else if(inp=='a' && stack.peek()=='a' && state==1)
            {
                stack.pop();
            }
            else if(inp=='b' && stack.peek()=='b' && state==1)
            {
                stack.pop();
            }

        }
        if(stack.peek()=='z')
        {
            System.out.println("ACCEPTED");
        }
        else
        {
            System.out.println("NOT ACCEPTED");
        }
    }
}
