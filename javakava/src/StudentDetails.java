import java.util.*;

public class StudentDetails {
    private String name;
    private int rollNo;
    private String course;
    private static String universityName = "Graphic Era";

    public void setDetails(String name, int rollNo, String course) {
        this.name = name;
        this.rollNo = rollNo;
        this.course = course;
    }

    public void displayDetails(int n) {
        System.out.println(name + "\t\t " + rollNo + "\t\t\t" + course + "\t\t " + universityName);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of students");
        int n = sc.nextInt();
        StudentDetails[] s1;
        s1 = new StudentDetails[n];
        for (int i = 0; i < n; i++) {
            s1[i] = new StudentDetails();
            System.out.println("Enter the name of student:");
            String name = sc.next();

            System.out.println("Enter the Roll NO of student:");
            int rollNo = sc.nextInt();
            System.out.println("Enter the course of student:");
            String course = sc.next();
            s1[i].setDetails(name, rollNo, course);
        }
        System.out.println("Name\t\t RollNo\t\t Course\t\t University\t\t");
        for (int i = 0; i < n; i++) {
            s1[i].displayDetails(n);
        }
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
