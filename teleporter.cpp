/* Copyright (C) 2010 Tornado & Easy-Emu Team <http://easy-emu.de>
 * Report the Bugs on http://easy-emu.de */

#include "precompiled.h"

bool GossipHello_teleporter(Player *plr, Creature *_Creature)
	{
	plr->SetTaxiCheater(true);

	plr->ADD_GOSSIP_ITEM(0, "Capitals", GOSSIP_SENDER_MAIN, 1);
	plr->ADD_GOSSIP_ITEM(0, "Azeroth Instances", GOSSIP_SENDER_MAIN, 2);
	plr->ADD_GOSSIP_ITEM(0, "Azeroth Raids", GOSSIP_SENDER_MAIN, 3);
	plr->ADD_GOSSIP_ITEM(0, "Outland Instances", GOSSIP_SENDER_MAIN, 4);
	plr->ADD_GOSSIP_ITEM(0, "Outland Raids", GOSSIP_SENDER_MAIN, 5);
	plr->ADD_GOSSIP_ITEM(0, "Gurubashi Arena", GOSSIP_SENDER_MAIN, 6);
	plr->ADD_GOSSIP_ITEM(0, "Northrend", GOSSIP_SENDER_MAIN, 84);
	plr->ADD_GOSSIP_ITEM(0, "Outland", GOSSIP_SENDER_MAIN, 85);
	plr->ADD_GOSSIP_ITEM(0, "Azeroth", GOSSIP_SENDER_MAIN, 86);
	plr->ADD_GOSSIP_ITEM(5, "Tools", GOSSIP_SENDER_MAIN, 704);
	plr->ADD_GOSSIP_ITEM(0, "Have a nice day!", GOSSIP_SENDER_MAIN, 9);
	plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());

	return true;
	}

void SendDefaultMenu_teleporter(Player *plr, Creature *_Creature, uint32 action)
	{
	//if (!plr->getAttackers().empty())
	//better solution

	if (plr->isInCombat())
		{
		plr->CLOSE_GOSSIP_MENU(), _Creature->MonsterSay("You are in combat!", LANG_UNIVERSAL, 0);
		return;
		}
	if (plr->isInFlight())
		{
		plr->CLOSE_GOSSIP_MENU(), _Creature->MonsterSay("You are in a battle!", LANG_UNIVERSAL, 0);
		return;
		}
	if (plr->isDead())
		{
		plr->CLOSE_GOSSIP_MENU(), _Creature->MonsterSay("You are dead!", LANG_UNIVERSAL, 0);
		return;
		}

	switch(action)
		{
		// Outland
		case 85:
			plr->ADD_GOSSIP_ITEM(5, "Hellfire Peninsula", GOSSIP_SENDER_MAIN, 300);
			plr->ADD_GOSSIP_ITEM(5, "Zangarmarsh", GOSSIP_SENDER_MAIN, 301);
			plr->ADD_GOSSIP_ITEM(5, "Terokkar Forest", GOSSIP_SENDER_MAIN, 302);
			plr->ADD_GOSSIP_ITEM(5, "Nagrand", GOSSIP_SENDER_MAIN, 303);
			plr->ADD_GOSSIP_ITEM(5, "Blade's Edge Mountains", GOSSIP_SENDER_MAIN, 304);
			plr->ADD_GOSSIP_ITEM(5, "Netherstorm", GOSSIP_SENDER_MAIN, 305);
			plr->ADD_GOSSIP_ITEM(5, "Shadowmoon Valley", GOSSIP_SENDER_MAIN, 306);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());

			// Eastern Kingdoms
		case 86:
			plr->ADD_GOSSIP_ITEM(5, "Elwynn Forest", GOSSIP_SENDER_MAIN, 307);
			plr->ADD_GOSSIP_ITEM(5, "Eversong Woods", GOSSIP_SENDER_MAIN, 308);
			plr->ADD_GOSSIP_ITEM(5, "Dun Morogh", GOSSIP_SENDER_MAIN, 309);
			plr->ADD_GOSSIP_ITEM(5, "Tirisfal Glades", GOSSIP_SENDER_MAIN, 310);
			plr->ADD_GOSSIP_ITEM(5, "Ghostlands", GOSSIP_SENDER_MAIN, 311);
			plr->ADD_GOSSIP_ITEM(5, "Loch Modan", GOSSIP_SENDER_MAIN, 312);
			plr->ADD_GOSSIP_ITEM(5, "Silverpine Forest", GOSSIP_SENDER_MAIN, 313);
			plr->ADD_GOSSIP_ITEM(5, "Westfall", GOSSIP_SENDER_MAIN, 314);
			plr->ADD_GOSSIP_ITEM(5, "Redridge Mountains", GOSSIP_SENDER_MAIN, 315);
			plr->ADD_GOSSIP_ITEM(5, "Duskwood", GOSSIP_SENDER_MAIN, 316);
			plr->ADD_GOSSIP_ITEM(0, "[Page 2]", GOSSIP_SENDER_MAIN, 317);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());

			// Page 2
		case 317:
			plr->ADD_GOSSIP_ITEM(5, "Hillsbrad Foothills", GOSSIP_SENDER_MAIN, 318);
			plr->ADD_GOSSIP_ITEM(5, "Wetlands", GOSSIP_SENDER_MAIN, 319);
			plr->ADD_GOSSIP_ITEM(5, "Alterac Mountains", GOSSIP_SENDER_MAIN, 320);
			plr->ADD_GOSSIP_ITEM(5, "Arathi Highlands", GOSSIP_SENDER_MAIN, 321);
			plr->ADD_GOSSIP_ITEM(5, "Stranglethorn Vale", GOSSIP_SENDER_MAIN, 322);
			plr->ADD_GOSSIP_ITEM(5, "Badlands", GOSSIP_SENDER_MAIN, 323);
			plr->ADD_GOSSIP_ITEM(5, "Swamp of Sorrows", GOSSIP_SENDER_MAIN, 324);
			plr->ADD_GOSSIP_ITEM(5, "The Hinterlands", GOSSIP_SENDER_MAIN, 325);
			plr->ADD_GOSSIP_ITEM(5, "Searing Gorge", GOSSIP_SENDER_MAIN, 326);
			plr->ADD_GOSSIP_ITEM(5, "Blasted Lands", GOSSIP_SENDER_MAIN, 327);
			plr->ADD_GOSSIP_ITEM(0, "[Page 3]", GOSSIP_SENDER_MAIN, 328);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());

			// Page 3
		case 328:
			plr->ADD_GOSSIP_ITEM(5, "Burning Steppes", GOSSIP_SENDER_MAIN, 329);
			plr->ADD_GOSSIP_ITEM(5, "Western Plaguelands", GOSSIP_SENDER_MAIN, 330);
			plr->ADD_GOSSIP_ITEM(5, "Eastern Plaguelands", GOSSIP_SENDER_MAIN, 331);
			plr->ADD_GOSSIP_ITEM(5, "Isle of Quel'Danas", GOSSIP_SENDER_MAIN, 332);
			plr->ADD_GOSSIP_ITEM(5, "Azuremyst Isle", GOSSIP_SENDER_MAIN, 333);
			plr->ADD_GOSSIP_ITEM(5, "Teldrassil", GOSSIP_SENDER_MAIN, 334);
			plr->ADD_GOSSIP_ITEM(5, "Durotar", GOSSIP_SENDER_MAIN, 335);
			plr->ADD_GOSSIP_ITEM(5, "Mulgore", GOSSIP_SENDER_MAIN, 336);
			plr->ADD_GOSSIP_ITEM(5, "Bloodmyst Isle", GOSSIP_SENDER_MAIN, 337);
			plr->ADD_GOSSIP_ITEM(5, "Darkshore", GOSSIP_SENDER_MAIN, 338);
			plr->ADD_GOSSIP_ITEM(0, "[Page 4]", GOSSIP_SENDER_MAIN, 339);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());

			// Page 4
		case 339:
			plr->ADD_GOSSIP_ITEM(5, "The Barrens", GOSSIP_SENDER_MAIN, 340);
			plr->ADD_GOSSIP_ITEM(5, "Ashenvale", GOSSIP_SENDER_MAIN, 341);
			plr->ADD_GOSSIP_ITEM(5, "Stonetalon Mountains", GOSSIP_SENDER_MAIN, 342);
			plr->ADD_GOSSIP_ITEM(5, "Desolace", GOSSIP_SENDER_MAIN, 343);
			plr->ADD_GOSSIP_ITEM(5, "Thousand Needles", GOSSIP_SENDER_MAIN, 344);
			plr->ADD_GOSSIP_ITEM(5, "Dustwallow Marsh", GOSSIP_SENDER_MAIN, 345);
			plr->ADD_GOSSIP_ITEM(5, "Feralas", GOSSIP_SENDER_MAIN, 346);
			plr->ADD_GOSSIP_ITEM(5, "Tanaris", GOSSIP_SENDER_MAIN, 347);
			plr->ADD_GOSSIP_ITEM(5, "Azshara", GOSSIP_SENDER_MAIN, 348);
			plr->ADD_GOSSIP_ITEM(5, "Felwood", GOSSIP_SENDER_MAIN, 349);
			plr->ADD_GOSSIP_ITEM(0, "[Page 5]", GOSSIP_SENDER_MAIN, 350);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());

			// Page 5
		case 350:
			plr->ADD_GOSSIP_ITEM(5, "Un'Goro Crater", GOSSIP_SENDER_MAIN, 351);
			plr->ADD_GOSSIP_ITEM(5, "Silithus", GOSSIP_SENDER_MAIN, 352);
			plr->ADD_GOSSIP_ITEM(5, "Winterspring", GOSSIP_SENDER_MAIN, 353);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());

			// Capitals
		case 1:
			if (plr->GetTeam() == ALLIANCE)
				{
				plr->ADD_GOSSIP_ITEM(5, "Stormwind", GOSSIP_SENDER_MAIN, 20);
				plr->ADD_GOSSIP_ITEM(5, "Darnassus", GOSSIP_SENDER_MAIN, 21);
				plr->ADD_GOSSIP_ITEM(5, "Ironforge", GOSSIP_SENDER_MAIN, 22);
				plr->ADD_GOSSIP_ITEM(5, "Exodar", GOSSIP_SENDER_MAIN, 23);
				plr->ADD_GOSSIP_ITEM(5, "Shattrath", GOSSIP_SENDER_MAIN, 24);
				plr->ADD_GOSSIP_ITEM(5, "Dalaran", GOSSIP_SENDER_MAIN, 89);
				plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
				plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
				}
			else
				{
				plr->ADD_GOSSIP_ITEM(5, "Orgrimmar", GOSSIP_SENDER_MAIN, 25);
				plr->ADD_GOSSIP_ITEM(5, "Thunder Bluff", GOSSIP_SENDER_MAIN, 26);
				plr->ADD_GOSSIP_ITEM(5, "Undercity", GOSSIP_SENDER_MAIN, 27);
				plr->ADD_GOSSIP_ITEM(5, "Silvermoon", GOSSIP_SENDER_MAIN, 28);
				plr->ADD_GOSSIP_ITEM(5, "Shattrath", GOSSIP_SENDER_MAIN, 24);
				plr->ADD_GOSSIP_ITEM(5, "Dalaran", GOSSIP_SENDER_MAIN, 89);
				plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
				plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
				};

			// Azeroth-Instances
		case 2:
			plr->ADD_GOSSIP_ITEM(5, "Shadowfang Keep", GOSSIP_SENDER_MAIN, 30);
			plr->ADD_GOSSIP_ITEM(5, "Scarlet Monastery", GOSSIP_SENDER_MAIN, 31);
			plr->ADD_GOSSIP_ITEM(5, "Hoehlen der Zeit", GOSSIP_SENDER_MAIN, 35);
			plr->ADD_GOSSIP_ITEM(5, "Scholomance", GOSSIP_SENDER_MAIN, 34);
			plr->ADD_GOSSIP_ITEM(5, "Stratholme", GOSSIP_SENDER_MAIN, 33);
			plr->ADD_GOSSIP_ITEM(5, "Magisters' Terrace", GOSSIP_SENDER_MAIN, 81);
			plr->ADD_GOSSIP_ITEM(5, "Zul'Farrak", GOSSIP_SENDER_MAIN, 32);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
			break;

			// Azeroth-Raids
		case 3:
			plr->ADD_GOSSIP_ITEM(5, "Ahn'Qiraj-20", GOSSIP_SENDER_MAIN, 41);
			plr->ADD_GOSSIP_ITEM(5, "Ahn'Qiraj-40", GOSSIP_SENDER_MAIN, 42);
			plr->ADD_GOSSIP_ITEM(5, "Karazhan", GOSSIP_SENDER_MAIN, 40);
			plr->ADD_GOSSIP_ITEM(5, "Molten Core", GOSSIP_SENDER_MAIN, 38);
			plr->ADD_GOSSIP_ITEM(5, "Naxxramas", GOSSIP_SENDER_MAIN, 43);
			plr->ADD_GOSSIP_ITEM(5, "Onyxia's Lair", GOSSIP_SENDER_MAIN, 37);
			plr->ADD_GOSSIP_ITEM(5, "Schwarzfelsspitze", GOSSIP_SENDER_MAIN, 36);
			plr->ADD_GOSSIP_ITEM(5, "Sunwell Plateau", GOSSIP_SENDER_MAIN, 82);
			plr->ADD_GOSSIP_ITEM(5, "Zul'Aman", GOSSIP_SENDER_MAIN, 80);
			plr->ADD_GOSSIP_ITEM(5, "Zul'Gurub", GOSSIP_SENDER_MAIN, 39);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
			break;

			// Outland-Instances
		case 4:
			plr->ADD_GOSSIP_ITEM(5, "Arkatraz", GOSSIP_SENDER_MAIN, 56);
			plr->ADD_GOSSIP_ITEM(5, "Auchenai Crypts", GOSSIP_SENDER_MAIN, 51);
			plr->ADD_GOSSIP_ITEM(5, "The Blood Furnace", GOSSIP_SENDER_MAIN, 45);
			plr->ADD_GOSSIP_ITEM(5, "The Underbog", GOSSIP_SENDER_MAIN, 47);
			plr->ADD_GOSSIP_ITEM(5, "The Botanica", GOSSIP_SENDER_MAIN, 55);
			plr->ADD_GOSSIP_ITEM(5, "The Steamvault", GOSSIP_SENDER_MAIN, 49);
			plr->ADD_GOSSIP_ITEM(5, "The Mechanar", GOSSIP_SENDER_MAIN, 54);
			plr->ADD_GOSSIP_ITEM(5, "The Slave Pens", GOSSIP_SENDER_MAIN, 48);
			plr->ADD_GOSSIP_ITEM(5, "The Shattered Halls", GOSSIP_SENDER_MAIN, 46);
			plr->ADD_GOSSIP_ITEM(5, "Hellfire Ramparts", GOSSIP_SENDER_MAIN, 44);
			plr->ADD_GOSSIP_ITEM(5, "Mana-Tombs", GOSSIP_SENDER_MAIN, 50);
			plr->ADD_GOSSIP_ITEM(5, "Shadow Labyrinth", GOSSIP_SENDER_MAIN, 53);
			plr->ADD_GOSSIP_ITEM(5, "Sethekk Halls", GOSSIP_SENDER_MAIN, 52);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
			break;

			// Outland-Raids
		case 5:
			plr->ADD_GOSSIP_ITEM(5, "Tempest Keep", GOSSIP_SENDER_MAIN, 57);
			plr->ADD_GOSSIP_ITEM(5, "Gruul's Lair", GOSSIP_SENDER_MAIN, 58);
			plr->ADD_GOSSIP_ITEM(5, "Magtheridon's Lair", GOSSIP_SENDER_MAIN, 59);
			plr->ADD_GOSSIP_ITEM(5, "Serpentshrine Cavern", GOSSIP_SENDER_MAIN, 60);
			plr->ADD_GOSSIP_ITEM(5, "Black Temple", GOSSIP_SENDER_MAIN, 61);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
			break;

			// Northrend 84
		case 84:
			if (plr->GetTeam() == ALLIANCE)
				{
				plr->ADD_GOSSIP_ITEM(5, "Icecrown", GOSSIP_SENDER_MAIN, 605);
				plr->ADD_GOSSIP_ITEM(5, "Borean Tundra", GOSSIP_SENDER_MAIN, 606);
				plr->ADD_GOSSIP_ITEM(5, "The Storm Peaks", GOSSIP_SENDER_MAIN, 87);
				plr->ADD_GOSSIP_ITEM(5, "Zul'Drak", GOSSIP_SENDER_MAIN, 88);
				plr->ADD_GOSSIP_ITEM(5, "Dragonblight", GOSSIP_SENDER_MAIN, 90);
				plr->ADD_GOSSIP_ITEM(5, "Grizzly Hills", GOSSIP_SENDER_MAIN, 91);
				plr->ADD_GOSSIP_ITEM(5, "Howling Fjord", GOSSIP_SENDER_MAIN, 92);
				plr->ADD_GOSSIP_ITEM(5, "Sholazar Basin", GOSSIP_SENDER_MAIN, 93);
				plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
				plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
				}
			else
				{
				plr->ADD_GOSSIP_ITEM(5, "Icecrown", GOSSIP_SENDER_MAIN, 605);
				plr->ADD_GOSSIP_ITEM(5, "Borean Tundra", GOSSIP_SENDER_MAIN, 95);
				plr->ADD_GOSSIP_ITEM(5, "The Storm Peaks", GOSSIP_SENDER_MAIN, 87);
				plr->ADD_GOSSIP_ITEM(5, "Zul'Drak", GOSSIP_SENDER_MAIN, 97);
				plr->ADD_GOSSIP_ITEM(5, "Dragonblight", GOSSIP_SENDER_MAIN, 90);
				plr->ADD_GOSSIP_ITEM(5, "Grizzly Hills", GOSSIP_SENDER_MAIN, 100);
				plr->ADD_GOSSIP_ITEM(5, "Howling Fjord", GOSSIP_SENDER_MAIN, 101);
				plr->ADD_GOSSIP_ITEM(5, "Sholazar Basin", GOSSIP_SENDER_MAIN, 93);
				plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
				plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
				};
			break;

			/* Here are all Coordinates */

		case 6:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -13152.0f, 342.72f, 52.395f, 0.0f);
			break;

			// Cooldown Remover
		case 702:
			plr->CLOSE_GOSSIP_MENU();
			plr->RemoveAllSpellCooldown();
			break;

			// Remove cooldowns
		case 703:
			plr->removeSpell(15007);
			plr->CLOSE_GOSSIP_MENU();
			break;

			/* Outland Coordinates */

		case 300:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -248.977615f, 964.944885f, 84.336662f, 0.0f);
			break;

		case 301:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 50.678101f, 7194.833984f, 22.017532f, 0.0f);
			break;

		case 302:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -2877.483398f, 4764.440430f, -5.322320f, 0.0f);
			break;

		case 303:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -1145.949951f, 8182.350098f, 3.602490f, 0.0f);
			break;

		case 304:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 2726.133789f, 5998.798340f, -11.080065f, 0.0f);
			break;

		case 305:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 2572.703125f, 3742.430420f, 145.119217f, 0.0f);
			break;

		case 306:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 3135.320557f, 3976.025879f, 162.889069f, 0.0f);
			break;

			/* Azeroth Coordinates */

		case 307:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -9552.372070f, 94.735458f, 58.884834f, 0.0f);
			break;

		case 308:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 9285.785156f, -6828.714844f, 19.727798f, 0.0f);
			break;

		case 309:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -5414.248535f, -374.800903f, 400.293121f, 0.0f);
			break;

		case 310:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, 2200.281738f, 175.764175f, 50.176960f, 0.0f);
			break;

		case 311:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 7387.143066f, -6803.121582f, 44.223515f, 0.0f);
			break;

		case 312:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -5550.801758f, -2855.118408f, 361.456390f, 0.0f);
			break;

		case 313:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, 848.092285f, 1361.981567f, 54.574860f, 0.0f);
			break;

		case 314:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -10235.200195f, 1222.469971f, 43.625198f, 0.0f);
			break;

		case 315:

			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -9534.920898f, -2346.239502f, 61.819328f, 0.0f);
			break;

		case 316:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -10592.413086f, 268.848694f, 33.409344f, 0.0f);
			break;

		case 318:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -813.798279f, -1075.119751f, 48.486366f, 0.0f);
			break;

		case 319:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -2947.092285f, -1390.870361f, 9.189321f, 0.0f);
			break;

		case 320:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, 371.726074f, -609.370667f, 155.276596f, 0.0f);
			break;

		case 321:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -982.275330f, -1809.244751f, 53.051121f, 0.0f);
			break;

		case 322:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -12212.492188f, 209.350464f, 5.137496f, 0.0f);
			break;

		case 323:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -6779.200195f, -3423.639893f, 241.667007f, 0.0f);
			break;

		case 324:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -10424.073242f, -3141.349854f, 22.886642f, 0.0f);
			break;

		case 325:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -225.921722f, -2636.225586f, 119.770828f, 0.0f);
			break;

		case 326:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -6869.434570f, -1621.434937f, 243.388596f, 0.0f);
			break;

		case 327:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -11753.261719f, -3138.071289f, -15.189804f, 0.0f);
			break;

		case 329:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -7941.067383f, -822.297241f, 130.275116f, 0.0f);
			break;

		case 330:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, 1792.343750f, -2000.826294f, 72.041779f, 0.0f);
			break;

		case 331:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, 1598.137329f, -3697.449951f, 104.447372f, 0.0f);
			break;

		case 332:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 12936.799805f, -6901.390137f, 5.292680f, 0.0f);
			break;

		case 333:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -3866.752441f, -11929.916016f, 0.708296f, 0.0f);
			break;

		case 334:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, 10111.299805f, 1557.729980f, 1324.329956f, 0.0f);
			break;

		case 335:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, 1007.780029f, -4446.220215f, 11.202200f, 0.0f);
			break;

		case 336:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -2192.620117f, -736.317017f, -13.327400f, 0.0f);
			break;

		case 337:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -2469.504639f, -11518.453125f, 31.226620f, 0.0f);
			break;

		case 338:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, 5051.309570f, 231.896942f, 31.392700f, 0.0f);
			break;

		case 340:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -425.250336f, -1820.374390f, 95.787674f, 0.0f);
			break;

		case 341:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, 2207.013916f, -1764.029175f, 105.837807f, 0.0f);
			break;

		case 342:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, 1119.182373f, 675.185059f, 137.863998f, 0.0f);
			break;

		case 343:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -606.395020f, 2211.750000f, 92.981796f, 0.0f);
			break;

		case 344:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -4969.020020f, -1726.890015f, -62.126900f, 0.0f);
			break;

		case 345:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -4325.317383f, -3176.012939f, 36.330490f, 0.0f);
			break;

		case 346:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -4841.189941f, 1309.439941f, 81.393700f, 0.0f);
			break;

		case 347:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -7931.200195f, -3414.280029f, 80.736504f, 0.0f);
			break;

		case 348:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, 3341.360107f, -4603.790039f, 92.502701f, 0.0f);
			break;

		case 349:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, 4318.530762f, -849.216736f, 287.660522f, 0.0f);
			break;

		case 351:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -7943.220215f, -2119.090088f, -218.344833f, 0.0f);
			break;

		case 352:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -7426.870117f, 1005.309998f, 1.133590f, 0.0f);
			break;


		case 353:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, 6759.180176f, -4419.629883f, 763.213989f, 0.0f);
			break;

		case 9: 
			plr->CLOSE_GOSSIP_MENU();
			plr->GetSession()->SendNotification("Have a nice day!");
			break;

		// Not needed option in menu. Thanks and credits are in these file
		/*case 601: 
			plr->CLOSE_GOSSIP_MENU();
			plr->GetSession()->SendNotification("Coded by Tornado");
			break;*/

		// Not needed option in menu. Thanks and credits are in these file
		/*case 701: 
			plr->CLOSE_GOSSIP_MENU();
			plr->GetSession()->SendNotification("Danke an SNowi fuers hinzufuegen von Classic und tbc Ports.");
			break;*/

		case 20:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -8881.0f, 575.0f, 93.0f, 0.0f);
			break;

		case 21:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1,9951.89f,2280.55f,1341.39f,0.0f);
			break;

		case 22:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0,-4981.0f,-881.0f,501.66f,0.0f);
			break;

		case 23:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530,-4014.0f,-11895.79f,-2.0f,0.0f);
			break;

		case 24:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -1887.510010f, 5359.379883f, -12.427300f, 0.0f);
			break;

		case 25:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, 1629.777344f, -4373.210449f, 31.246769, 0.0f);
			break;

		case 26:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -1196.858398f, 30.147331f, 176.949188f, 0.0f);
			break;

		case 27:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, 1844.765625f, 237.655991f, 62.275150f, 0.0f);
			break;

		case 28:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 9400.486328f, -7278.376953f, 14.206780f, 0.0f);
			break;

			/* Azeroth-Instances */

		case 30:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -234.495087f, 1561.946411f, 76.892143f, 0.0f);
			break;

		case 31:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, 2870.442627f, -819.985229f, 160.331085f, 0.0f);
			break;

		case 32:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -6797.278809f, -2903.917969f, 9.953360f,0.0f);
			break;

		case 33:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, 3359.111572f, -3380.8444238f, 144.781860f,0.0f);
			break;
		
		case 34:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, 1267.468628f, -2556.651367f, 94.127983f,0.0f);
			break;

		case 35:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -8519.718750f, -4297.542480f, -208.441376f, 0.0f);
			break;

			/* Azeroth-Raids */

		case 36:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -7527.129883f, -1224.997437f, 285.733002f,0.0f);
			break;

		case 37:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -4744.647f, -3752.661133f, 50.427f,3.0f);
			break;

		case 38:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(409, 1089.6f, -470.19f, -106.41f,0.0f);
			break;

		case 39:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(0, -11919.073242f, -1202.459374f, 92.298744f,0.0f);
			break;

		case 40:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(532, -11087.3f, -1977.47f, 49.6135f,0.0f);
			break;

		case 41:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -8394.730469f, 1485.658447f, 21.038563f,0.0f);
			break;

		case 42:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(1, -8247.316406f, 1970.156860f, 129.071472f,0.0f);
			break;

		case 43:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(533, 3006.06f, -3436.72f, 293.891f,0.0f);
			break;

			/* Scherbenwelt-Instances */

		case 44:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -360.670990f, 3071.899902f, -15.097700f,0.0f);
			break;

		case 45:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -303.506012f, 3164.820068f, 31.742500f,0.0f);
			break;

		case 46:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -311.083527f, 3083.291748f, -3.745923f,0.0f);
			break;

		case 47:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 777.088989f, 6763.450195f, -72.062561f,0.0f);
			break;

		case 48:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 719.507996f, 6999.339844f, -73.074303f,0.0f);
			break;

		case 49:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 816.590027f, 6934.669922f, -80.544601f,0.0f);
			break;

		case 50:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -3079.810059f, 4943.040039f, -101.046997f,0.0f);
			break;

		case 51:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -3361.959961f, 5225.770020f, -101.047997f,0.0f);
			break;

		case 52:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -3362.219971f, 4660.410156f, -101.049004f,0.0f);
			break;

		case 54:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 2862.409912f, 1546.089966f, 252.158691f,0.0f);
			break;

		case 55:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 3413.649902f, 1483.319946f, 182.837997f,0.0f);
			break;

		case 56:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 3311.598145f, 1332.745117f, 505.557251f,0.0f);
			break;

			/* Outland-Raids */

		case 57:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 3087.310059f, 1373.790039f, 184.643005f,0.0f);
			break;

		case 58:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 3549.424072f, 5179.854004f, -4.430779f,0.0f);
			break;

		case 59:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -313.678986f, 3088.350098f, -116.501999f,0.0f);
			break;

		case 60:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 830.542908f, 6865.445801f, -63.785503f,0.0f);
			break;

		case 61:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, -3609.739990f, 328.252014f, 37.307701f,0.0f);
			break;

		case 80:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 6853.331055f,-7956.031738f, 170.074585f,4.67f);
			break;

		case 81:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 6853.331055f,-7956.031738f, 170.074585f,4.67f);
			break;

		case 82:
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(530, 12892.640625f, -7314.847168f, 65.570222f,4.355247f);
			break;

			/* FROM HERE NORTHREND ALLIANCE */

		case 88:
			// 88 = ZUL'DRAK     
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 5451.406250f, -2628.971436f, 306.253418f,1.577150f);
			break;

		case 605:
			// 85 = EISKRONE     
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 6224.557969f, -2.641857f, 410.164795f,5.416985f);
			break;

		case 606:
			// 86 = BOREANISCHES TUNDRA     
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 2243.259277f, 5264.776367f, 11.709665f,5.957395f);
			break;

		case 87:
			// 87 = STURMGIPFEL     
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 6121.390625f, -1061.891724f, 402.559570f,1.590555f);
			break;

		case 89:
			// 89 = DALARAN     
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 5804.182129f, 624.308594f, 647.786865f,1.640000f);
			break;

		case 90:
			// 90 = DRACHENÖDE    
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 3546.780029f, 273.084015f, 45.792198f, 1.815140f);
			break;

		case 91:
			// 91 = GRIZZLY HÜGEL    
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 3065.147705f, -2007.577515f, 79.796875f, 5.522248f);
			break;

		case 92:
			// 92 = DER HEULENDE FLJÖRD  
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 616.571411f, -4987.544434f, 3.985763f, 5.291873f);
			break;

		case 93:
			// 93 = SHOLAZAR BECKEN 
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 5596.030762f, 5826.276367f, -67.677391f, 3.567269f);
			// ALLIANZ NORTHEND IST HIER ZUENDE
			break;

			/* FROM HERE NORTHREND HORDE */

		case 95:
			//Boreanisches Tundra   
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 2829.370117f, 6166.169922f, 208.820007f,0.959931f);
			break;

		case 97:
			// 97 = GRIZZLY HÜGEL    
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 3065.147705f, -2007.577515f, 79.796875f, 5.522248f);
			break;

		case 100:
			//Grizzly    
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 3852.056152f, -4525.665039f, 209.308899f,0.814193f);
			break;

		case 101:
			//DER HEULENDE FLJÖRD  
			plr->CLOSE_GOSSIP_MENU();
			plr->TeleportTo(571, 2670.239990f, -4388.169922f, 284.031006f, 2.321290f);
			break;

		// Auswahl Fenster
		case 200:
			plr->ADD_GOSSIP_ITEM(5, "Capitals", GOSSIP_SENDER_MAIN, 1);
			plr->ADD_GOSSIP_ITEM(5, "Azeroth Instanzen", GOSSIP_SENDER_MAIN, 2);
			plr->ADD_GOSSIP_ITEM(5, "Azeroth Raids", GOSSIP_SENDER_MAIN, 3);
			plr->ADD_GOSSIP_ITEM(5, "Outland Instances", GOSSIP_SENDER_MAIN, 4);
			plr->ADD_GOSSIP_ITEM(5, "Outland Raids", GOSSIP_SENDER_MAIN, 5);
			plr->ADD_GOSSIP_ITEM(5, "Gurubashi Arena", GOSSIP_SENDER_MAIN, 6);
			plr->ADD_GOSSIP_ITEM(5, "Northrend", GOSSIP_SENDER_MAIN, 84);
			plr->ADD_GOSSIP_ITEM( 5, "Tools", GOSSIP_SENDER_MAIN, 704);
			//plr->ADD_GOSSIP_ITEM( 0, "Cooldown Remove", GOSSIP_SENDER_MAIN, 702);
			//plr->ADD_GOSSIP_ITEM( 0, "Nachwirkungen entfernen", GOSSIP_SENDER_MAIN, 703);
			//plr->ADD_GOSSIP_ITEM( 0, "Thanks", GOSSIP_SENDER_MAIN, 701);
			//plr->ADD_GOSSIP_ITEM( 0, "Credits", GOSSIP_SENDER_MAIN, 601);
			plr->ADD_GOSSIP_ITEM(0, "Have a nice day!", GOSSIP_SENDER_MAIN, 9);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
			break;

		/* Display ID's for morphing */
			//uint16 display_id;
			//float display_id;
			//float select = urand(0, 9);

			//ToDo: not working

		/*case 1000: 
			plr->SetDisplayId(6374);
			break;

		case 1001: 
			plr->SetDisplayId(16358);
			break;

		case 1002: 
			plr->SetDisplayId(28010);
			break;

		case 1003: 
			plr->SetDisplayId(20521);
			break;

		case 1004: 
			plr->SetDisplayId(19913);
			break;

		case 1005: 
			plr->SetDisplayId(14521);
			break;

		case 1006: 
			plr->SetDisplayId(21371);
			break;

		case 1007: 
			plr->SetDisplayId(5240);
			break;

		case 1008: 
			plr->SetDisplayId(24564);
			break;

		case 1009: 
			plr->SetDisplayId(18417);
			break;*/


		/*case 708:
			plr->ADD_GOSSIP_ITEM(0, "Morph 1", GOSSIP_SENDER_MAIN, 1000);
			plr->ADD_GOSSIP_ITEM(0, "Morph 2", GOSSIP_SENDER_MAIN, 1001);
			plr->ADD_GOSSIP_ITEM(0, "Morph 3", GOSSIP_SENDER_MAIN, 1002);
			plr->ADD_GOSSIP_ITEM(0, "Morph 4", GOSSIP_SENDER_MAIN, 1003);
			plr->ADD_GOSSIP_ITEM(0, "Morph 5", GOSSIP_SENDER_MAIN, 1004);
			plr->ADD_GOSSIP_ITEM(0, "Morph 6", GOSSIP_SENDER_MAIN, 1005);
			plr->ADD_GOSSIP_ITEM(0, "Morph 7", GOSSIP_SENDER_MAIN, 1006);
			plr->ADD_GOSSIP_ITEM(0, "Morph 8", GOSSIP_SENDER_MAIN, 1007);
			plr->ADD_GOSSIP_ITEM(0, "Morph 9", GOSSIP_SENDER_MAIN, 1008);
			plr->ADD_GOSSIP_ITEM(0, "Morph 10", GOSSIP_SENDER_MAIN, 1009);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			break;*/

			// Working
		/*case 709:
			// (plr->GetDisplayId() != plr->GetNativeDisplayId())
			plr->DeMorph();
			break;*/

		case 704:
			plr->ADD_GOSSIP_ITEM(0, "Remove Cooldown", GOSSIP_SENDER_MAIN, 702);
			plr->ADD_GOSSIP_ITEM(0, "Remove Ripple Effect", GOSSIP_SENDER_MAIN, 703);
			//plr->ADD_GOSSIP_ITEM(0, "Morph", GOSSIP_SENDER_MAIN, 708);
			//plr->ADD_GOSSIP_ITEM(0, "DeMorph", GOSSIP_SENDER_MAIN, 709);
			// Not needed option in menu. Thanks and credits are in these file
			//plr->ADD_GOSSIP_ITEM(0, "Thanks", GOSSIP_SENDER_MAIN, 701);
			//plr->ADD_GOSSIP_ITEM(0, "Credits", GOSSIP_SENDER_MAIN, 601);
			plr->ADD_GOSSIP_ITEM(0, "[Main Menu]", GOSSIP_SENDER_MAIN, 200);
			plr->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE, _Creature->GetGUID());
		}
	}
	
bool GossipSelect_teleporter(Player *plr, Creature *_Creature, uint32 sender, uint32 action)
	{
	// Der Teleporter selbst
	if (sender == GOSSIP_SENDER_MAIN)
		SendDefaultMenu_teleporter(plr, _Creature, action);
	
	return true;
	}
	
void AddSC_teleporter()
	{
	Script *newscript;

	newscript = new Script;
	newscript->Name="teleporter";
	newscript->pGossipHello = &GossipHello_teleporter;
	newscript->pGossipSelect = &GossipSelect_teleporter;
	newscript->pItemHello = NULL;
	//newscript->pItemUse = &ItemUse_teleporter;
	newscript->pGOHello = NULL;
	newscript->pAreaTrigger = NULL;
	newscript->pItemQuestAccept = NULL;
	newscript->pGOQuestAccept = NULL;
	newscript->pGOChooseReward = NULL;
	newscript->RegisterSelf();
	}

