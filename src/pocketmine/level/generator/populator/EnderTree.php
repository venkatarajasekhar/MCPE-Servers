<?php

/*
 *
 * @author Asparanc
 *
 */

namespace pocketmine\level\generator\populator;

use pocketmine\block\Block;
use pocketmine\level\ChunkManager;
use pocketmine\utils\Random;

class EnderTree extends Populator{
	/** @var ChunkManager */
	private $level;
	private $randomAmount;
	private $baseAmount;

	public function setRandomAmount($amount){
		$this->randomAmount = $amount;
	}

	public function setBaseAmount($amount){
		$this->baseAmount = $amount;
	}

	public function populate(ChunkManager $level, $chunkX, $chunkZ, Random $random){
	if(mt_rand(0,100) < 10){
			$this->level = $level;
			$amount = $random->nextRange(0, $this->randomAmount + 1) + $this->baseAmount;
			for($i = 0; $i < $amount; ++$i){
				$x = $random->nextRange($chunkX * 16, $chunkX * 16 + 15);
				$z = $random->nextRange($chunkZ * 16, $chunkZ * 16 + 15);
				$y = $this->getHighestWorkableBlock($x, $z);
				if($this->level->getBlockIdAt($x, $y, $z) == Block::END_STONE){
					$height = mt_rand(5,20);

					$nd = 360 / (2 * pi() * 8);
					for($d = 0; $d < 360; $d += $nd){
						$level->setBlockIdAt($x + (cos(deg2rad($d)) * 8), $y + (sin(deg2rad($d)) * 8), $z, Block::ICE);
					}
					for($d = 0; $d < 360; $d += $nd){
						$level->setBlockIdAt($x, $y + (sin(deg2rad($d)) * 8), $z + (cos(deg2rad($d)) * 8), Block::ICE);
					}
					for($d = 0; $d < 360; $d += $nd){
						$level->setBlockIdAt($x + (cos(deg2rad($d)) * 6), $y + (cos(deg2rad($d)) * 8), $z + (sin(deg2rad($d)) * 7), Block::ICE);
					}
					for($d = 0; $d < 360; $d += $nd){
						$level->setBlockIdAt($x - (cos(deg2rad($d)) * 6), $y + (cos(deg2rad($d)) *8), $z - (sin(deg2rad($d)) * 7), Block::ICE);
					}
				}
			}
		}
	}


	private function getHighestWorkableBlock($x, $z){
		for($y = 127; $y >= 0; --$y){
			$b = $this->level->getBlockIdAt($x, $y, $z);
			if($b == Block::END_STONE){
				break;
			}
		}

		return $y === 0 ? -1 : $y;
	}
}
