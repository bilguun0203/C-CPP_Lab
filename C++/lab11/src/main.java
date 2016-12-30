import java.util.Scanner;

public class main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "";
        while (!s.equals("exit") && !s.equals("q") && !s.equals("quit")) {
            Lottery lottery = new Lottery();
            lottery.start();
            s = sc.nextLine();
        }
        System.exit(0);
    }

}
