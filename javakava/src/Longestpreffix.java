import java.util.*;

class Longestpreffix {
    public static void main(String[] arg) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Total number of strings-> ");
        int n = sc.nextInt();

        String[] strs = new String[n];

        for (int i = 0; i < n; i++) {
            System.out.print("Enter string " + (i + 1) + " -> ");
            strs[i] = sc.next();
        }

        String pfx = strs[0];

        for (int i = 1; i < n; i++) {
            String temp = strs[i];
            int j = 0;
            while (j < temp.length() && j < pfx.length() && temp.charAt(j) == pfx.charAt(j)) {
                j++;
            }
            if (j == 0) {
                System.out.print("");
            }
            pfx = temp.substring(0, j);
        }
        System.out.println(pfx.toString());     
    }
}