import java.util.Random;

/**
 * Created by bilguun on 12/18/16.
 */
public class Lottery{

    private int num;
    private int p = 0;
    private PlayerType1 p1;
    private PlayerType2 p2;
    private PlayerType3 p3;

    public Lottery() {
        this.setNum();
        p1 = new PlayerType1(this, "");
        p2 = new PlayerType2(this, "");
        p3 = new PlayerType3(this, "");
    }

    private void setNum(){
        Random rand = new Random();
        num = rand.nextInt(900)+101;
        System.out.println("\n-= Лотоны дугаар : " + num + " =-\n");
    }

    public void start(){
        p1.start();
        p2.start();
        p3.start();
    }

    public void stop(){
        p1.stop();
        p2.stop();
        p3.stop();
    }

    public int getNum(){
        return num;
    }

    public int guess(Player p, int n){
        int eq = equals(n);
        if(eq == 1) {
            System.out.println(p.name + " яллаа! Дугаар: " + num);
            stop();
        }
        return eq;
    }

    public int equals(int n){
        if(n > num) return 2;
        if(n==num) return 1;
        return 0;
    }

    public int getP(){
        return p++;
    }

}
