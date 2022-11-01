import java.util.Scanner;
class Teacher {
    String name;
    String department;
    String course;
    String desgination;
    int teacherId;

    public Teacher(String name, String department, String course, String desgination, int teacherId) {
        this.name = name;
        this.department = department;
        this.course = course;
        this.desgination = desgination;
        this.teacherId = teacherId;
    }
    public void display(){
        System.out.println("Name : " +this.name);
        System.out.println("Department : " +this.department);
        System.out.println("Course : " +this.course);
        System.out.println("Designation : " +this.desgination);
        System.out.println("Teacher id : " +this.teacherId);

    }
}

class Professor extends Teacher{

    public Professor(String name, String department, String course, int teacherId){
        super(name, department, course, "Professor", teacherId);
    }
}

class Associate_professor extends Teacher{

    public Associate_professor(String name, String department, String course, int teacherId){
        super(name, department, course, "Associate_professor", teacherId);
    }
}

class Assistant_professor extends Teacher{

    public Assistant_professor(String name, String department, String course, int teacherId){
        super(name, department, course, "Assistant_professor", teacherId);
    }
}

public class Teach {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        String name = null; String course = null; String department =null;
        int tid = 0 , choice;

        while(true){
            System.out.println("Select teacher designation : ");
            System.out.println("1.Professor \n2.Assistant Professor \n3.Associate Professor \n4.Exit");
            System.out.print("Enter your choice : ");
            choice = input.nextInt();
            if (choice != 4) {
                System.out.print("Enter name : ");
                name = input.next();
                System.out.print("Enter course : ");
                course = input.next();
                System.out.print("Enter department : ");
                department = input.next();
                System.out.print("Enter teacher id : ");
                tid = input.nextInt();
            }
            switch(choice) {
                case 1:
                    Professor prof = new Professor(name, course, department, tid);
                    prof.display();
                    break;
                case 2:
                    Assistant_professor assistant_professor = new Assistant_professor(name, course, department, tid);
                    assistant_professor.display();
                    break;
                case 3:
                    Associate_professor associate_professor = new Associate_professor(name, course, department, tid);
                    associate_professor.display();
                    break;
                case 4:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}