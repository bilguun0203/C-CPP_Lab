/**
 * Created by bilguun on 12/18/16.
 */
public class PlayerType2 extends Player {
    private int n=999;
    public PlayerType2(Lottery lott, String name) {
        super(lott, name);
    }

    public void run(){
        while(n > 99 && run) {
            try {
                Thread.sleep(1);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            name = "Тоглогч " + lottery.getP() + " (--)";
//            System.out.println(name + " " + n);
            guess(n--);
        }
    }
}
