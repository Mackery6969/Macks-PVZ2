package;

class Plant extends FlxSprite
{
	public var name:String;
	public var hp:Int;
	public var firingSpeed:Float;
	public var damage:Int;
	public var cooldown:Float = 0;
	public var cost:Int;

	public function new(x:Float, y:Float, name:String, hp:Int, firingSpeed:Float, damage:Int, cost:Int, graphic:FlxGraphic)
	{
		super(x, y);
		this.name = name;
		this.hp = hp;
		this.firingSpeed = firingSpeed;
		this.damage = damage;
		this.cost = cost;

		loadGraphic(graphic);
	}

	public function takeDamage(amount:Int):Void
	{
		hp -= amount;
		if (hp <= 0)
		{
			kill(); // Remove the plant when HP is depleted
		}
	}

	public function fire():Void
	{
		// Implement firing logic (e.g., spawn a projectile)
		trace(name + " is firing!");
	}

	public function playAnimation(animationName:String):Void
	{
		animation.play(animationName);
	}
}
