import java.util.*;

class HeightSort{
    public static void main(String [] arg) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Total number of names-> ");
        int n = sc.nextInt();

        int[] height = new int[n];
        String[] names = new String[n];

        for (int i = 0; i < n; i++) 
        {
            System.out.print("Enter name "+(i+1)+" -> ");
            names[i] = sc.next();
        }
        for (int i = 0; i < n; i++) 
        {
            System.out.print("Enter height "+(i+1)+" -> ");
            height[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n - i - 1; j++) 
            {
                if (height[j] > height[j + 1]) 
                {
                    int temp1 = height[j];
                    height[j] = height[j + 1];
                    height[j + 1] = temp1;

                    String temp2 = names[j];
                    names[j] = names[j + 1];
                    names[j + 1] = temp2;
                }
            }
        }
        System.out.println(Arrays.toString(names));
    }
}