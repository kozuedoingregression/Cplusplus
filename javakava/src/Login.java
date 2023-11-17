import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class Login extends Frame implements ActionListener{

    Label l1,l2,l3;
    TextField t1,t2;
    Button b1;
    Panel p1,p2,p3;

    Login()
    {
            setLayout(new FlowLayout());
            Panel p1 = new Panel();
            GridLayout g1= new GridLayout();

            p1.setLayout(g1);

            l1=new Label("Username");
            t1=new TextField(30);
            t2=new TextField(30);
            t2.setEchoChar('#');
            p1.add(l1);
            p1.add(t1);
            p1.add(l2);
            p1.add(t2);
            p2= new Panel(new GridLayout(1,2));
            b1= new Button("Login");
            b1.addActionListener(this);
            l3=new Label("");
            p2.add(b1);
            setSize(350,300);
            add(p1);
            add(p2);
           // add(p3);
            setVisible(true);

            addWindowListener(new WindowAdapter() {
                public void windowClosing(WindowEvent e)
                {
                    System.exit(0);
                }
                
            });

    }
    public static void main (String [] args)
    {
        new Login();
    }

    @Override
    public void actionPerformed(ActionEvent e) {

        String u1,pw;
        u1=t1.getText();
        pw=t2.getText();

        if((u1.equals("gehu"))&& (pw.equals("1234")))
        {
            l3.setText("Welcome User"+u1);
        }

        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }
    
}
