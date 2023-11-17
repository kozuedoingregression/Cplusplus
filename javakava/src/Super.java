class A {
    int z;

    public A() {
        z = 49;
        System.out.println("class A constructor ");
    }

    public void f1() {
        System.out.println("class A function");
    }

    public void displayZ() {
        System.out.println("the value of z is " + z);
    }
}

class B extends A {
    int z;

    public B() {
        super();
        System.out.println("Class B constructor");
    }

    public void f2() {
        super.f1();
        super.displayZ();
        super.z = 56;

    }
}

public class Super {
    public static void main(String[] args) {
        B o1 = new B();
        o1.f2();
        o1.displayZ();

        System.out.println("****************************************************");
        System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
        System.out.println("****************************************************");

    }
}
