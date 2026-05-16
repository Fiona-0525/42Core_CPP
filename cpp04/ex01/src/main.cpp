#include "../inc/animal.hpp"
#include "../inc/cat.hpp"
#include "../inc/dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
//     // const int arraySize = 4;
//     // Animal* animals[arraySize];
    
//     // for (int i = 0; i < arraySize / 2; i++)
//     // {
//     //     std::cout << "\n-------Creating Dog " << i + 1 << "-------" << std::endl;
//     //     animals[i] = new Dog();
//     // }
    
//     // for (int i = arraySize / 2; i < arraySize; i++)
//     // {
//     //     std::cout << "\n-------Creating Cat " << i - arraySize / 2 + 1 << "-------" << std::endl;
//     //     animals[i] = new Cat();
//     // }
 
//     // for (int i = 0; i < arraySize; i++) {
//     //     std::cout << "\n-------Animal " << i + 1 << " deleted-------" << std::endl;
//     //     delete animals[i];
//     // }
    
    std::cout << "\n-------Testing Dog and Cat-------" << std::endl;
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    std::cout << "\n-------Testing makeSound-------" << std::endl;
    dog->makeSound();
    cat->makeSound();
    
    // std::cout << "\n------Testing Brain------" << std::endl;
    // Brain brain_dog("dog'barin");
    // Brain brain_cat("cat's brain");
    // Brain* new_brain_dog = new Brain("new dog's brain");
    // Brain* new_brain_cat = new Brain("new cat's brain");
    // delete new_brain_dog;
    // delete new_brain_cat;
    
    std::cout << "\n--- Testing Deep Copies ---" << std::endl;
    Dog dog1;
    Dog tmp = dog1;
    Cat cat1;
    Cat cat_tmp = cat1;
    std::cout << "\n----Testing assignment----" << std::endl;
    Dog dog2;
    dog2 = dog1;
    std::cout << "\n----Testing makeSound after Deep Copy----" << std::endl;
    tmp.makeSound();
    cat_tmp.makeSound();
    
    std::cout << "\n-------Testing WrongCat-------" << std::endl;
    const WrongAnimal* wrongcat = new WrongCat();
    wrongcat->makeSound(); // This will output WrongAnimal's sound instead of WrongCat's sound!
    
    std::cout << "\n======Testing WrongAnimal Destruction========" << std::endl;
    delete wrongcat;
    delete dog;
    delete cat;

    std::cout << "\n====Stack Objects Destroyed Automatically====" << std::endl;
    return 0;
}

