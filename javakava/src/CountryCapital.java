import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class CountryCapital extends Frame implements ActionListener{
    
    Choice country,capital;
    String ar[]={"New Delhi","Tokyo","Berlin","Katmandu","Beijing",};
    Label lb1,lb2,lb3;
    Panel p1,p2,p3;
    Button cmp;

    CountryCapital()
    {
        setLayout(new FlowLayout());
        lb1=new Label("choose your country");
        lb2= new Label("choose your capital");
        add(lb1);
        add(lb2);
        p1=new Panel(new FlowLayout());
        p2=new Panel(new FlowLayout());
        p3=new Panel(new FlowLayout());

        country= new Choice();
        country.add("India");
        country.add("Japan");
        country.add("Germany");
        country.add("Nepal");
        country.add("china");


        capital=new Choice();
        capital.add("Berlin");
        capital.add("Tokyo");
        capital.add("Beijing");
        capital.add("Katmandu");
        capital.add("New Delhi");
        p1.add(country);
        p2.add(capital);

        cmp= new Button("compare");
        add(cmp);
        cmp.addActionListener(this);
        p3.add(lb1);
        setSize(350,300);
        add(p1);
        add(p2);
        add(p3);
        setVisible(true);
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e)
            {
                System.exit(0);
            }
            
        });

    }
    public static void main (String []args )
    {
        new CountryCapital();
    }
    @Override
    public void actionPerformed(ActionEvent e) {

        if((country.getSelectedItem()=="India")&&(capital.getSelectedItem()=="New Delhi"))
        {
            lb1.setText("Correct answer");
        }
        else if((country.getSelectedItem()=="Germany")&&(capital.getSelectedItem()=="Berlin"))
        {
            lb1.setText("Correct answer");
        }
        else if((country.getSelectedItem()=="China")&&(capital.getSelectedItem()=="Bejing"))
        {
            lb1.setText("Correct answer");
        }
        else if((country.getSelectedItem()=="Japa")&&(capital.getSelectedItem()=="Tokyo"))
        {
            lb1.setText("Correct answer");
        }
        else if((country.getSelectedItem()=="Nepal")&&(capital.getSelectedItem()=="Katmandu"))
        {
            lb1.setText("Correct answer");
        }
        else
        {
            int i;
            i=country.getSelectedIndex();
            lb1.setText("Wrong Answer Correct Answer is "+ar[i]);
        }

        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }


}
