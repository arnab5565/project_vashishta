
import java.applet.Applet;
import java.awt.*;
public class Demo extends Applet{

    public void paint(Graphics g){

        setBackground(Color.ORANGE);
        g.setFont(new Font("TimesNewRoman", 1 , 18));
        g.drawString("THIS IS AN APPLET", 10 , 100);
        


    }


}