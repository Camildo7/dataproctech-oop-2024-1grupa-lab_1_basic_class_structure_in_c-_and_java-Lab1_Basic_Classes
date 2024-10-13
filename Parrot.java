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

    public void setPhrase(String newPhrase) {
        this.phrase = newPhrase;
    }

    public static void main(String[] args) {
        Parrot p = new Parrot("Good morning!");
        p.say();
        p.setPhrase("How are you?");
        p.say();
    }
}
