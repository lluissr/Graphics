#include "Globals.h"
#include "Application.h"
#include "ModuleScene.h"
#include "ModuleTextures.h"
#include "SDL/include/SDL.h"


ModuleScene::ModuleScene()
{}

// Destructor
ModuleScene::~ModuleScene()
{}

bool ModuleScene::Start()
{
	//App->textures->Load("");
	return true;
}

update_status ModuleScene::Update() 
{

	return UPDATE_CONTINUE;
}