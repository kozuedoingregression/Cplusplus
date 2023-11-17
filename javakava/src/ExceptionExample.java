class ExceptionExample {
    public void performOperation() throws ClassNotFoundException {
        throw new ClassNotFoundException("Class not found!");
    }

    public void divideNumbers(int a, int b) {
        try {
            int result = a / b;
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Division by zero error!");
        }
    }

    public static void main(String[] args) {
        ExceptionExample example = new ExceptionExample();

        try {
            example.performOperation();
        } catch (ClassNotFoundException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }

        example.divideNumbers(10, 0);
        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
