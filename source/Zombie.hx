package;

import ZombieDefenceItem;

class Zombie extends FlxSprite
{
	public var name:String;
	public var hp:Int;
	public var speed:Float;
	public var damage:Int;
	public var eatingSpeed:Float;
	public var defence:ZombieDefenceItem;
	public var isFlying:Bool = false;

	public var hasDefence:Bool = false;
	public var isEating:Bool = false;

	public function new(x:Float, y:Float, name:String, hp:Int, speed:Float, damage:Int, eatingSpeed:Float, defence:ZombieDefenceItem, isFlying:Bool,
			graphic:FlxGraphic)
	{
		super(x, y);
		this.name = name;
		this.hp = hp;
		this.speed = speed;
		this.damage = damage;
		this.eatingSpeed = eatingSpeed;
		this.defence = defence;
		this.isFlying = isFlying;

		hasDefence = defence != null;

		loadGraphic(graphic);
	}

	public function takeDamage(amount:Int):Void
	{
		if (hasDefence)
		{
			if (defence.damageReduction != 1)
			{ // if the damage reduction is less than one, then the damage is reduced by the damage reduction
				hp -= Math.round(amount * defence.damageReduction);
				var damageToItem:Int = Math.round(amount - (amount * defence.damageReduction));
				defence.takeDamage(damageToItem);
			}
			else
			{
				// no hp is done to the zombie, just the item
				defence.takeDamage(amount);
			}

			if (defence.durability <= 0)
			{
				// Remove the item when durability is depleted
				trace(defence.item + " is broken!");
				hasDefence = false;
			}
		}
		else
		{
			hp -= amount;
		}
		if (hp <= 0)
		{
			kill(); // Remove the zombie when HP is depleted
		}
	}

	public function eat():Void
	{
		// Implement eating logic (e.g., damage the plant)
		trace(name + " is eating!");
	}

	public function playAnimation(animationName:String):Void
	{
		animation.play(animationName);
	}
}
