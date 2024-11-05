#pragma once

#include <vector>
#include <Windows.h>
#include "Component.h"
#include "../CORE/Vector2.h"
#include "../Game.h"
#include "../Graphics/Screen.h" // Game includes screen... slgihtly redudant

// We can store all created instances to update every cycle
namespace CLGEngine {

class Renderer : public Component {
private:
	Screen* _screen;
public:
	Block block;
	CHAR_INFO material;

	Renderer(CLGEngine::Entity* ent);
	Renderer(CLGEngine::Entity* ent, CHAR_INFO& material);
	~Renderer();
};
}
