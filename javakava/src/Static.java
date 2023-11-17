public class Static {
    static int a1 = 65;
    static int a2;

    static void check(int var) {
        System.out.println("a1 = " + a1);
        System.out.println("a2 = " + a2);
        System.out.println("var = " + var);
    }

    static {
        System.out.println("Running the static block!!");
        a2 = a1 + 22;
    }

    public static void main(String[] args) {
        check(10);
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
