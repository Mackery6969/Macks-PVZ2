package;

import Plant;
import Zombies;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.util.FlxColor;

class PlayState extends FlxState
{
	var grid:Array<Array<FlxSprite>>; // 2D array to hold the grid
	var gridWidth:Int = 9; // Number of columns
	var gridHeight:Int = 5; // Number of rows
	var cellSize:Int = 80; // Size of each cell (in pixels)
	var gridX:Int = 100; // X position of the grid
	var gridY:Int = 100; // Y position of the grid vbvx cvb

	public static var sun:Int = 50; // Currency for buying plants

	public var sunText:FlxText; // Text to display the amount of sun

	public var seedPackets:Array<SeedPacket>;
	public var selectedPacket:SeedPacket = null;

	override public function create()
	{
		super.create();

		// Create and display seed packets
		seedPackets = [
			{plantClass: Plants.Peashooter, sprite: createPacketSprite(Util.image('packets/Peashooter')), cooldown: 5},
		];

		for (i in 0...seedPackets.length)
		{
			var packet:SeedPacket = seedPackets[i];
			packet.sprite.setPosition(10, i * (packet.sprite.height + 10) + 10);
			add(packet.sprite);
		}

		// Create the plants vs zombies grid with checkered pattern
		grid = [];

		for (i in 0...gridHeight)
		{
			grid[i] = [];
			for (j in 0...gridWidth)
			{
				var color = (i + j) % 2 == 0 ? FlxColor.GREEN : FlxColor.GRAY;
				var cell:FlxSprite = new FlxSprite(j * cellSize + gridX, i * cellSize + gridY);
				cell.makeGraphic(cellSize, cellSize, color);
				grid[i][j] = cell;
				add(cell);
			}
		}

		// Create sun display text
		sunText = new FlxText(10, FlxG.height - 30, 100, "Sun: " + sun);
		add(sunText);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		// Update sun display
		sunText.text = "Sun: " + sun;

		// Check for seed packet selection
		if (FlxG.mouse.justPressed)
		{
			for (packet in seedPackets)
			{
				if (packet.cooldown <= 0 && packet.sprite.overlapsPoint(FlxG.mouse.getScreenPosition()))
				{
					if (sun >= Type.createInstance(packet.plantClass, [0, 0]).cost)
					{
						trace("Selected plant: " + packet.plantClass);
						selectedPacket = packet;
						break;
					}
				}
			}
		}

		// Place plant on grid click
		if (selectedPacket != null && FlxG.mouse.justReleased)
		{
			var mouseX:Int = FlxG.mouse.x;
			var mouseY:Int = FlxG.mouse.y;

			var col:Int = Std.int((mouseX - gridX) / cellSize);
			var row:Int = Std.int((mouseY - gridY) / cellSize);

			if (row >= 0 && row < gridHeight && col >= 0 && col < gridWidth && grid[row][col] == null)
			{
				// Place the plant
				placePlant(row, col, selectedPacket.plantClass);
				sun -= Type.createInstance(selectedPacket.plantClass, [0, 0]).cost;

				selectedPacket.cooldown = 5; // Reset cooldown (example value)
				selectedPacket = null; // Deselect after placing
			}
		}

		// Handle zombie spawning
		spawnZombie();

		// Debug: Add sun with the PLUS key
		if (FlxG.keys.justPressed.PLUS)
		{
			sun += 50;
		}

		// Update seed packet cooldowns
		for (packet in seedPackets)
		{
			if (packet.cooldown > 0)
			{
				packet.cooldown -= elapsed;
				packet.sprite.color = FlxColor.GRAY;
				packet.sprite.scale.y = 1 - packet.cooldown / 5;
			}
			else
			{
				packet.sprite.color = FlxColor.WHITE;
				packet.sprite.scale.y = 1;
			}
		}
	}

	function placePlant(row:Int, col:Int, plantClass:Class<Plant>):Void
	{
		var x:Float = col * cellSize + gridX;
		var y:Float = row * cellSize + gridY;

		var plant:Plant = Type.createInstance(plantClass, [x, y]);
		add(plant);

		// Store the plant in the grid
		grid[row][col] = plant;
	}

	function createPacketSprite(imagePath:String):FlxSprite
	{
		var sprite:FlxSprite = new FlxSprite();
		sprite.loadGraphic(imagePath);
		return sprite;
	}

	function spawnZombie():Void
	{
		if (FlxG.keys.justPressed.ONE)
		{
			var i = Std.random(gridHeight) + 1;
			var row:Int = i - 1;
			var zombie:Zombies.Browncoat = new Browncoat(FlxG.width - 100, gridY + row * cellSize);
			add(zombie);
			trace("Zombie spawned in row " + row);
		}
	}
}
