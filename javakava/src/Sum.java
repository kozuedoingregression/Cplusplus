import java.util.*;
class Sum {

    public static void main(String[] arg) {
        int table[][] = new int[5][5];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                table[i][j] = 0;
            }
        }
        int salesman;
        int quarter;
        int value;
        int flag;

        do {
            System.out.print("Enter Salesman-> ");
            salesman = sc.nextInt();
            System.out.print("Enter Quarter-> ");
            quarter = sc.nextInt();
            System.out.print("Enter value-> ");
            value = sc.nextInt();
            table[salesman][quarter] = value;

            table[salesman][4] += value;
            table[4][quarter] += value;
            table[4][4] += table[salesman][quarter];
            System.out.println("Continue?");
            flag = sc.nextInt();
        } while (flag == 1);

        System.out.println("\tQuarter1\tQuarter2\tQuarter3\tQuarter4\tTotal");
        for (int i = 0; i < 5; i++) {
            if (i == 0) {
                System.out.print("Salesman1");
            } else if (i == 1) {
                System.out.print("Salesman2");
            } else if (i == 2) {
                System.out.print("Salesman3");
            } else if (i == 3) {
                System.out.print("Salesman4");
            } else {
                System.out.print("Total\t");

            }
            for (int j = 0; j < 5; j++) {
                System.out.print("\t" + table[i][j] + "\t");
            }
            System.out.println("");
        }
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");
    }
}
