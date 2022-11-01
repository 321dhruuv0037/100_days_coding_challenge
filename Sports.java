class Sportsperson {
    public String name, title;
    void display_data(){
        System.out.println(title +" name : " +name);
    }
    public Sportsperson(String name, String title){
        this.name = name;
        this.title = title;
    }
}
class Athlete extends Sportsperson{
    private int noOfEvents;
    public Athlete(String name, int noOfEvents){
        super(name, "Athlete");
        this.noOfEvents = noOfEvents;
    }
    public void setNoOfEvents(int noOfEvents){
        this.noOfEvents = noOfEvents;
    }
    public int getNoOfEvents(){
        return noOfEvents;
    }
    @Override
    void display_data() {
        super.display_data();
        System.out.println("No of events : " +noOfEvents +"\n");
    }
}

class Hockey extends Sportsperson{
    private int noOfGoals;

    public Hockey(String name, int noOfGoals){
        super(name, "Hockey player");
        this.noOfGoals = noOfGoals;
    }
    public int getNoOfGoals(){
        return noOfGoals;
    }
    public void setNoOfGoals(int noOfGoals){
        this.noOfGoals = noOfGoals;
    }

    @Override
    void display_data(){
        super.display_data();
        System.out.println("No of goals : " +noOfGoals +"\n");
    }
}




public class Sports{
    public static void main(String[] args){

        Sportsperson p1 = new Athlete("Aakash", 5);
        Sportsperson p2 = new Hockey("Sampat", 10);

        ((Hockey)p2).setNoOfGoals(15);

        p1.display_data();
        p2.display_data();
    }
}
