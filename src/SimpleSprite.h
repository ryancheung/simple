#ifndef _SIMPLE_SPRITE_H
#define _SIMPLE_SPRITE_H

#include <Godot.hpp>
#include <String.hpp>
#include <Array.hpp>
#include <Sprite.hpp>

using namespace godot;

class SimpleSprite : public GodotScript<Sprite>
{
    GODOT_CLASS(SimpleSprite);
public:
    SimpleSprite() { }

    void say(String message) {
        Godot::print(message);
    }

    String hello(String target) {
        return String("Hello, {0}!").format(Array::make(target));
    }

    void _process(float delta) {
        time_passed += delta;

        Vector2 new_position = Vector2(10.0 + (10.0 * sin(time_passed * 2.0)), 50.0 + (10.0 * cos(time_passed * 1.5)));

        owner->set_position(new_position);
    }

    static void _register_methods() {
        register_method("say", &SimpleSprite::say);
        register_method("hello", &SimpleSprite::hello);
        register_method("_process", &SimpleSprite::_process);
    }

private:
    float time_passed = 0.f;
};

#endif
