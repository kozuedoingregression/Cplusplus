abstract class A
{
    abstract void display();
}

class B extends A{
    void display()
    {
        System.out.println("display abestract B");
    }
}

class C extends A
{
    void display()
    {
        System.out.println("display abestract C");
    }
}

class Temp
{
    public static void main(String[] args) {
        //A a;
        A b= new B();
        A c=new C();

       // a.show();
        b.display();
        c.display();
        
    }
}

