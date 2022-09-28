import java.util.*;
public class Loan{
	public static void main(String[] args){

		double emi;
		Scanner sc =  new Scanner(System.in);
		
		System.out.print("Enter amount invested : ");
		double invested = sc.nextDouble();
		System.out.print("Enter time period (in years) : ");
		double time = sc.nextDouble();
        time = time*12;
		System.out.print("Enter rate of interest : ");
		double rate = sc.nextDouble();
        rate = rate/(12*100);
		emi = (invested*rate*Math.pow(1+rate,time))/(Math.pow(1+rate,time)-1);
		System.out.println("EMI is "+emi);

	}
}
