import java.util.Scanner;
public class LumpSum {
    public static void main(String[] args){

        float ls;
        Scanner sc =  new Scanner(System.in);

        System.out.print("Enter amount invested : ");
        double invested = sc.nextDouble();
        System.out.print("Enter time period (in years) : ");
        double time = sc.nextDouble();
        System.out.print("Enter rate of interest : ");
        double rate = sc.nextDouble();
        ls= (float) (invested*(Math.pow((1+rate/100),time)));
        System.out.println("Final returns is "+ls);

    }
}
