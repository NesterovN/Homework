#include <SFML/Graphics.hpp>
#include <iostream>
#include <Windows.h>
using namespace sf;
using namespace std;

const int n = 4;
const int Slotnumber[n] = { 100,16,16,1 };


class Neuronet {
private:
	struct neuron0 {
		double input = 0;
		double* weight = new double[Slotnumber[1]];
	};
	struct neuron1 {
		double out = 0, input = 0, err = 0, b = 9;
		double* weight = new double[Slotnumber[2]];
	};
	struct neuron2 {
		double out = 0, input = 0, err = 0, b = 2;
		double* weight = new double[Slotnumber[3]];
	};
	struct neuron3 {
		double out = 0, input = 0, err = 0, b = 0;
	};

	double f(double x) {
		return 1 / (1 + exp(-x));
	}
    double f1(double x) {
		return (1 - f(x))*f(x);
	}

public:
	neuron0* Slot0 = new neuron0[Slotnumber[0]];
	neuron3* Slot3 = new neuron3[Slotnumber[3]];
	neuron1* Slot1 = new neuron1[Slotnumber[1]];
	neuron2* Slot2 = new neuron2[Slotnumber[2]];
	Neuronet() {
		for (int i = 0; i < Slotnumber[0]; i++) for (int i1 = 0; i1 < Slotnumber[1]; i1++) Slot0[i].weight[i1] = (2*rand()%2-1) *rand()%10000/10000.0;
		for (int i = 0; i < Slotnumber[1]; i++) for (int i1 = 0; i1 < Slotnumber[2]; i1++) Slot1[i].weight[i1] = (2 * rand() % 2 - 1)*rand() % 10000 / 10000.0;
		for (int i = 0; i < Slotnumber[2]; i++) for (int i1 = 0; i1 < Slotnumber[3]; i1++) Slot2[i].weight[i1] = (2 * rand() % 2 - 1)*rand() % 10000 / 10000.0;
	}

	int answer() {
		int max = 0;
		for (int i = 0; i < Slotnumber[1]; i++) {
			for (int i1 = 0; i1 < Slotnumber[0]; i1++)
				Slot1[i].input += Slot0[i1].input * Slot0[i1].weight[i];
			Slot1[i].input += Slot1[i].b;
			Slot1[i].out = f(Slot1[i].input);
		}
		for (int i = 0; i < Slotnumber[2]; i++) {
			for (int i1 = 0; i1 < Slotnumber[1]; i1++) 
				Slot2[i].input += Slot1[i1].out * Slot1[i1].weight[i];
			Slot2[i].input += Slot2[i].b;
			Slot2[i].out = f(Slot2[i].input);
		}
		for (int i = 0; i < Slotnumber[3]; i++) {
			for (int i1 = 0; i1 < Slotnumber[2]; i1++) 
				Slot3[i].input += Slot2[i1].out * Slot2[i1].weight[i];
			Slot3[i].input += Slot3[i].b;
			Slot3[i].out = f(Slot3[i].input);
			if (Slot3[i].out >= 0.5) max = 1;
		}
		return max;


	}
	void learn(bool outrue)
	{
		Slot3[0].err = (Slot3[0].out - outrue) * f1(Slot3[0].input);
		double LearningSpeedWeight = 1;
		double LearningSpeedb = 1;

		for (int i = 0; i < Slotnumber[2]; i++) {
			for (int i1 = 0; i1 < Slotnumber[3]; i1++) {
				Slot2[i].err += Slot3[i1].err * Slot2[i].weight[i1];
				Slot2[i].weight[i1] -= Slot3[i1].err * Slot2[i].input * LearningSpeedWeight;
			}
			Slot2[i].err *= f1(Slot2[i].input);
		}

		for (int i = 0; i < Slotnumber[1]; i++) {
			for (int i1 = 0; i1 < Slotnumber[2]; i1++) {
				Slot1[i].err += Slot2[i1].err * Slot1[i].weight[i1];
				Slot1[i].weight[i1] -= Slot2[i1].err * Slot1[i].input * LearningSpeedWeight;
			}
			Slot1[i].err *= f1(Slot1[i].input);
		}

		for (int i = 0; i < Slotnumber[0]; i++) {
			for (int i1 = 0; i1 < Slotnumber[1]; i1++) {
				Slot0[i].weight[i1] -= Slot1[i1].err * Slot0[i].input * LearningSpeedWeight;
				}
		}

		for (int i = 0; i < Slotnumber[1]; i++) {
			Slot1[i].out = 0;
			Slot1[i].input = 0;
			Slot1[i].b -= Slot1[i].err * LearningSpeedb;
			Slot1[i].err = 0;
		}
		for (int i = 0; i < Slotnumber[2]; i++) {
			Slot2[i].out = 0;
			Slot2[i].input = 0;
			Slot2[i].b -= Slot2[i].err * LearningSpeedb;
			Slot2[i].err = 0;
		}
		for (int i = 0; i < Slotnumber[3]; i++) {
			Slot3[i].out = 0;
			Slot3[i].input = 0;
			Slot3[i].b -= Slot3[i].err * LearningSpeedb;
		}


	};
};


int main()
{
	RenderWindow window(VideoMode(400, 400), "Game");
	
	Neuronet A;

	Texture Black;
	Black.loadFromFile("black.png");
	Sprite black;
	black.setTexture(Black);
	Vector2i pixelPos;//забираем коорд курсора
	Vector2f pos;//переводим их в игровые (уходим от коорд окна)
	window.clear(Color::White);
	int true1;
	bool Bool = 0;
	setlocale(LC_ALL, "Russian");
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed) window.close();

		}
		

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			
			cout <<"Я считаю, что это цифра " <<A.answer() << endl << "Правильеый ответ: ";
			cin >> true1;
			cout << endl << endl;
			Bool = true;

			if (true1 == 0) A.learn(0);
			if (true1 == 1) A.learn(1);

			


			for (int i = 0; i < 10; i++) {
				for (int i1 = 1; i1 < 11; i1++) {
					A.Slot0[i * 10 + i1 - 1].input = 0;
				}
			}
		}
		
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				Bool = false;
			pixelPos = Mouse::getPosition(window);
			pos = window.mapPixelToCoords(pixelPos);
			black.setPosition(trunc(pos.x/40)*40, trunc(pos.y/40)*40);
			int p = -1;
			if (trunc(pos.y / 20) > 0 && pos.x < 400 && pos.x > 0 && pos.y > 0 && pos.y < 400) {
				p = trunc(pos.x / 40) + (trunc(pos.y / 40)) * 10;

			}
			else if (pos.x < 400 && pos.x > 0 && pos.y > 0 && pos.y < 400) p = trunc(pos.x / 40);
			if (p !=-1)A.Slot0[p].input = 1;
			p = -1;
			window.draw(black);
		}
		if (Bool) window.clear(Color::White);
		window.display();
	}
	return 0;
}