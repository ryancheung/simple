#include "SimpleTextureRect.h"
#include "ImageTexture.hpp"

void SimpleTextureRect::_ready()
{
    Ref<ImageTexture> imageTexture = new ImageTexture;
    Ref<Image> dynImage = new Image;
    dynImage->create(256, 256, false, Image::FORMAT_RGBA8);
    dynImage->fill(Color(0,0,1,0.3));

    imageTexture->create_from_image(dynImage);

    owner->set_texture(imageTexture);
    owner->set_name(String("Resource name- The created texture from cpp!!"));
    Godot::print(owner->get_name());

    owner->set_position(Vector2(240,240));
}
