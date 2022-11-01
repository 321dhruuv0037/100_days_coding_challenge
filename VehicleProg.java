interface vehicle{
    void gear(int n);
    void increaseSpeed(int n);
    void applyBreak(int n);
    void display();
}
class Bicycle implements vehicle {
    double speed;
    int gear;

    @Override
    public void gear(int n) {
        gear = n;
    }

    @Override
    public void increaseSpeed(int n) {
        speed += n;
    }

    @Override
    public void applyBreak(int n) {
        speed -= n;
    }

    @Override
    public void display(){
        System.out.println("Current speed : " +speed);
        System.out.println("Gear : " +gear);
        System.out.println("Vehicle type : Bicycle");
        System.out.println("No of wheels : 2\n");
    }
}
class Bike implements vehicle {
    double speed;
    int gear;

    @Override
    public void gear(int n) {
        gear = n;
    }

    @Override
    public void increaseSpeed(int n) {
        speed += n;
    }

    @Override
    public void applyBreak(int n) {
        speed -= n;
    }

    @Override
    public void display(){
        System.out.println("Current speed : " +speed);
        System.out.println("Gear : " +gear);
        System.out.println("Vehicle type : Bike");
        System.out.println("No of wheels : 2\n");
    }
}
class Car implements vehicle {
    double speed;
    int gear;

    @Override
    public void gear(int n) {
        gear = n;
    }

    @Override
    public void increaseSpeed(int n) {
        speed += n;
    }

    @Override
    public void applyBreak(int n) {
        speed -= n;
    }

    @Override
    public void display(){
        System.out.println("Current speed : " +speed);
        System.out.println("Gear : " +gear);
        System.out.println("Vehicle type : Car");
        System.out.println("No of wheels : 4\n");
    }
}

public class VehicleProg {
    public static void main(String[] args){
        Bicycle cycle = new Bicycle();
        cycle.increaseSpeed(10);
        cycle.gear(2);
        cycle.applyBreak(3);
        cycle.display();

        Car car = new Car();
        car.increaseSpeed(60);
        car.gear(4);
        car.applyBreak(10);
        car.display();

        Bike bike = new Bike();
        bike.increaseSpeed(40);
        bike.gear(3);
        bike.increaseSpeed(10);
        bike.display();
    }
}
