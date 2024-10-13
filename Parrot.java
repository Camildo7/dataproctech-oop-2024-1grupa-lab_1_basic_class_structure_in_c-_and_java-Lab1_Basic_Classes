public class Parrot {
    private String phrase;

    // Constructor
    public Parrot(String initPhrase) {
        this.phrase = initPhrase;
    }

    // Method
    public void say() {
        System.out.println(phrase);
    }

    public static void main(String[] args) {
        Parrot p = new Parrot("Good morning!");
        p.say();
    }
}
