/**
 * Created by bilguun on 12/18/16.
 */
public class PlayerType3 extends Player {

    public PlayerType3(Lottery lott, String name) {
        super(lott, name);
    }

    public void run(){
        int hi = 999;
        int lo = 100;
        while(run){
            try {
                Thread.sleep(50);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            name = "Тоглогч " + lottery.getP() + " (binary)";
//            System.out.println(name + " " + (hi+lo)/2);
            int guess = lottery.guess(this, (hi+lo)/2);
            if(guess == 2){
                hi = (hi+lo)/2;
            }
            else if(guess == 0){
                lo = (hi+lo)/2;
            }
            else if(guess == 1){
                run = false;
            }
        }
    }
}
