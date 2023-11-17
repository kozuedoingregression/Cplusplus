import java.util.*;

abstract class Shape {
    abstract public void draw();

    abstract public void erase();
}

class Circle extends Shape {
    public void draw() {
        System.out.println("The circle is drawn");

    }

    public void erase() {
        System.out.println("The circle is erased");
    }
}

class Triangle extends Shape {
    public void draw() {
        System.out.println("The triangle is drawn");

    }

    public void erase() {
        System.out.println("The triangle is erased");

    }

}

class Square extends Shape {
    public void draw() {
        System.out.println("The Square is drawn");

    }

    public void erase() {
        System.out.println("The Square is erased");

    }
}

public class DrawShape {
    public static void main(String[] args) { Circle c1 = new Circle();
    c1.draw();
    c1.erase();
    Triangle t1 = new Triangle(); t1.draw();
    t1.erase();
    Square z1 = new Square(); z1.draw();
    z1.erase();
    
    System.out.println("****************************************************");
              System.out.println("Executed by Sashank Thapa    RollNo 62    CSE(4)E   ");
              System.out.println("****************************************************");
    
    
    }
}