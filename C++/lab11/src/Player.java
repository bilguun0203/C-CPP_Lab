/**
 * Created by bilguun on 12/18/16.
 */
public class Player implements Runnable {

    protected Lottery lottery;
    protected Thread t;
    public String name = "Player";
    protected boolean run = true;

    public Player(Lottery lott, String name) {
        this.name = name;
        this.lottery = lott;
    }

    protected void guess(int n){
        lottery.guess(this, n);
    }

    public void start () {
        if (t == null) {
            t = new Thread(this, "");
            t.start();
        }
    }

    public void stop(){
        run = false;
    }

    @Override
    public void run() {

    }
}
