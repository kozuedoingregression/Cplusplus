import java.util.*;

class CarSurvey {
    public static void main(String args[]) {
        int survey[][] = new int[4][4];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                survey[i][j] = 0;
            }
        }
        int cityCode;
        int carCode;
        int flag;

        do {
            System.out.print("Enter Citycode->");
            cityCode = sc.nextInt();
            System.out.print("Enter carcode->");
            carCode = sc.nextInt();

            survey[cityCode][carCode]++;
            System.out.print("continue?");
            flag = sc.nextInt();
            System.out.println(" ");
        } while (flag == 1);

        System.out.println("\tMaruti-K10\tZen-Astelo\tWagnor\tMaruti-SX4");
        for (int i = 0; i < 4; i++) {
            if (i == 0) {
                System.out.print("Delhi");
            } else if (i == 1) {
                System.out.print("Mumbai");
            } else if (i == 2) {
                System.out.print("Kolkata");
            } else {
                System.out.print("Chennai");
            }
            for (int j = 0; j < 4; j++) {
                System.out.print("\t" + survey[i][j] + "\t");
            }

            System.out.println("");
        }
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");
    }

}
