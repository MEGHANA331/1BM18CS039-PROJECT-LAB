import java.util.*;
class Quadratic
{
public static void main (String args [])
{
Scanner sc = new Scanner(System.in);
int a,b,c;
System.out.println("enter the values of a,b,c");
a = sc.nextInt();
b = sc.nextInt();
c = sc.nextInt();
int d = ((b*b)-(4*a*c));
if(d==0)
{
System.out.println("the roots are real and equal");
float r1 =(float) (-b/(2*a));
System.out.println("the roots are"+r1+ "and"+ r1);
}
else if(d>o)
{
System.out.println("the roots are real and distinct");
float r1 = (float)((-b+(Math.sqrt(d)))/(2*a));
float r2 = (float)((-b-(Math.sqrt(d)))/(2*a));
System.out.println("the roots are"+r1+ "and" + r2);
}
else
{
System.out.println("the roots are imaginary");
float f = (float)(-b/2*a);
float r1 = (float) (Math.sqrt(d)/(2*a));
float r2 = (float) (Math.sqrt(d)/(2*a));
System.out.println("the roots are"+f+"+ "+r1+"i");
System.out.println("the roots are"+f+"- "+r2+"i");
}
}
}