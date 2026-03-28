import java.util.Stack;

class BalancedParentheses
{
    public boolean isBalanced(String expr)
    {
        Stack<Character> stack = new Stack<Character>();
        for(int i = 0; i < expr.length(); i++)
        {
            char ch = expr.charAt(i);
            if(ch == '(')
            {
                stack.push(ch);
            }
            else if(ch == ')')
            {
                if(stack.isEmpty())
                    return false;
                stack.pop();
            }
        }
        return stack.isEmpty();
    }
}

class program5
{
    public static void main(String A[])
    {
        String expr1 = "(a+(f-g)*2(a-d))";
        String expr2 = "(a+(f-g)*2(a-d)";
        BalancedParentheses obj = new BalancedParentheses();
        System.out.println(obj.isBalanced(expr1));
        System.out.println(obj.isBalanced(expr2));
    }
}
