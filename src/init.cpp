#include <core/Godot.hpp>
#include <Reference.hpp>
#include <core/String.hpp>
#include <core/Array.hpp>
#include <Sprite.hpp>

using namespace godot;

class TheSimple : public GodotScript<Sprite> {
    GODOT_CLASS(TheSimple);
public:
    TheSimple() { }

    void say(String message) {
        for (int i = 0; i < 100; ++i)
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
        register_method("say", &TheSimple::say);
        register_method("hello", &TheSimple::hello);
        register_method("_process", &TheSimple::_process);
    }

private:
    float time_passed = 0.f;
};

extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o)
{
    Godot::gdnative_init(o);
}

extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o)
{
    Godot::gdnative_terminate(o);
}

extern "C" void GDN_EXPORT godot_nativescript_init(void *handle)
{
    Godot::nativescript_init(handle);
    register_class<TheSimple>();
}
