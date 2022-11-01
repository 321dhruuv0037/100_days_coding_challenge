class EmployeeData{
    private int emp_id;
    private double emp_salary;
    private String emp_name, department, designation;

    public EmployeeData(int emp_id, double emp_salary, String emp_name, String department, String designation){
        this.emp_id = emp_id;
        this.emp_salary = emp_salary;
        this.emp_name = emp_name;
        this.department= department;
        this.designation = designation;

    }

    public int getEmp_id() {
        return emp_id;
    }

    public void setEmp_id(int emp_id) { this.emp_id = emp_id; }

    public double getEmp_salary() {
        return emp_salary;
    }

    public void setEmp_salary(double emp_salary) {
        this.emp_salary = emp_salary;
    }

    public String getEmp_name() {
        return emp_name;
    }

    public void setEmp_name(String emp_name) {
        this.emp_name = emp_name;
    }

    public String getDepartment() {
        return department;
    }

    public void setDepartment(String department) {
        this.department = department;
    }

    public String getDesignation() {
        return designation;
    }

    public void setDesignation(String designation) {
        this.designation = designation;
    }
    public void displayEmpDetails(){
        System.out.println("Emp id : " +this.emp_id);
        System.out.println("Emp name : " +this.emp_name);
        System.out.println("Emp salary : " +this.emp_salary);
        System.out.println("Emp department : " +this.department);
        System.out.println("Emp designation : "  +this.designation +"\n");
    }
}

public class Employee {
    public static void main(String[] args){
        EmployeeData emp1 = new EmployeeData(01, 3000000, "Dhruuv Naik", "IT", "HOD");
        EmployeeData emp2 = new EmployeeData(02, 2000000, "Pratham Junghare", "IT", "Dean");
        emp2.setEmp_salary(2500000);
        emp1.setEmp_id(10);

        emp1.displayEmpDetails();
        emp2.displayEmpDetails();
    }
}
