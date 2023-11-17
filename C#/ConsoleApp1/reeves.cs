using system;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            //PRINT FUNCTION

            console.Writeline("HelloWorld");

            int num1 = 24;
            string ch1 = "AnotherWorld";
            bool x = true;

            console.Writeline(ch1);
            console.writeline(num1);
            console.Writeline(x);

            //BOOL(TRUE OR FALSE)

            bool catIsAlive = true;  //true or false
            if (catIsAlive)
            {
                console.Writeline("cat is alive");
            }
            else
            {
                console.Writeline("cat is not alive");
            }

            //INPUT FUNCTION

            string input = console.Readline();
            console.Writeline(input);

            console.writeline("Your Name");
            string name = console.Readline();
            console.Writeline("Your Age");
            int age = console.Read; ine();

            console.Writeline("Name" + name + "Age" + age);


        }
    }
}