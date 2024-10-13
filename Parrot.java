import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Parrot {
    private List<String> phrases;
    private Random random;

    // Constructor
    public Parrot(String initPhrase) {
        phrases = new ArrayList<>();
        phrases.add(initPhrase);
        random = new Random();
    }

    // Adding new phrase
    public void addPhrase(String newPhrase) {
        phrases.add(newPhrase);
    }

    // Say random phrase
    public void say() {
        if (!phrases.isEmpty()) {
            int randomIndex = random.nextInt(phrases.size());
            System.out.println(phrases.get(randomIndex));
        }
    }

    public static void main(String[] args) {
        Parrot p = new Parrot("Hello!");
        p.addPhrase("Good morning!");
        p.addPhrase("How are you?");

        p.say();
    }
}
