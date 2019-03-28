#include "Player.hpp"

Player::Player() : maxWater(10), maxBag(10){
	water = 0;
	posX = 0;
	posY = 0;
	money = 0;
}

Player::Player(int posX, int posY, int water, int maxWater, int maxBag) : maxWater(maxWater), maxBag(maxBag) {
	this->water = water;
	this->posX = posX;
	this->posY = posY;
	money = 0;
}

void Player::setWater(int w) {
	water = w;
}

int Player::getWater() const {
	return water;
}

Product* Player::getProduct(int i) const {
	return bag.get(i);
}

int Player::getMaxWater() const {
	return maxWater;
}

int Player::getMaxBag() const {
	return maxBag;
}

int Player::getPosX() const {
	return posX;
}

int Player::getPosY() const {
	return posY;
}

void Player::setPosX(int x) {
	posX = x;
}

void Player::setPosY(int y) {
	posY = y;
}

int Player::getMoney() const {
	return money;
}

void Player::setMoney(int m) {
	money = m;
}

LinkedList<Product*> Player::getBag() const {
	return bag;
}

void Player::addMoney(int m) {
	setMoney(getMoney() + m);
}

void Player::addBag(Product* p){
	bag.add(p);
}

void Player::delBag(Product* p){
	bag.remove(p);
}
