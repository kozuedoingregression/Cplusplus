class MyClass {
    public int publicVar = 1;
    protected int protectedVar = 2;
    int defaultVar = 3;
    private int privateVar = 4;

    public void publicMethod() {
        System.out.println("This is a public method.");
    }

    protected void protectedMethod() {
        System.out.println("This is a protected method.");
    }

    void defaultMethod() {
        System.out.println("This is a default method.");

    }

    private void privateMethod() {
        System.out.println("This is a private method.");
    }
}

class MySubClass extends MyClass {
    public void accessProtected() {

        System.out.println("Accessing protected variable: " + protectedVar);
        protectedMethod();
    }
}

class MyOtherClass {
    public void accessPublic() {
        MyClass myObj = new MyClass();
        System.out.println("Accessing public variable: " + myObj.publicVar);
        myObj.publicMethod();
    }

    public void accessDefault() {
        MyClass myObj = new MyClass();
        System.out.println("Accessing default variable: " + myObj.defaultVar);
        myObj.defaultMethod();
    }
}

public class Main {
    public static void main(String[] args) {
        MyClass myObj = new MyClass();
        System.out.println("Accessing public variable: " + myObj.publicVar);
        myObj.publicMethod();
        MySubClass mySubObj = new MySubClass();
        mySubObj.accessProtected();
        MyOtherClass myOtherObj = new MyOtherClass();
        myOtherObj.accessPublic();
        myOtherObj.accessDefault();

        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}