#pragma once
#include "Astro.h"
#include "ofMain.h"
#include "Attack.h"
#include "Bars.h"
class Blocks
{
public:
	int y = ofRandom(-65, -100);
	int x = ofRandom(0, ofGetWidth());
	int dx;
	int dy;

	int width = 20;
	int height = 20;

	int widthb = 50;
	int heightb = 50;


};

class LittleBlocks : public Blocks {
public:
	void follow(Astro loc);
	void move();
	void reset();
	void create();
	void collide(Astro& loc, ofSoundPlayer pain);
	void collideA(Attack attack, ofSoundPlayer blop, Astro& a);

};

class BigBlocks : public Blocks {
public:
	void move();
	void reset();
	void create();
	void collide(Astro& loc, ofSoundPlayer pain);
	void collideA(Attack loc, ofSoundPlayer exp, Astro& a);
};