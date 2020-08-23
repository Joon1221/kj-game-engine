#pragma once

#include "stdafx.h"
#include "component.h"

//using namespace std;

class Renderable : public Component {
public:
	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------
	// Member Variables
	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------

	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------
	// Member Functions
	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------
	//-------------------------------------------------------------------------
	Renderable();
	virtual ~Renderable();

	virtual bool Init();
	virtual bool loadFile(string filePath);
	virtual void Render();
};

