package experiment1;

import org.w3c.dom.ls.LSOutput;

import java.sql.*;

public class dateComparison {
    public static void main(String[] args) {
        String date1 = "2022-10-09";
        String date3 = "2022-09-09";
        String date4 = "2022-11-05";
        String date2 = null;



        DBConnect connectnow = new DBConnect();
        Connection connectdb = connectnow.getConnection();
        Statement statement = null;
        String sql = "select current_date()";
        Statement s = null;
        try {
            s = connectdb.createStatement();
            ResultSet resultSet = s.executeQuery(sql);
            if(resultSet.next()) {
              date2 = resultSet.getString(1);
            }
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        if(date4.compareTo(date2) > 0) {
            System.out.println("Date 4 occurs after Date 2");//-ve value input before output
            System.out.println("proper input");

        }
        if(date3.compareTo(date2) < 0) {
            System.out.println("Date 3 occurs before Date 2");//+ve value output before input
            System.out.println("invalid input");

        }
        if(date1.compareTo(date2) == 0) {
            System.out.println("Both dates are equal");
            System.out.println("invalid input");
        }
    }


}
