import java.util.*;

class Occurrence {
    public static void main(String args[]) {

        String s1 = "abcd abc aabc baa abcaa";
        String s2 = "aa";
        int count = 0;
        for (int i = 0; i < s1.length() - 1; i++) {
            String ans = s1.substring(i, i + 2);
            if (ans.equals(s2)) {
                count++;
            }
        }
        System.out.println("count = " + count);
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
