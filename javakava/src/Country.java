import java.util.*;

class MyNationException extends Exception {
    public MyNationException(String message) {
        super(message);
    }

    public static void checkNationGreeting(String greeting) throws MyNationException {
        if (!greeting.equals("jai hind") && !greeting.equals("JAI HIND")) {
            throw new MyNationException("Invalid nation greeting!");
        }
    }
}

class Country {
    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter your nation greeting: ");
            String userGreeting = scanner.nextLine();
            MyNationException.checkNationGreeting(userGreeting);
            System.out.println("Valid nation greeting!");
        } catch (MyNationException e) {
            System.out.println("Exception: " + e.getMessage());
        }
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }

}
