class TrainTicketCounter {
    private boolean berthAvailable;

    public TrainTicketCounter() {
        this.berthAvailable = true;
    }

    public synchronized void allotBerth(String passengerName) {
        if (berthAvailable) {
            berthAvailable = false;
            System.out.println(passengerName + " got the berth!");
        } else {
            System.out.println("Sorry, berth unavailable for " + passengerName);
        }
    }
}

class PassengerThread extends Thread {
    private final TrainTicketCounter counter;
    private final String passengerName;

    public PassengerThread(TrainTicketCounter counter, String passengerName) {
        this.counter = counter;
        this.passengerName = passengerName;
    }

    public void run() {
        counter.allotBerth(passengerName);
    }
}

public class BerthAllocation {
    public static void main(String[] args) {
        TrainTicketCounter counter = new TrainTicketCounter();

        PassengerThread passenger1 = new PassengerThread(counter, "Passenger 1");
        PassengerThread passenger2 = new PassengerThread(counter, "Passenger 2");

        passenger1.start();
        passenger2.start();

        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
