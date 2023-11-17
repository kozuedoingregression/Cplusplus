class CommandLineSum {
    public static void main(String[] args) {
        int sum = 0;
        StringBuilder invalidIntegers = new StringBuilder();

        for (String arg : args) {
            try {
                int num = Integer.parseInt(arg);
                sum += num;
            } catch (NumberFormatException e) {
                invalidIntegers.append(arg).append(" ");
            }
        }

        System.out.println("Sum of valid integers: " + sum);

        if (invalidIntegers.length() > 0) {
            System.out.println("Invalid integers entered: " + invalidIntegers.toString());
        }
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
