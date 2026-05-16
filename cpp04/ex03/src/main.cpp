#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n---Deep Copy Test(Character)---" << std::endl;
	Character* me_real = new Character("me_real");
	me_real->equip(new Ice());
	Character* me_copy = new Character(*me_real);

	std::cout << "Original 'me' uses slot 0 " << std::endl;
	me->use(0, *bob);
	std::cout << "Copy uses slot 0 (should be the same): " << std::endl;
	me_copy->use(0, *bob);
	std::cout << "Deleteing original 'me'..." << std::endl;
	delete me;

	std::cout << "Copy uses slot 0 after original deleted: " << std::endl;
	me_copy->use(0, *bob);

	std::cout << "\n---full inventory && inventory overflow test---" << std::endl;
	for(int i = 0; i < 5; i++) {
		std::cout << "Equipping item " << i << ": " << std::endl;
		tmp = src->createMateria("ice");
		me_copy->equip(tmp);
		if (i >= 3)
			delete tmp;
	}
	std:: cout << "Using invalid index 10: " << std::endl;
	me_copy->use(10, *bob);

	std::cout << "Creating unknown Materia 'fire': " << std::endl;
	tmp = src->createMateria("fire");
	if (tmp == nullptr) 
		std::cout << "Successfully returned nullptr for unknown type 'fire'." << std::endl;
	
	delete bob;
	delete me_real;
	delete me_copy;
	delete src;
	return 0;
}
