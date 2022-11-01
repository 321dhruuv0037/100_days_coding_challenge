import java.util.regex.*;

public class emailValidation {
    public static void main(String args[]) {

        String regex = "^[\\w!#$%&'*+/=?`{|}~^-]+(?:\\.[\\w!#$%&'*+/=?`{|}~^-]+)*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,6}$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher1 = pattern.matcher("321dhruuv0037@dbit.in");

        if(matcher1.matches())
            System.out.println("Valid input☑");
        else System.out.println(matcher1.matches());


    }
}
