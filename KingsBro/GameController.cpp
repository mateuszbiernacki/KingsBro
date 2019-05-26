#include "GameController.h"



GameController::GameController()
{
	this->p1.color = sf::Color::Blue;
	this->p2.color = sf::Color::Red;
	
	int tab0[]{ 1, 2, 16 };
	map[0] = Capital(825, 206, 100, tab0, 3, p2.color );
	int tab1[]{ 0, 2, 3, 16, 17 };
	map[1] = City(795, 143, 200, tab1, 5, p2.color);
	int tab2[]{ 0, 1, 3, 4, 5 };
	map[2] = Castle(920, 174, 1000, tab2, 5, p1.color);
	int tab3[]{ 1, 2, 5 };
	map[3] = Castle(900, 118, 800, tab3, 3, p1.color);
	int tab4[]{ 2, 5, 6, 7 };
	map[4] = City(1038, 220, 400, tab4, 4, p1.color);
	int tab5[]{ 2, 3, 4, 7, 8 };
	map[5] = City(1045, 113, 400, tab5, 5, p1.color);
	int tab6[]{ 4, 7, 10, 9 };
	map[6] = Castle(1177, 262, 400, tab6, 4, p1.color);
	int tab7[]{ 4, 5, 6, 8, 10, 11 };
	map[7] = City(1159, 179, 400, tab7, 6, p1.color);
	int tab8[]{ 5, 7, 11, 12 };
	map[8] = Castle(1182, 107, 400, tab8, 4, p1.color);
	int tab9[]{ 6, 10, 13 };
	map[9] = City(1267, 317, 400, tab9, 3, p1.color);
	int tab10[]{ 6, 7, 9, 11, 13, 14, 15 };
	map[10] = City(1282, 240, 400, tab10, 7, p1.color);
	int tab11[]{ 7, 8, 10, 12, 15 };
	map[11] = City(1263, 170, 400, tab11, 5, p1.color);
	int tab12[]{ 8, 11, 15 };
	map[12] = City(1293, 116, 400, tab12, 3, p1.color);
	int tab13[]{ 9, 10, 14 };
	map[13] = Wilderness(1410, 404, 400, tab13, 3, p1.color);
	int tab14[]{ 10, 13, 15 };
	map[14] = Wilderness(1434, 267, 400, tab14, 3, p1.color);
	int tab15[]{ 10, 11, 12, 14 };
	map[15] = City(1398, 180, 400, tab15, 4, p1.color);
	int tab16[]{ 0, 1, 17, 18 };
	map[16] = Castle(605, 263, 100, tab16, 4, p2.color);
	int tab17[]{ 1, 16, 18 };
	map[17] = Castle(672, 113, 100, tab17, 3, p2.color);
	int tab18[]{ 16, 17, 19, 20, 21 };
	map[18] = City(425, 112, 1500, tab18, 5, p2.color);
	int tab19[]{ 18, 20, 22 };
	map[19] = City(389, 373, 400, tab19, 3, p2.color);
	int tab20[]{ 18, 19, 21, 22, 23, 24 };
	map[20] = Castle(346, 278, 400, tab20, 6, p2.color);
	int tab21[]{ 18, 20, 24 };
	map[21] = City(270, 127, 400, tab21, 3, p2.color);
	int tab22[]{ 19, 20, 23, 25, 26 };
	map[22] = GreatHarbor(292, 407, 400, tab22, 5, p2.color);
	int tab23[]{ 20, 22, 24, 26, 28 };
	map[23] = Castle(209, 293, 400, tab23, 5, p2.color);
	int tab24[]{ 20, 21, 23, 28 };
	map[24] = City(140, 196, 400, tab24, 4, p2.color);
	int tab25[]{ 22, 26, 27 };
	map[25] = City(278, 504, 400, tab25, 3, p2.color);
	int tab26[]{ 22, 23, 25, 27, 28 };
	map[26] = Wilderness(97, 414, 400, tab26, 5, p2.color);
	int tab27[]{ 25, 26 };
	map[27] = Wilderness(162, 570, 400, tab27, 2, p2.color);
	int tab28[]{ 23, 24, 26 };
	map[28] = City(95, 303, 400, tab28, 3, p2.color);


	


}


GameController::~GameController()
{
}

void GameController::draw(sf::RenderWindow &window) {
	sf::Text text;
	sf::Font font;
	if (!font.loadFromFile("arial.ttf")) {
		
	}
	for (int i = 0; i < 29; i++) {
		window.draw(map[i].getRect());

		int a = map[i].getForce();
		
		
		auto str = std::to_string(a);

		text.setString(str);
		text.setFont(font);
		text.setCharacterSize(15);
		text.setFillColor(sf::Color::Black);
		text.setPosition(map[i].getRect().getPosition());
		window.draw(text);
	}

	auto strArmy = std::to_string(this->army);
	sf::Text sArmy;

	sArmy.setString(strArmy);
	sArmy.setFont(font);
	sArmy.setCharacterSize(30);
	sArmy.setFillColor(sf::Color::Green);
	sArmy.setPosition(1291, 670);
	window.draw(sArmy);

	sf::RectangleShape arrL;
	arrL.setSize(sf::Vector2f(51, 31));
	arrL.setPosition(1220, 674);
	sf::Texture arrLPict;
	if (!arrLPict.loadFromFile("ArrowL.png")) {
		std::cout << "error: arrowL not found\n";
	}
	arrL.setTexture(&arrLPict);
	window.draw(arrL);


	sf::RectangleShape arrR;
	arrR.setSize(sf::Vector2f(51, 31));
	arrR.setPosition(1380, 674);
	sf::Texture arrRPict;
	if (!arrRPict.loadFromFile("ArrowR.png")) {
		std::cout << "error: arrowR not found\n";
	}
	arrR.setTexture(&arrRPict);
	window.draw(arrR);

	
	if ((sf::Mouse::isButtonPressed(sf::Mouse::Left) || (sf::Keyboard::isKeyPressed(sf::Keyboard::A))) &&
		sf::Mouse::getPosition(window).x > arrL.getPosition().x &&
		sf::Mouse::getPosition(window).x < arrL.getPosition().x + arrL.getSize().x &&
		sf::Mouse::getPosition(window).y > arrL.getPosition().y &&
		sf::Mouse::getPosition(window).y < arrL.getPosition().y + arrL.getSize().y) {
		if (army > 100) {
			this->army -= 100;
		}
		window.draw(sArmy);
	}

	if ((sf::Mouse::isButtonPressed(sf::Mouse::Left) || (sf::Keyboard::isKeyPressed(sf::Keyboard::D))) &&
		sf::Mouse::getPosition(window).x > arrR.getPosition().x &&
		sf::Mouse::getPosition(window).x < arrR.getPosition().x + arrR.getSize().x &&
		sf::Mouse::getPosition(window).y > arrR.getPosition().y &&
		sf::Mouse::getPosition(window).y < arrR.getPosition().y + arrR.getSize().y) {
		if (army < 10000) {
			this->army += 100;
		}
		window.draw(sArmy);
	}
	
	



	}

void GameController::play(sf::RenderWindow & window) {


	if (this->from == -1 && this->to == -1) {


		int buff = this->select(window);
		if (buff != -1) {
			if (this->map[buff].getRect().getOutlineColor() == this->tour) {
				this->from = buff;
				std::cout << "from: " << this->from << std::endl;
			}
		}

		if (this->from != -1) {
			for (int j = 0; j < 29; j++) {
				if (map[this->from].getAttackable()[j]) {
					map[j].select(2);
				}
				else {
					map[j].deselect();
				}
				map[this->from].select(3);

			}

		}

	}
	if (this->from != -1 && this->to == -1) {
		
		

		while (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			int buff = this->select(window);
			if (buff >= 0) {
				for (int i = 0; i < 29; i++) {
					if (map[this->from].getAttackable()[i] && buff == i) {
						this->to = buff;
					}
				}
			}
		}


		if (this->to != -1 && this->from != -1) {
			std::cout << "to: " << this->to << '\n';


			if (this->map[this->from].getRect().getOutlineColor() != this->map[this->to].getRect().getOutlineColor()) {
				this->attack(this->map[this->from].getRect().getOutlineColor());
			}
			else {
				this->move();
			}


			this->clear();
			this->from = this->to = -1;

			if (++tourCount == 5) {
				if (tour == sf::Color::Blue) tour = sf::Color::Red;
				else if (tour == sf::Color::Red) tour = sf::Color::Blue;
				tourCount = 0;

				for (int i = 0; i < 29; i++) {
					this->map[i].setForce(this->map[i].getForce() + this->map[i].getPolulace());
				}

			}


			

		}
	}




}

int GameController::select(sf::RenderWindow & window)
{
	sf::Vector2i position;
	position = sf::Mouse::getPosition(window);
	while (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		for (int i = 0; i < 29; i++) {
			if ((sf::Mouse::isButtonPressed(sf::Mouse::Left)) &&
				(position.x >= map[i].getRect().getPosition().x && position.x <= (map[i].getRect().getPosition().x + 50)) &&
				(position.y >= map[i].getRect().getPosition().y && position.y <= (map[i].getRect().getPosition().y + 20))) {
				return i;
			}
		}
	}
	return -1;
}

void GameController::clear()
{
	for (int i = 0; i < 29; i++) {
		map[i].deselect();
	}
}

void GameController::attack(sf::Color attackColor)
{
	int att;
	int deff = this->map[this->to].getForce();
	int deffPow = deff * 100;
	int attPow;
	if (this->army < this->map[this->from].getForce()) {
		att = this->army;
		attPow = att * (100 - this->map[this->to].getPOD());
		this->map[this->from].setForce(this->map[this->from].getForce() - att);
	}
	else {
		att = this->map[this->from].getForce();
		attPow = att * (100 - this->map[this->to].getPOD());
		this->map[this->from].setForce(0);
	}

	if (attPow > deffPow) {
		this->map[this->to].setColor(attackColor);
		this->map[this->to].setForce((attPow - deffPow) / 100);
	}
	else {
		this->map[this->to].setForce((deffPow - attPow)/100);
	}


}

void GameController::move()
{
	if (this->army < this->map[this->from].getForce()) {
		this->map[this->from].setForce(this->map[this->from].getForce() - this->army);
		this->map[this->to].setForce(this->map[this->to].getForce() + army);
	}
	else {
		this->map[this->to].setForce(this->map[this->to].getForce() + this->map[this->from].getForce());
		this->map[this->from].setForce(0);
	}
}

