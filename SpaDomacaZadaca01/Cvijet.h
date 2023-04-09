#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class Cvijet
{
public:
	Cvijet(sf::RenderWindow* window);
	auto get_prviKrug();
	auto get_dvaKruga();
	auto get_linija();
	auto get_leaf();
	auto get_River();
	auto get_Land();
	auto get_SunShine01();
	auto get_SunShine02();
	auto get_SunShine03();
	auto get_Bee();
	void set_prviKrug(sf::CircleShape prviKrug);
	void set_dvaKruga(sf::CircleShape dvaKruga);
	void set_linija(sf::RectangleShape linija);
	void set_leaf(sf::ConvexShape leaf);
	void set_River(sf::RectangleShape River);
	void set_Land(sf::RectangleShape Land);
	void set_SunShine01(sf::RectangleShape SunShine01);
	void set_SunShine02(sf::RectangleShape SunShine02);
	void set_SunShine03(sf::RectangleShape SunShine03);
	void set_Bee(sf::RectangleShape Bee);
	void draw();

private:
	sf::RectangleShape River;
	sf::RectangleShape Land;
	sf::RectangleShape SunShine01;
	sf::RectangleShape SunShine02;
	sf::RectangleShape SunShine03;
	sf::RectangleShape Bee;
	sf::RenderWindow* window;
	sf::CircleShape prviKrug;
	sf::CircleShape dvaKruga;
	sf::RectangleShape linija;
	sf::ConvexShape leaf;
	};

