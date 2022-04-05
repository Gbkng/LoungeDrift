#include "utils.hpp"

#include "SFML/Graphics.hpp"

#include <iostream>
#include <unistd.h> // for sleep() function

int main() {
  int a;

  a = 2;
  std::cout << "Hello world, a is : " << a << "\n" << std::endl;
  int b = 3;
  int c = mySum(a, b);

  // dimension of one pixel in the game
  static constexpr int x_dim = 10;
  static constexpr int y_dim = 10;
  // number of pixel to represent in window
  static constexpr int n_x = 20;
  static constexpr int n_y = 20;
  // window global dimension
  static constexpr int width = x_dim * n_x;
  static constexpr int height = y_dim * n_y;

  // window creation : giving size and title as arguments
  sf::RenderWindow window(sf::VideoMode(width, height), "LoungeDrift");

  sf::RectangleShape rectangle(sf::Vector2f(x_dim, y_dim));
  rectangle.setPosition(sf::Vector2f(0., 0.)); // top left corner
  rectangle.setFillColor(sf::Color::Cyan);

  std::cout << "drawing a rectangle and waiting for 2 seconds" << std::endl;
  window.draw(rectangle);
  window.display();
  sleep(2);
  std::cout << "end of program." << std::endl;

  return 0;
}
