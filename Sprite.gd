extends Sprite

# class member variables go here, for example:
# var a = 2
# var b = "textvar"
var simple_sprite = preload("res://simple_sprite.gdns").new()

func _ready():
	# Called when the node is added to the scene for the first time.
	# Initialization here
	simple_sprite.say("hello")
	pass

func _process(delta):
	# Called every frame. Delta is time since last frame.
	# Update game logic here.

	simple_sprite._process(delta)