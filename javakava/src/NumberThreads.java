class OddNumberThread extends Thread {
    public void run() {
        System.out.println("Odd Numbers:");
        for (int i = 1; i <= 20; i++) {
            if (i % 2 != 0) {
                System.out.println(i);
            }
        }
    }
}

class EvenNumberThread extends Thread {
    public void run() {
        System.out.println("Even Numbers:");
        for (int i = 1; i <= 20; i++) {
            if (i % 2 == 0) {
                System.out.println(i);
            }
        }
    }
}

public class NumberThreads {
    public static void main(String[] args) {
        OddNumberThread oddThread = new OddNumberThread();
        EvenNumberThread evenThread = new EvenNumberThread();

        oddThread.start();
        evenThread.start();

        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
