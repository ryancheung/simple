extends Label

# class member variables go here, for example:
# var a = 2
# var b = "textvar"

func _ready():
	# Called when the node is added to the scene for the first time.
	# Initialization here
	var simple = load("res://simple.gdns").new()
	var msg = simple.hello("Godot World")
	simple.say(msg)
	self.text = msg

#func _process(delta):
#	# Called every frame. Delta is time since last frame.
#	# Update game logic here.
#	pass
