import java.util.*;
public class SIP {
    public static void main(String[] args) {
        double returns = 1, amount, i;
        Scanner sc =  new Scanner(System.in);

        System.out.print("Enter amount invested : ");
        double p = sc.nextDouble();
        System.out.print("Enter time period (in years) : ");
        double t = sc.nextDouble();
        System.out.print("Enter rate of interest : ");
        double r = sc.nextDouble();

        amount=p*12;
        double x=amount;

        for(i=0;i<t;t--){
            returns = (amount*r)/100;
            amount = amount + returns;
            amount = amount + x;
        }
        amount -= x;
        float total = (float) amount;

        System.out.println("Returns will be "+total);
    }
}
