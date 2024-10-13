public class Parrot {
    private String phrase;

    // Constructor
    public Parrot() {
        this.phrase = "Hello!";
    }

    // Method
    public void say() {
        System.out.println(phrase);
    }

    public static void main(String[] args) {
        Parrot p = new Parrot();
        p.say();
    }
}
