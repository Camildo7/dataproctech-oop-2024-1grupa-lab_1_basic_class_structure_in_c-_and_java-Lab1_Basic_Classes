# Laboratorium 1: Podstawowa Struktura Klasy w C++ i Java

## Przegląd

W tym laboratorium będziesz ćwiczyć podstawowe pojęcia programowania obiektowego (OOP) poprzez stworzenie prostych klas w językach **C++** oraz **Java**. Dzięki temu zrozumiesz podstawy definicji klas, obiektów, atrybutów oraz metod, które są kluczowymi elementami OOP.

Zaimplementujesz klasę `Car` zarówno w C++, jak i w Javie, aby poćwiczyć pisanie prostych definicji klas, konstruktorów i metod.

## Cele

Pod koniec tego laboratorium będziesz w stanie:
- Zrozumieć i zaimplementować prostą klasę z atrybutami i metodami.
- Użyć konstruktorów do inicjalizacji atrybutów klasy.
- Utworzyć obiekty z klasy.
- Wywołać metody na obiekcie i wyświetlić wartości atrybutów.
- Zapoznać się z IDE dla C++ i Java.

## Instrukcje

### Część 1: Implementacja w C++

1. **Skonfiguruj środowisko**:
   - Otwórz swoje IDE (np. Visual Studio lub dowolne środowisko C++).
   - Utwórz nowy projekt o nazwie `Lab1_CPP`.

2. **Utwórz klasę `Car`**:
   - Zdefiniuj klasę o nazwie `Car` z następującymi atrybutami:
     - `string make` (Marka samochodu, np. Toyota, Honda).
     - `string model` (Model samochodu, np. Corolla, Civic).
     - `int year` (Rok produkcji, np. 2020, 2019).

3. **Metody klasy**:
   - Utwórz konstruktor, który zainicjalizuje atrybuty klasy.
   - Napisz metodę `void displayInfo()`, aby wyświetlić szczegóły samochodu.

4. **Napisz funkcję główną (main)**:
   - W funkcji `main()` utwórz obiekt klasy `Car`.
   - Wywołaj metodę `displayInfo()`, aby wyświetlić szczegóły samochodu.

### Część 2: Implementacja w Javie

1. **Skonfiguruj środowisko**:
  - Otwórz swoje IDE dla Javy (np. IntelliJ IDEA lub Eclipse).
  - Utwórz nowy projekt o nazwie `Lab1_Java`.

2. **Utwórz klasę Car**:
  - Zdefiniuj klasę o nazwie `Car` z następującymi atrybutami:
    - `String make` (Marka samochodu, np. Toyota, Honda).
    - `String model` (Model samochodu, np. Corolla, Civic).
    - `int year` (Rok produkcji, np. 2020, 2019).

3. **Metody klasy**:
  - Utwórz konstruktor, aby zainicjalizować atrybuty klasy.
  - Napisz metodę `void displayInfo()`, aby wyświetlić szczegóły samochodu.

4. **Napisz metodę główną (main)**:
  - W metodzie `main()` utwórz obiekt klasy `Car`.
  - Wywołaj metodę `displayInfo()`, aby wyświetlić szczegóły samochodu.
    
### Część 3: Refleksja i Pytania

Po ukończeniu zadań, zastanów się nad następującymi pytaniami:
  1. Dlaczego ważne jest używanie specyfikatorów dostępu private dla atrybutów?
Odp: Uzycie private chroni atrybuty przed bezposrednim dostepem lub modyfikacja z zewnątrz klasy.
  2. Co się stanie, jeśli zmienisz specyfikator dostępu atrybutów na public? Spróbuj to zrobić i zaobserwuj zmiany.
Odp: Gdy atrybuty są public, mozna je modyfikowac bezposrednio, co lamie zasade enkapsulacji
  3. Czy możesz utworzyć wiele obiektów klasy Car? Jeśli tak, jak każdy obiekt przechowuje swoje własne atrybuty?
Odp: Tak, mozna utworzyc wiele obiektow klasy Car. Kazdy obiekt bedzie mial swoje wlasne, unikalne wartosci dla atrybutow



