extends Node2D

var simple_texture_rect = preload("res://simple_texture_rect.gdns").new()

func _ready():
	add_child(simple_texture_rect)
#	var imageTexture = ImageTexture.new()
#	var dynImage = Image.new()
#
#	dynImage.create(256,256,false,Image.FORMAT_RGBA8)
#	dynImage.fill(Color(0,0,1,0.3))
#
#	imageTexture.create_from_image(dynImage)
#	self.texture = imageTexture
#	imageTexture.resource_name = "The created texture!"
#	print(self.texture.resource_name)


#func _process(delta):
#	# Called every frame. Delta is time since last frame.
#	# Update game logic here.
#	pass
