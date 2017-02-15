import java.util.Scanner;
public class hack {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a=0, b=1, c=0;
		System.out.print("Enter the length of Fibonacci Series : ");
		int len = in.nextInt();
		len=len-2;	 /*Since we have printed first two elements of the series outside the loop.*/ 
		System.out.print(a + " " + b + " ");
		while(len!=0){
			c=a+b;
			a=b;
			b=c;
			System.out.print(c + " ");
			len--;
		}
		in.close();
	}
}
