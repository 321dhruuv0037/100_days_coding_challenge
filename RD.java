import java.util.*;

public class RD {
    public static void main(String[] args) {
        double total, x;
        int  year = 0, count=0;
        Scanner sc =  new Scanner(System.in);

        System.out.print("Enter amount invested : ");
        double invested = sc.nextDouble();
        System.out.print("Enter time period (in months) : ");
        double time = sc.nextDouble();
        System.out.print("Enter rate of interest : ");
        double rate = sc.nextDouble();
        x=invested;
        year= (int) (time/12);
        for (year=year; year>0; year--){
            if (count==0){
                invested=x*12;
                count++;
            }
            else{
                invested+=x*12;
            }
            total= (invested*((1+rate/100)));
            invested=invested+total;
        }
        //total= (float) ((float) invested*(Math.pow((1+rate),time-1)*(1+rate)/rate));
        System.out.println("Final returns is "+invested);
    }
}
