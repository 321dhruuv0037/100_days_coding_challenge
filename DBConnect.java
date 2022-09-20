import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Date;

public class DBConnect {
    public Connection connect = null;
    private Statement statement = null;

    private PreparedStatement preparedStatement = null;
    private ResultSet resultSet = null;

    public void establishConnection() throws ClassNotFoundException, SQLException {

        Class.forName("com.mysql.jdbc.Driver");

        connect = DriverManager.getConnection("jdbc:mysql://localhost/demo?"
                + "user=root1&password=");
    }
    public void readDataBase() throws Exception {
        try {
            establishConnection();

            statement = connect.createStatement();

            resultSet = statement.executeQuery("SELECT * FROM demo.portfolio;");
            writeResultSet(resultSet);

        } catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }

    private void writeResultSet(ResultSet resultSet) throws SQLException {

        while (resultSet.next()) {

            String type = resultSet.getString("Type");
            Double invested = resultSet.getDouble("Invested");
            Double rate = resultSet.getDouble("Rate");
            Double time = resultSet.getDouble("Time");
            Double returns = resultSet.getDouble("Returns");
            String bank_name = resultSet.getString("Bank");
            System.out.println("Type: " + type);
            System.out.println("Invested: " + invested);
            System.out.println("Rate: " + rate);
            System.out.println("Time: " + time);
            System.out.println("Return: " + returns);
            System.out.println("Bank: " + bank_name);
        }
    }

    public void insertdata() throws IOException, SQLException, ClassNotFoundException {
        establishConnection();
        PreparedStatement preparedStatement = connect.prepareStatement("INSERT INTO `demo`.`portfolio` (`Type`, `Invested`, `Rate`, `Time`, `Returns`, `Bank`) VALUES ('Savings', '668121', '7.5', '15', '1053210', 'IJK');");

        int status = preparedStatement.executeUpdate();
        if (status!=0){
            System.out.println("Inserted data!");
        }
    }


    private void close() {
        try {
            if (resultSet != null) {
                resultSet.close();
            }

            if (statement != null) {
                statement.close();
            }

            if (connect != null) {
                connect.close();
            }
        } catch (Exception e) {

        }

    }

    public static void main(String[] args) throws Exception {
        DBConnect connect1 = new DBConnect();
        connect1.insertdata();
        connect1.readDataBase();
    }
}



