#pragma once

#include "SFML/Graphics.hpp"

class GameDisplay {
  // dimension of one pixel in the game
  static constexpr int x_dim = 10;
  static constexpr int y_dim = 10;
  // number of pixel to draw
  static constexpr int n_x = 20;
  static constexpr int n_y = 20;
  // window dimension
  static constexpr int width = x_dim * n_x;
  static constexpr int height = y_dim * n_y;

public:
  GameDisplay() : window_(sf::VideoMode(width, height), "LoungeDrift") {

    // VSync, not to burn the CPU only for a small game ...
    window_.setVerticalSyncEnabled(true);
    window_.setFramerateLimit(60);
  }
  const sf::RenderWindow &getWindow() const { return window_; }
  void display() {
    clear_();
    window_.display();
  }

  void setBackgroundColor(sf::Color color) { backgroundColor_ = color; }
  void closeWindow() { window_.close(); }
  bool pollEvent(sf::Event &event) { return window_.pollEvent(event); }
  void drawGamePixel(sf::Vector2f position, sf::Color color = sf::Color::Cyan) {
    gamePixel_.setPosition(position);
    gamePixel_.setFillColor(color);
    window_.draw(gamePixel_);
  }

private:
  sf::RenderWindow window_;
  sf::Color backgroundColor_=sf::Color::Black;
  sf::RectangleShape gamePixel_;

  void clear_() { window_.clear(backgroundColor_); }
};