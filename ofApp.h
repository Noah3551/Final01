#pragma once

#include "ofMain.h"
#include "Astro.h"
#include "Attack.h"
#include "Blocks.h"
#include "Bars.h"
#include <fstream>;
#include <string>;
#include <vector>

class ofApp :public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	void keyPressed(int key);

	int level = 1;
	Astro astro;
	Blocks block;
	BigBlocks bblock;
	Attack attack;
	Bars bars;
	vector<LittleBlocks*> blocks;
	vector<BigBlocks*> bblocks;

private:
	ofSerial serial;
	ofImage astronaut;
	ofSoundPlayer space;
	ofSoundPlayer gun;
	ofSoundPlayer exp;
	ofSoundPlayer pain;
	ofSoundPlayer blop;
	ofImage gg;

};