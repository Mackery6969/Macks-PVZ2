package;

import Plant;

class Peashooter extends Plant
{
	public function new(x:Float, y:Float)
	{
		super(x, y, "Peashooter", 100, 1.5, 20, 100, FlxG.bitmap.add(Util.image('Peashooter')));

		// Add animations
		// animation.add("idle", [0, 1, 2, 3], 10, true);
		// animation.add("fire", [4, 5, 6, 7], 15, false);
	}

	override public function fire():Void
	{
		super.fire();
		// playAnimation("fire");
		// Fire projectile logic
	}
}
