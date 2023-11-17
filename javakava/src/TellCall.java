import java.util.*;

public class TellCall {
    long phno;
    String sname;
    int n;
    double amt;

    TellCall(long x, String y, int z) {
        phno = x;
        sname = y;
        n = z;
    }

    void compute() {
        if (n <= 100)
            amt = 500;
        else if (n <= 200)
            amt = ((n - 100) * 1.00) + 500;
        else if (n <= 300)
            amt = 100 * 1.00 + ((n - 200) * 1.20) + 500;
        else
            amt = 100 * 1.00 + 100 * 1.20 + ((n - 300) * 1.50) + 500;
    }

    void display() {
        System.out.println("\t\t\t----INFO----\t\t\t");
        System.out.print("Telephone Number-> " + phno);
        System.out.print("\t");
        System.out.println("Subscriber name-> " + sname);
        System.out.print("Number of calls made-> " + n);
        System.out.print("\t");
        System.out.println("Bill Amount-> " + amt);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long phno;
        System.out.println("Enter phone number : ");
        phno = sc.nextLong();
        System.out.println("Enter Name:");
        String sname = sc.next();
        System.out.println("Enter number of calls : ");
        int n = sc.nextInt();

        TellCall object = new TellCall(phno, sname, n);
        object.compute();
        object.display();

        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
