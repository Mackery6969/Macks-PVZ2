package;

import Zombie;
import ZombieDefenceItems;

// browncoat zombie is a basic zombie that is the base for all other zombies
class Browncoat extends Zombie
{
	public function new(x:Float, y:Float)
	{
		super(x, y, "Browncoat", 100, 1.0, 5, 1.7, null, false, FlxG.bitmap.add(Util.image('Browncoat')));
	}

	override public function eat():Void
	{
		super.eat();
		// playAnimation("attack");
		// Attack logic
	}
}
/*
	// conehead zombie is a zombie that has a cone on its head, giving it more durability, otherwise it is the same as a browncoat
	class Conehead extends Zombie
	{
	public function new(x:Float, y:Float)
	{
		super(x, y, "Conehead", 200, 0.8, 10, 1.5, new ZombieDefenceItems.Cone(), false, FlxG.bitmap.add(Util.image('Conehead')));
	}

	override public function attack():Void
	{
		super.attack();
		// playAnimation("attack");
		// Attack logic
	}
	}

	// buckethead zombie is a zombie that has a bucket on its head, giving it even more durability, otherwise it is the same as a browncoat
	class Buckethead extends Zombie
	{
	public function new(x:Float, y:Float)
	{
		super(x, y, "Buckethead", 300, 0.6, 15, 1.3, new ZombieDefenceItems.Bucket(), false, FlxG.bitmap.add(Util.image('Buckethead')));
	}

	override public function attack():Void
	{
		super.attack();
		// playAnimation("attack");
		// Attack logic
	}
	}
 */
