import java.util.*;

class DublicateChar {
    public static void main(String[] args) {

        String s1 = "Graphic Era";
        String ans = removeDuplicates(s1);
        System.out.println("The given String is : " + s1);
        System.out.println("After removing duplicate characters the new string is : " + ans);
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }

    private static String removeDuplicates(String s1) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s1.length(); i++) {
            char c = s1.charAt(i);
            if (sb.indexOf(String.valueOf(c)) == -1) {
                sb.append(c);
            }
        }
        return sb.toString();
    }
}
