#include "Cvijet.h"
#include <sstream>
#include <iostream>

using namespace std;

Cvijet::Cvijet(sf::RenderWindow* window)
{
	this->window = window;
}

auto Cvijet::get_prviKrug()
{
	return prviKrug;
}

auto Cvijet::get_dvaKruga()
{
	return dvaKruga;
}

auto Cvijet::get_linija()
{
	return linija;
}

auto Cvijet::get_leaf()
{
	return leaf;
}

auto Cvijet::get_River()
{
	return River;
}

auto Cvijet::get_Land()
{
	return Land;
}

auto Cvijet::get_SunShine01()
{
	return SunShine01;
}

auto Cvijet::get_SunShine02()
{
	return SunShine02;
}

auto Cvijet::get_SunShine03()
{
	return SunShine03;
}

auto Cvijet::get_Bee()
{
	return Bee;
}

void Cvijet::set_prviKrug(sf::CircleShape prviKrug)
{
	this->prviKrug = prviKrug;
}

void Cvijet::set_dvaKruga(sf::CircleShape dvaKruga)
{
	this->dvaKruga = dvaKruga;
}

void Cvijet::set_linija(sf::RectangleShape linija)
{
	this->linija = linija;
}

void Cvijet::set_leaf(sf::ConvexShape leaf)
{
	this->leaf = leaf;
}

void Cvijet::set_River(sf::RectangleShape River)
{
	this->River;
}

void Cvijet::set_Land(sf::RectangleShape Land)
{
	this->Land = Land;
}

void Cvijet::set_SunShine01(sf::RectangleShape SunShine01)
{
	this->SunShine01 = SunShine01;
}

void Cvijet::set_SunShine02(sf::RectangleShape SunShine02)
{
	this->SunShine02 = SunShine02;
}

void Cvijet::set_SunShine03(sf::RectangleShape SunShine03)
{
	this->SunShine03 = SunShine03;
}

void Cvijet::set_Bee(sf::RectangleShape Bee)
{
	this->Bee = Bee;
}

void Cvijet::draw()
{
	prviKrug.setRadius(40);
	prviKrug.setPosition(-15, -15);
	prviKrug.setFillColor(sf::Color::Yellow);
	window->draw(prviKrug);

	dvaKruga.setRadius(100);
	dvaKruga.setPosition(100, 100);
	dvaKruga.setFillColor(sf::Color::Magenta);
	dvaKruga.setOutlineThickness(25);
	dvaKruga.setOutlineColor(sf::Color::Yellow);
	window->draw(dvaKruga);

	linija.setSize(sf::Vector2f(25, 200));
	linija.setPosition(190, 324);
	linija.setFillColor(sf::Color::Green);
	window->draw(linija);

	leaf.setPointCount(4);
	leaf.setPoint(0, sf::Vector2f(110, 0));
	leaf.setPoint(1, sf::Vector2f(220, 30));
	leaf.setPoint(2, sf::Vector2f(110, 130));
	leaf.setPoint(3, sf::Vector2f(-110, 120));
	leaf.setPosition(300, 350);
	leaf.setFillColor(sf::Color::Green);
	window->draw(leaf);

	River.setSize(sf::Vector2f(450, 100));
	River.setPosition(350, 500);
	River.setFillColor(sf::Color::Cyan);
	window->draw(River);

	Land.setSize(sf::Vector2f(350, 100));
	Land.setPosition(0, 500);
	Land.setFillColor(sf::Color::Green);
	window->draw(Land);

	SunShine01.setSize(sf::Vector2f(50, 15));
	SunShine01.setPosition(65, 60);
	SunShine01.setRotation(45);
	SunShine01.setFillColor(sf::Color::Yellow);
	window->draw(SunShine01);

	SunShine02.setSize(sf::Vector2f(50, 15));
	SunShine02.setPosition(79, 32); // x = levo desno, y = gore dole
	SunShine02.setRotation(28);
	SunShine02.setFillColor(sf::Color::Yellow);
	window->draw(SunShine02);
	
	SunShine03.setSize(sf::Vector2f(50, 15));
	SunShine03.setPosition(35, 76); // x = levo desno, y = gore dole
	SunShine03.setRotation(67);
	SunShine03.setFillColor(sf::Color::Yellow);
	window->draw(SunShine03);

	//Zadatak02
	Bee.setSize(sf::Vector2f(10, 10));
	Bee.setPosition(500, 100);
	Bee.rotate(140);
	Bee.setFillColor(sf::Color::Yellow);
	window->draw(Bee);


	
}
