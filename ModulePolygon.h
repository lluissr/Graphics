#pragma once
#include "Module.h"
#include "Globals.h"
#include "glew-2.1.0/include/GL/glew.h"

class ModulePolygon : public Module
{
public:
	GLuint vbo;

	ModulePolygon();
	~ModulePolygon();

	bool Init();
	update_status Update();
	bool CleanUp();
};
