#include <SFML/Graphics.hpp>
#include <iostream>

class Hello {
 public:
  int potenznyinteger = 10;

 private:
  std::string justFuckingTryToAccess = "Hello";

 public:
  std::string hello;

 protected:
  std::string lol = "Gi";
};

int main() {
  Hello hello = Hello();
  std::cout << hello.potenznyinteger;

  sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
  sf::CircleShape shape(50.f);
  shape.setFillColor(sf::Color::Green);

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) window.close();
    }

    window.clear();
    window.draw(shape);
    window.display();
  }

  return 0;
}
