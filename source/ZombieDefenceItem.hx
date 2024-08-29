package;

/*Class: ZombieDefenceItem
 * Description: Represents a defence item that a zombie can carry. not exactly the sprite, but the item itself.
 */
class ZombieDefenceItem
{
	public var item:String;
	public var damageReduction:Float;
	public var durability:Int;

	public function new(item:String, damageReduction:Float, durability:Int)
	{
		this.item = item;
		this.damageReduction = damageReduction;
		this.durability = durability;
	}

	public function takeDamage(amount:Int):Void
	{
		durability -= amount;
		if (durability <= 0)
		{
			// Remove the item when durability is depleted
			trace(item + " is broken!");
		}
	}

	public function repair():Void
	{
		// Implement repair logic (e.g., restore durability)
		trace(item + " is repaired!");
	}

	public function playAnimation(animationName:String):Void
	{
		// Implement animation logic (e.g., play a repair animation)
		trace(item + " is playing animation: " + animationName);
	}
}
