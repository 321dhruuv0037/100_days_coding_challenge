import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class ConnectDB {
    static Connection connection = null;
    static String databaseName = "";
    static String url = "jdbc:mysql://localhost:3306/" + databaseName;

    static String username = "root";
    static String password = "";

    public static void main(String[] args) throws ClassNotFoundException, InstantiationException, IllegalAccessException, SQLException {
        Class.forName("com.mysql.jdbc.Driver").newInstance();
        connection = DriverManager.getConnection(url,username,password);
        PreparedStatement preparedStatement = connection.prepareStatement("INSERT INTO `demo`.`portfolio` (`Type`, `Invested`, `Rate`, `Time`, `Returns`, `Bank`) VALUES ('Current', '9466', '7', '6', '11236', 'ABC');");

        int status = preparedStatement.executeUpdate();
        if (status!=0){
            System.out.println("Database connected!");
        }
    }
}
