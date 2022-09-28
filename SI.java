import java.util.*;
public class SI{

	public static void main(String[] args){

		double returns, final_val;
		Scanner sc =  new Scanner(System.in);
		
		System.out.print("Enter amount invested : ");
		double invested = sc.nextDouble();
		System.out.print("Enter time period (in years) : ");
		double time = sc.nextDouble();
		System.out.print("Enter rate of interest : ");
		double rate = sc.nextDouble();
		returns= (invested*time*rate)/100;
        final_val= returns+invested;
		System.out.println("Returns will be "+final_val);

	}
}
