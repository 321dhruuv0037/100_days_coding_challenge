public class Multithread {
    static int n;
    int counter = 1;
    public void printEvenNumbers(){
        synchronized (this){
            while(counter <= n){
                if (counter %2 == 0) {
                    System.out.print(counter + " ");

                    counter++;

                    notify();
                }else {
                    try {
                        wait();
                    } catch (InterruptedException e) {
                        throw new RuntimeException(e);
                    }
                }
            }
        }

    }

    public void printOddNumbers(){
        synchronized(this){
            while(counter <= n){
                if (counter %2 == 1) {
                    System.out.print(counter + " ");

                    counter++;

                    notify();
                }else {
                    try {
                        wait();
                    } catch (InterruptedException e) {
                        throw new RuntimeException(e);
                    }
                }
            }
        }
    }

    public static void main(String[] args){
        Multithread m = new Multithread();
        n=20;

        Thread t1 = new Thread(new Runnable() {
            @Override
            public void run() {
                m.printOddNumbers();
            }
        });

        Thread t2 = new Thread(new Runnable() {
           @Override
           public void run(){
               m.printEvenNumbers();
           }
        });

        t1.start();
        t2.start();
    }
}
