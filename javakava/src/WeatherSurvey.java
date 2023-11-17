import java.util.*;

class WeatherSurvey {
    public static void main(String[] args) {
        int survey[][] = new int[10][5];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                survey[i][j] = 0;
            }
        }
        int cityCode;
        int day;
        int value;
        int flag;
        int maxTemp = 0;
        int maxDay = 0;
        int minDay = 0;
        int minTemp = 100;

        do {
            System.out.print("Enter Day-> ");
            day = sc.nextInt();
            System.out.print("Enter CityCode-> ");

            cityCode = sc.nextInt();
            System.out.print("Enter value-> ");
            value = sc.nextInt();
            survey[day][cityCode] = value;
            if (value >= maxTemp) {
                maxTemp = value;
                maxDay = day;
            }
            if (value < minTemp) {
                minTemp = value;
                minDay = day;
            }
            System.out.println("Continue?");
            flag = sc.nextInt();

        } while (flag == 1);

        System.out.println("\t Delhi \t Mumbai \t Kolkatta \t Chennai \t Dehradun");
        for (int i = 0; i < 10; i++) {
            System.out.print(i + 1);
            for (int j = 0; j < 5; j++) {
                System.out.print("\t" + survey[i][j] + "\t");
            }
            System.out.println("");
        }

        System.out.println("Maximum Temperature is " + maxTemp + " on " + maxDay + " Day of this month in Dehradun");
        System.out.println("Minimum Temperature is " + minTemp + " on " + minDay + " Day of this month in Chennai");

        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");
    }
}
