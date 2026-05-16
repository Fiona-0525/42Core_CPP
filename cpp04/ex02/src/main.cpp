#include "../inc/animal.hpp"
#include "../inc/cat.hpp"
#include "../inc/dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
    // const int arraySize = 4;
    // Animal* animals[arraySize];
    
    // for (int i = 0; i < arraySize / 2; i++)
    // {
    //     std::cout << "\n-------Creating Dog " << i + 1 << "-------" << std::endl;
    //     animals[i] = new Dog();
    // }
    
    // for (int i = arraySize / 2; i < arraySize; i++)
    // {
    //     std::cout << "\n-------Creating Cat " << i - arraySize / 2 + 1 << "-------" << std::endl;
    //     animals[i] = new Cat();
    // }
 
    // for (int i = 0; i < arraySize; i++) {
    //     std::cout << "\n-------Animal " << i + 1 << " deleted-------" << std::endl;
    //     delete animals[i];
    // }
    
    std::cout << "\n-------Testing makeSound-------" << std::endl;
    // Animal* animal = new Animal();  // ❌ ERROR: Cannot instantiate abstract class!
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    dog->makeSound();
    cat->makeSound();
    std::cout << "\n-------Testing WrongAnimal-------" << std::endl;
    WrongAnimal* wronganimal = new WrongAnimal();
    WrongAnimal* wrongcat = new WrongCat();
    wronganimal->makeSound();
    wrongcat->makeSound();
    std::cout << "\n-------Testing Destruction-------" << std::endl;
    delete dog;
    delete cat;
    delete wronganimal;
    delete wrongcat;
    std::cout << "\nCreating Dog dog1..." << std::endl;
    Dog dog1;
    std::cout << "\nCreating Dog dog2 = dog1 (deep copy)..." << std::endl;
    Dog dog2 = dog1;
    
    std::cout << "\nCreating Cat cat1..." << std::endl;
    Cat cat1;
    std::cout << "\nCreating Cat cat2 = cat1 (deep copy)..." << std::endl;
    Cat cat2 = cat1;

    // std::cout << "\n========== Testing WrongCat  ==========" << std::endl;
    // const WrongAnimal* wrongcat = new WrongCat();
    // wrongcat->makeSound(); // This will output WrongAnimal's sound instead of WrongCat's sound!

    // std::cout << "\n-----Testing destruction WrongCat-----" << std::endl;
    // delete wrongcat;

    std::cout << "\n==Stack Objects Destroyed Automatically===" << std::endl;

    return 0;
}
