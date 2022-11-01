import java.util.*;
class LessBalanceException extends Exception{
    public LessBalanceException(double amount){
        System.out.println("WithDraw amount " +amount +" is not valid.");
    }
}

class Account{
    String name;
    int account_number;
    double amount, balance, min_balance = 1000;

    public Account(int account_number, String name, double balance){
        this.account_number = account_number;
        this.name = name;
        this.balance = balance;
    }

    public void setMin_balance(double amount){
        this.min_balance = amount;
    }

    public double getMin_balance(){
        return min_balance;
    }

    public void deposit(double amount){
        balance += amount;
    }

    public void withdraw(double amount) throws LessBalanceException {
        if ((balance-amount)>min_balance){
            balance -= amount;
        }else {
            throw new LessBalanceException(amount);
        }
    }

    public void display_data(){
        System.out.println("Account no : " +account_number);
        System.out.println("Account holder : " +name);
        System.out.println("Current balance : " +balance);
        System.out.println("Minimum balance required : " +min_balance);
    }
}

public class Bank {
    static int i=0;
    public static void main(String[] args){
        String name;
        int account_number, choice, j = 0, k;
        double amount, balance, min_balance = 1000;
        Scanner input = new Scanner(System.in);
        Account account[] = new Account[10];

        while(true){
            System.out.println("\nBank transactions: ");
            System.out.println("1.Create account \n2.Withdraw \n3.Deposit \n4.Display \n5.Exit");
            System.out.print("Enter your choice : ");
            choice = input.nextInt();

            switch (choice){
                case 1:
                    System.out.print("\nEnter account number : ");
                    account_number = input.nextInt();
                    System.out.print("Enter account-holder's name : ");
                    name = input.next();
                    System.out.print("Enter balance amount : ");
                    balance = input.nextDouble();
                    if (balance<1000){
                        System.out.println("\nInvalid input");
                        System.out.println("Minimum balance should be " +min_balance +"\n");
                        break;
                    } else {
                        account[i] = new Account(account_number, name, balance);
                        i++;
                        break;
                    }

                case 2:
                    System.out.print("\nEnter your account number : ");
                    account_number = input.nextInt();
                    for (k=0; k<=i; k++){
                        if (account_number == account[k].account_number){
                            j=-1;
                            break;
                        }
                    }
                    if (j==-1) {
                        System.out.print("Enter amount to be withdrawn : ");
                        amount = input.nextDouble();
                        try {
                            account[k].withdraw(amount);
                        }catch (LessBalanceException e){
                        }
                    } else {
                        System.out.println("\nInvalid input!");
                        System.out.println("Please enter valid account number \n");
                    }
                        j=k=0;
                        break;
                case 3:
                    System.out.print("\nEnter your account number : ");
                    account_number = input.nextInt();
                    for (k=0; k<=i; k++){
                        if (account_number == account[k].account_number){
                            j=-1;
                            break;
                        }
                    }
                    if (j==-1) {
                        System.out.print("Enter amount to be deposited : ");
                        amount = input.nextDouble();
                        account[k].deposit(amount);
                    } else {
                        System.out.println("\nInvalid input!");
                        System.out.println("Please enter valid account number \n");
                    }
                        j=k=0;
                        break;
                case 4:
                    System.out.print("\nEnter your account number : ");
                    account_number = input.nextInt();
                    for (k=0; k<=i; k++){
                        if (account_number == account[k].account_number){
                            j=-1;
                            break;
                        }
                    }
                    if (j==-1) {
                        account[k].display_data();
                    } else {
                        System.out.println("\nInvalid input!");
                        System.out.println("Please enter valid account number \n");
                    }
                    j=k=0;
                    break;
                case 5:
                    System.exit(1);
                    break;
                default:
                    System.out.println("\nInvalid input! \n");
            }
        }
    }
}
