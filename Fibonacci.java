import java util.*;
class Fibonacci
{
public static void main (String args [])
{
int n, a=0,b=0,c=1;
Scanner sc = new Scanner (System.in);
System.out.println("enter the values of n:");
n=sc.nextInt();
System.out.println("fibonacci series:");
for(int i=1;i<=n;i++)
{
a=b;
b=c;
c=a+b;
System.out.println(a+" ");
}
}

