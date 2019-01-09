#ifndef _SIMPLE_TEXTURE_RECT_H
#define _SIMPLE_TEXTURE_RECT_H

#include <Godot.hpp>
#include <String.hpp>
#include <TextureRect.hpp>

using namespace godot;

class SimpleTextureRect : public GodotScript<TextureRect>
{
    GODOT_CLASS(SimpleTextureRect);
public:
    SimpleTextureRect() { }

	void _ready();

    void _process(float delta) {
    }

    static void _register_methods() {
	    register_method("_ready", &SimpleTextureRect::_ready);
        register_method("_process", &SimpleTextureRect::_process);
    }
};

#endif
