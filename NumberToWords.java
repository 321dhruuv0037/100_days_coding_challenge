import java.util.Scanner;
public class NumberToWords{
    private static String numbertoword(int a){
        String word="";
        String unitarray[] = {" "," One"," Two"," Three"," Four"," Five"," Six"," Seven"," Eight"," Nine"," Ten",
                " Eleven"," Twelve"," Thirteen"," Fourteen"," Fifteen"," Sixteen"," Seventeen"," Eighteen"," Nineteen"};
        String tensarray[]={" "," Ten"," Twenty"," Thirty"," Forty"," Fifty"," Sixty"," Seventy"," Eighty"," Ninety"};
        if((a/1000>0)) {
            word = word + numbertoword(a/1000) + " Thousand";
            a=a%1000;
        }
        if((a/100>0)) {
            word = word + numbertoword(a/100) + " Hundred and";
            a=a%100;
        }if((a/20>0)) {
            word = word + tensarray[a/10];
            a=a%10;
        } if(a>0) {
            if(a<20) {
                word = word + unitarray[a]; //numbers from 0 to 19
                System.out.println(word);
            } else {
                word = word + tensarray[a/10];
                System.out.println(word);
            }
        }
        return word;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = 0;
        System.out.print("Please enter a number (max upto 100000) : ");
        number = sc.nextInt();
        if(number==0) {
            System.out.println("Zero");
        } else if (number>100000) {
            System.out.println("Number should be less than 100000");
        } else if (number<0) {
            System.out.println("Please enter a positive number");
        } else if (number == 100000){
            System.out.println("Number in words : One hundred thousand");
        }
        else {
            System.out.println("Number in words : " + numbertoword(number));
        }
    }
}