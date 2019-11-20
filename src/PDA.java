import java.util.*;
import java.io.*;
import java.lang.*;

public class PDA {
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String input=s.next();
        Stack<Character> stack=new Stack<>();
        stack.push('z');
        for(int i=0;i<input.length()/2;i++)
        {
            char inp=input.charAt(i);
            if(inp=='a' && stack.peek()=='z')
            {
                stack.push(inp);
            }
            else if(inp=='b' && stack.peek()=='z')
            {
                stack.push(inp);
            }
            else if(inp=='b' && stack.peek()=='b')
            {
                stack.push(inp);
            }
            else if(inp=='a' && stack.peek()=='a')
            {
                stack.push(inp);
            }
            else if(inp=='b' && stack.peek()=='a')
            {
                stack.push(inp);
            }
            else if(inp=='a' && stack.peek()=='b')
            {
                stack.push(inp);
            }
        }
        for(int i=input.length()/2;i<input.length();i++)
        {
            char inp=input.charAt(i);
            if(inp=='a' && stack.peek()=='a')
            {
                stack.pop();
            }
            else if(inp=='b' && stack.peek()=='b')
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
