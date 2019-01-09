#include <Godot.hpp>

#include "SimpleSprite.h"
#include "SimpleTextureRect.h"

using namespace godot;

extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *options) {
	Godot::gdnative_init(options);
}

extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *options) {
	Godot::gdnative_terminate(options);
}

extern "C" void GDN_EXPORT godot_nativescript_init(void *handle) {

	Godot::nativescript_init(handle);

	register_class<SimpleSprite>();
	register_class<SimpleTextureRect>();
}
