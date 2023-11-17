import java.util.*;

class Election {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        String name[] = new String[5];
        int votes[] = new int[5];
        float per[] = new float[5];
        double total = 0;
        for (int i = 0; i < 5; i++) {
            System.out.println("Enter name of " + (i + 1) + " candidate");
            name[i] = in.next();
            System.out.println("Enter number of votes received : ");
            votes[i] = in.nextInt();
            total = total + votes[i];
        }
        System.out.println();
        for (int i = 0; i < 5; i++) {
            per[i] = (float) ((votes[i] / total) * 100);
        }
        System.out.println("Candidate name\t\tvotes received\t\tpercentage of total votes received");
        for (int i = 0; i < 5; i++) {

            System.out.println(name[i] + "\t\t\t\t\t" + votes[i] + "\t\t\t\t" + per[i]);
        }
        double dd = 0;
        String ansname = "";
        for (int i = 0; i < 5; i++) {
            if (per[i] > dd) {
                ansname = name[i];
                dd = per[i];
            }
        }
        System.out.println("The Winner Candidate Name is " + ansname);

        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
