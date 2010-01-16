#include "GossipDef.h"
#include "Player.h"
#include "precompiled.h"
#include "sc_gossip.h"

// Grundversion Coded by Tornado
// Scherbenwelt + Azeroth Coded by SNowi
// All WOTLK Teleports
// Umgeschrieben für Trinity!


bool GossipHello_teleporter(Player *player, Creature *_Creature)
{
    player->SetTaxiCheater(true);

player->ADD_GOSSIP_ITEM( 0, "Hauptstaedte" , GOSSIP_SENDER_MAIN, 1);
player->ADD_GOSSIP_ITEM( 0, "Azeroth Instanzen" , GOSSIP_SENDER_MAIN, 2);
player->ADD_GOSSIP_ITEM( 0, "Azeroth Schlachtzuege" , GOSSIP_SENDER_MAIN, 3);
player->ADD_GOSSIP_ITEM( 0, "Scherbenwelt Instanzen" , GOSSIP_SENDER_MAIN, 4);
player->ADD_GOSSIP_ITEM( 0, "Scherbenwelt Schlachtzuege" , GOSSIP_SENDER_MAIN, 5);
player->ADD_GOSSIP_ITEM( 0, "Gurubashi Arena" , GOSSIP_SENDER_MAIN, 6);
player->ADD_GOSSIP_ITEM( 0, "Nordend" , GOSSIP_SENDER_MAIN, 84);
player->ADD_GOSSIP_ITEM( 0, "Scherbenwelt" , GOSSIP_SENDER_MAIN, 85);
player->ADD_GOSSIP_ITEM( 0, "Azeroth" , GOSSIP_SENDER_MAIN, 86);
player->ADD_GOSSIP_ITEM( 5, "Playertreff" , GOSSIP_SENDER_MAIN, 600);
player->ADD_GOSSIP_ITEM( 0, "Schoenen Tag noch!" , GOSSIP_SENDER_MAIN, 9);
player->ADD_GOSSIP_ITEM( 0, "Teleporter by Tornado, Updated by SNowi" , GOSSIP_SENDER_MAIN, 601);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());

return true;



}

void SendDefaultMenu_teleporter(Player *player, Creature *_Creature, uint32 action )
{
     // Wenn der Spieler in einen Kampf verwickelt wird.
	if(!player->getAttackers().empty())

    {
     player->CLOSE_GOSSIP_MENU();
     player->GetSession()->SendNotification("Beende den Kampf!");                                  
    
return;
    }

switch(action)

{

case 85: //Scherbenwelt

player->ADD_GOSSIP_ITEM(5, "Hoellenfeuer Halbinsel", GOSSIP_SENDER_MAIN, 300);
player->ADD_GOSSIP_ITEM(5, "Zangenmarschen", GOSSIP_SENDER_MAIN, 301);
player->ADD_GOSSIP_ITEM(5, "Waelder von Terokkar", GOSSIP_SENDER_MAIN, 302);
player->ADD_GOSSIP_ITEM(5, "Nagrand", GOSSIP_SENDER_MAIN, 303);
player->ADD_GOSSIP_ITEM(5, "Schergrat", GOSSIP_SENDER_MAIN, 304);
player->ADD_GOSSIP_ITEM(5, "Nethersturm", GOSSIP_SENDER_MAIN, 305);
player->ADD_GOSSIP_ITEM(5, "Schattenmondtal", GOSSIP_SENDER_MAIN, 306);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());


case 86: //Oestliche Koenigreiche
player->ADD_GOSSIP_ITEM(5, "Der Wald von Elwynn", GOSSIP_SENDER_MAIN, 307);
player->ADD_GOSSIP_ITEM(5, "Immersangwald", GOSSIP_SENDER_MAIN, 308);
player->ADD_GOSSIP_ITEM(5, "Dun Morogh", GOSSIP_SENDER_MAIN, 309);
player->ADD_GOSSIP_ITEM(5, "Tirisfal", GOSSIP_SENDER_MAIN, 310);
player->ADD_GOSSIP_ITEM(5, "Geisterlande", GOSSIP_SENDER_MAIN, 311);
player->ADD_GOSSIP_ITEM(5, "Loch Modan", GOSSIP_SENDER_MAIN, 312);
player->ADD_GOSSIP_ITEM(5, "Der Silberwald", GOSSIP_SENDER_MAIN, 313);
player->ADD_GOSSIP_ITEM(5, "Westfall", GOSSIP_SENDER_MAIN, 314);
player->ADD_GOSSIP_ITEM(5, "Das Rotkammgebirge", GOSSIP_SENDER_MAIN, 315);
player->ADD_GOSSIP_ITEM(5, "Daemmerwald", GOSSIP_SENDER_MAIN, 316);
player->ADD_GOSSIP_ITEM( 0, "[Seite 2]" , GOSSIP_SENDER_MAIN, 317);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());

case 317: //Seite 2
player->ADD_GOSSIP_ITEM(5, "Hügelland", GOSSIP_SENDER_MAIN, 318);
player->ADD_GOSSIP_ITEM(5, "Das Sumpfland", GOSSIP_SENDER_MAIN, 319);
player->ADD_GOSSIP_ITEM(5, "AlteracGebirge", GOSSIP_SENDER_MAIN, 320);
player->ADD_GOSSIP_ITEM(5, "Das Arathihochland", GOSSIP_SENDER_MAIN, 321);
player->ADD_GOSSIP_ITEM(5, "Schlingendorntal", GOSSIP_SENDER_MAIN, 322);
player->ADD_GOSSIP_ITEM(5, "Das Ödland", GOSSIP_SENDER_MAIN, 323);
player->ADD_GOSSIP_ITEM(5, "Die Sümpfe des Elends", GOSSIP_SENDER_MAIN, 324);
player->ADD_GOSSIP_ITEM(5, "Das Hinterland", GOSSIP_SENDER_MAIN, 325);
player->ADD_GOSSIP_ITEM(5, "Die sengende Schlucht", GOSSIP_SENDER_MAIN, 326);
player->ADD_GOSSIP_ITEM(5, "Die verwüsteten Lande", GOSSIP_SENDER_MAIN, 327);
player->ADD_GOSSIP_ITEM( 0, "[Seite 3]" , GOSSIP_SENDER_MAIN, 328);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());

case 328: //Seite 3
player->ADD_GOSSIP_ITEM(5, "Die brennende Steppe", GOSSIP_SENDER_MAIN, 329);
player->ADD_GOSSIP_ITEM(5, "Die westlichen Pestländer", GOSSIP_SENDER_MAIN, 330);
player->ADD_GOSSIP_ITEM(5, "Die oestlichen Pestländer", GOSSIP_SENDER_MAIN, 331);
player->ADD_GOSSIP_ITEM(5, "Insel von Quel'Danas", GOSSIP_SENDER_MAIN, 332);
player->ADD_GOSSIP_ITEM(5, "Azurmythosinsel", GOSSIP_SENDER_MAIN, 333);
player->ADD_GOSSIP_ITEM(5, "Teldrassil", GOSSIP_SENDER_MAIN, 334);
player->ADD_GOSSIP_ITEM(5, "Durotar", GOSSIP_SENDER_MAIN, 335);
player->ADD_GOSSIP_ITEM(5, "Mulgore", GOSSIP_SENDER_MAIN, 336);
player->ADD_GOSSIP_ITEM(5, "Blutmythosinsel", GOSSIP_SENDER_MAIN, 337);
player->ADD_GOSSIP_ITEM(5, "Dunkelküste", GOSSIP_SENDER_MAIN, 338);
player->ADD_GOSSIP_ITEM(0, "[Seite 4]", GOSSIP_SENDER_MAIN, 339);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());

case 339: //Seite 4
player->ADD_GOSSIP_ITEM(5, "Das Brachland", GOSSIP_SENDER_MAIN, 340);
player->ADD_GOSSIP_ITEM(5, "Eschental", GOSSIP_SENDER_MAIN, 341);
player->ADD_GOSSIP_ITEM(5, "Das Steinkrallengebirge", GOSSIP_SENDER_MAIN, 342);
player->ADD_GOSSIP_ITEM(5, "Desolace", GOSSIP_SENDER_MAIN, 343);
player->ADD_GOSSIP_ITEM(5, "Tausend Nadeln", GOSSIP_SENDER_MAIN, 344);
player->ADD_GOSSIP_ITEM(5, "Die Düstermarschen", GOSSIP_SENDER_MAIN, 345);
player->ADD_GOSSIP_ITEM(5, "Feralas", GOSSIP_SENDER_MAIN, 346);
player->ADD_GOSSIP_ITEM(5, "Tanaris", GOSSIP_SENDER_MAIN, 347);
player->ADD_GOSSIP_ITEM(5, "Azshara", GOSSIP_SENDER_MAIN, 348);
player->ADD_GOSSIP_ITEM(5, "Teufelswald", GOSSIP_SENDER_MAIN, 349);
player->ADD_GOSSIP_ITEM(0, "[Seite 5]", GOSSIP_SENDER_MAIN, 350);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());


case 350: //Seite 5
player->ADD_GOSSIP_ITEM(5, "Krater von Un'Goro", GOSSIP_SENDER_MAIN, 351);
player->ADD_GOSSIP_ITEM(5, "Silithus", GOSSIP_SENDER_MAIN, 352);
player->ADD_GOSSIP_ITEM(5, "Winderquell", GOSSIP_SENDER_MAIN, 353);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());


case 1: //Haupstaedte

if ( player->GetTeam() == ALLIANCE )
{
player->ADD_GOSSIP_ITEM( 5, "Sturmwind" , GOSSIP_SENDER_MAIN, 20);
player->ADD_GOSSIP_ITEM( 5, "Darnassus" , GOSSIP_SENDER_MAIN, 21);
player->ADD_GOSSIP_ITEM( 5, "Eisenschmiede" , GOSSIP_SENDER_MAIN, 22);
player->ADD_GOSSIP_ITEM( 5, "Exodar" , GOSSIP_SENDER_MAIN, 23);
player->ADD_GOSSIP_ITEM( 5, "Shattrath" , GOSSIP_SENDER_MAIN, 24);
player->ADD_GOSSIP_ITEM(5, "Dalaran", GOSSIP_SENDER_MAIN, 89);
player->ADD_GOSSIP_ITEM( 0, "[Hauptmenu]" , GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());

}else{
player->ADD_GOSSIP_ITEM( 5, "Orgrimmar" , GOSSIP_SENDER_MAIN, 25);
player->ADD_GOSSIP_ITEM( 5, "Donnerfels" , GOSSIP_SENDER_MAIN, 26);
player->ADD_GOSSIP_ITEM( 5, "Unterstadt" , GOSSIP_SENDER_MAIN, 27);
player->ADD_GOSSIP_ITEM( 5, "Silbermond" , GOSSIP_SENDER_MAIN, 28);
player->ADD_GOSSIP_ITEM( 5, "Stattrath" , GOSSIP_SENDER_MAIN, 24);
player->ADD_GOSSIP_ITEM(5, "Dalaran", GOSSIP_SENDER_MAIN, 89);
player->ADD_GOSSIP_ITEM( 0, "[Hauptmenu]" , GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());


};



case 2: // Azeroth-Instanzen

player->ADD_GOSSIP_ITEM(5, "Burg Schattenfang", GOSSIP_SENDER_MAIN, 30);
player->ADD_GOSSIP_ITEM(5, "Das Scharlachrote Kloster", GOSSIP_SENDER_MAIN, 31);
player->ADD_GOSSIP_ITEM(5, "Hoehlen der Zeit", GOSSIP_SENDER_MAIN, 35);
player->ADD_GOSSIP_ITEM(5, "Scholomance", GOSSIP_SENDER_MAIN, 34);
player->ADD_GOSSIP_ITEM(5, "Stratholme", GOSSIP_SENDER_MAIN, 33);
player->ADD_GOSSIP_ITEM(5, "Terrasse der Magister", GOSSIP_SENDER_MAIN, 81);
player->ADD_GOSSIP_ITEM(5, "Zul'Farrak", GOSSIP_SENDER_MAIN, 32);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());



break;

case 3:  // Azeroth-Schlachtzuege

player->ADD_GOSSIP_ITEM(5, "Ahn'Qhiray-20", GOSSIP_SENDER_MAIN, 41);
player->ADD_GOSSIP_ITEM(5, "Ahn'Qhiray-40", GOSSIP_SENDER_MAIN, 42);
player->ADD_GOSSIP_ITEM(5, "Karazhan", GOSSIP_SENDER_MAIN, 40);
player->ADD_GOSSIP_ITEM(5, "Geschmolzener Kern", GOSSIP_SENDER_MAIN, 38);
player->ADD_GOSSIP_ITEM(5, "Naxxramas", GOSSIP_SENDER_MAIN, 43);
player->ADD_GOSSIP_ITEM(5, "Onyxia's Hort", GOSSIP_SENDER_MAIN, 37);
player->ADD_GOSSIP_ITEM(5, "Schwarzfelsspitze", GOSSIP_SENDER_MAIN, 36);
player->ADD_GOSSIP_ITEM(5, "Sonnenbrunenplateau", GOSSIP_SENDER_MAIN, 82);
player->ADD_GOSSIP_ITEM(5, "Zul'Aman", GOSSIP_SENDER_MAIN, 80);
player->ADD_GOSSIP_ITEM(5, "Zul'Gurub", GOSSIP_SENDER_MAIN, 39);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());


break;

case 4: // Scherbenwelt-Inis


player->ADD_GOSSIP_ITEM(5, "Arkatraz", GOSSIP_SENDER_MAIN, 56);
player->ADD_GOSSIP_ITEM(5, "Auchenaikrypta", GOSSIP_SENDER_MAIN, 51);
player->ADD_GOSSIP_ITEM(5, "Der Blutkessel", GOSSIP_SENDER_MAIN, 45);
player->ADD_GOSSIP_ITEM(5, "Der Tiefensumpf", GOSSIP_SENDER_MAIN, 47);
player->ADD_GOSSIP_ITEM(5, "Die Botanika", GOSSIP_SENDER_MAIN, 55);
player->ADD_GOSSIP_ITEM(5, "Die Dampfkammer", GOSSIP_SENDER_MAIN, 49);
player->ADD_GOSSIP_ITEM(5, "Die Mechanar", GOSSIP_SENDER_MAIN, 54);
player->ADD_GOSSIP_ITEM(5, "Die Sklavenunterkunfte", GOSSIP_SENDER_MAIN, 48);
player->ADD_GOSSIP_ITEM(5, "Die zerschmetterten Hallen", GOSSIP_SENDER_MAIN, 46);
player->ADD_GOSSIP_ITEM(5, "Hoellenfeuerbollwerk", GOSSIP_SENDER_MAIN, 44);
player->ADD_GOSSIP_ITEM(5, "Managruft", GOSSIP_SENDER_MAIN, 50);
player->ADD_GOSSIP_ITEM(5, "Schattenlabyrinth", GOSSIP_SENDER_MAIN, 53);
player->ADD_GOSSIP_ITEM(5, "Sethekkhallen", GOSSIP_SENDER_MAIN, 52);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());


break;

case 5: // scherbenwelt-Schlachtzuege


player->ADD_GOSSIP_ITEM(5, "Festung der Stuerme", GOSSIP_SENDER_MAIN, 57);
player->ADD_GOSSIP_ITEM(5, "Gruuls Unterschlupf", GOSSIP_SENDER_MAIN, 58);
player->ADD_GOSSIP_ITEM(5, "Magtheridons Kammer", GOSSIP_SENDER_MAIN, 59);
player->ADD_GOSSIP_ITEM(5, "Schlangenschrein", GOSSIP_SENDER_MAIN, 60);
player->ADD_GOSSIP_ITEM(5, "Schwarzer Tempel", GOSSIP_SENDER_MAIN, 61);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());

break;

case 84: //Northend 84

if ( player->GetTeam() == ALLIANCE )
{
player->ADD_GOSSIP_ITEM(5, "Eiskrone", GOSSIP_SENDER_MAIN, 605);
player->ADD_GOSSIP_ITEM(5, "Boreanisches Tundra", GOSSIP_SENDER_MAIN, 606);
player->ADD_GOSSIP_ITEM(5, "Sturmgipfel", GOSSIP_SENDER_MAIN, 87);
player->ADD_GOSSIP_ITEM(5, "Zul'Drak", GOSSIP_SENDER_MAIN, 88);
player->ADD_GOSSIP_ITEM(5, "Drachenoede", GOSSIP_SENDER_MAIN, 90);
player->ADD_GOSSIP_ITEM(5, "Grizzly Huegel", GOSSIP_SENDER_MAIN, 91);
player->ADD_GOSSIP_ITEM(5, "Der heulende Fljoerd", GOSSIP_SENDER_MAIN, 92);
player->ADD_GOSSIP_ITEM(5, "Sholazar Becken", GOSSIP_SENDER_MAIN, 93);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
}else{
player->ADD_GOSSIP_ITEM(5, "Eiskrone", GOSSIP_SENDER_MAIN, 605);
player->ADD_GOSSIP_ITEM(5, "Boreanisches Tundra", GOSSIP_SENDER_MAIN, 95);
player->ADD_GOSSIP_ITEM(5, "Sturmgipfel", GOSSIP_SENDER_MAIN, 87);
player->ADD_GOSSIP_ITEM(5, "Zul'Drak", GOSSIP_SENDER_MAIN, 97);
player->ADD_GOSSIP_ITEM(5, "Drachenoede", GOSSIP_SENDER_MAIN, 90);
player->ADD_GOSSIP_ITEM(5, "Grizzly Huegel", GOSSIP_SENDER_MAIN, 100);
player->ADD_GOSSIP_ITEM(5, "Der heulende Fljoerd", GOSSIP_SENDER_MAIN, 101);
player->ADD_GOSSIP_ITEM(5, "Sholazar Becken", GOSSIP_SENDER_MAIN, 93);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
};

break;

case 6: // Hier kommen jetzt die ganzen coords
     
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -13152.0f, 342.72f, 52.395f, 0.0f);



break;

//Scherbenwelt Teleports
case 300:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -248.977615f, 964.944885f, 84.336662f, 0.0f);


break;


case 301:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 50.678101f, 7194.833984f, 22.017532f, 0.0f);


break;


case 302:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -2877.483398f, 4764.440430f, -5.322320f, 0.0f);


break;


case 303:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -1145.949951f, 8182.350098f, 3.602490f, 0.0f);


break;


case 304:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 2726.133789f, 5998.798340f, -11.080065f, 0.0f);


break;


case 305:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 2572.703125f, 3742.430420f, 145.119217f, 0.0f);


break;


case 306:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 3135.320557f, 3976.025879f, 162.889069f, 0.0f);

//Azeroth Teleports

break;


case 307:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -9552.372070f, 94.735458f, 58.884834f, 0.0f);

break;


case 308:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 9285.785156f, -6828.714844f, 19.727798f, 0.0f);


break;


case 309:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -5414.248535f, -374.800903f, 400.293121f, 0.0f);


break;


case 310:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, 2200.281738f, 175.764175f, 50.176960f, 0.0f);


break;


case 311:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 7387.143066f, -6803.121582f, 44.223515f, 0.0f);


break;


case 312:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -5550.801758f, -2855.118408f, 361.456390f, 0.0f);


break;


case 313:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, 848.092285f, 1361.981567f, 54.574860f, 0.0f);


break;


case 314:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -10235.200195f, 1222.469971f, 43.625198f, 0.0f);


break;


case 315:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -9534.920898f, -2346.239502f, 61.819328f, 0.0f);


break;


case 316:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -10592.413086f, 268.848694f, 33.409344f, 0.0f);


break;


case 318:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -813.798279f, -1075.119751f, 48.486366f, 0.0f);


break;


case 319:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -2947.092285f, -1390.870361f, 9.189321f, 0.0f);




break;


case 320:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, 371.726074f, -609.370667f, 155.276596f, 0.0f);


break;


case 321:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -982.275330f, -1809.244751f, 53.051121f, 0.0f);


break;


case 322:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -12212.492188f, 209.350464f, 5.137496f, 0.0f);


break;


case 323:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -6779.200195f, -3423.639893f, 241.667007f, 0.0f);


break;


case 324:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -10424.073242f, -3141.349854f, 22.886642f, 0.0f);

break;


case 325:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -225.921722f, -2636.225586f, 119.770828f, 0.0f);


break;


case 326:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -6869.434570f, -1621.434937f, 243.388596f, 0.0f);


break;


case 327:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -11753.261719f, -3138.071289f, -15.189804f, 0.0f);


break;


case 329:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -7941.067383f, -822.297241f, 130.275116f, 0.0f);


break;


case 330:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, 1792.343750f, -2000.826294f, 72.041779f, 0.0f);


break;


case 331:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, 1598.137329f, -3697.449951f, 104.447372f, 0.0f);


break;


case 332:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 12936.799805f, -6901.390137f, 5.292680f, 0.0f);


break;


case 333:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -3866.752441f, -11929.916016f, 0.708296f, 0.0f);


break;


case 334:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, 10111.299805f, 1557.729980f, 1324.329956f, 0.0f);


break;


case 335:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, 1007.780029f, -4446.220215f, 11.202200f, 0.0f);


break;


case 336:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -2192.620117f, -736.317017f, -13.327400f, 0.0f);


break;


case 337:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -2469.504639f, -11518.453125f, 31.226620f, 0.0f);


break;


case 338:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, 5051.309570f, 231.896942f, 31.392700f, 0.0f);



break;


case 340:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -425.250336f, -1820.374390f, 95.787674f, 0.0f);



break;


case 341:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, 2207.013916f, -1764.029175f, 105.837807f, 0.0f);




break;


case 342:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, 1119.182373f, 675.185059f, 137.863998f, 0.0f);




break;


case 343:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -606.395020f, 2211.750000f, 92.981796f, 0.0f);




break;


case 344:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -4969.020020f, -1726.890015f, -62.126900f, 0.0f);




break;


case 345:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -4325.317383f, -3176.012939f, 36.330490f, 0.0f);




break;


case 346:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -4841.189941f, 1309.439941f, 81.393700f, 0.0f);




break;


case 347:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -7931.200195f, -3414.280029f, 80.736504f, 0.0f);




break;


case 348:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, 3341.360107f, -4603.790039f, 92.502701f, 0.0f);




break;


case 349:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, 4318.530762f, -849.216736f, 287.660522f, 0.0f);




break;


case 351:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -7943.220215f, -2119.090088f, -218.344833f, 0.0f);




break;


case 352:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -7426.870117f, 1005.309998f, 1.133590f, 0.0f);




break;


case 353:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, 6759.180176f, -4419.629883f, 763.213989f, 0.0f);



break;


case 9: 

player->CLOSE_GOSSIP_MENU();
player->GetSession()->SendNotification("Schoenen Tag noch.");


break;

case 20:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -8881.0f, 575.0f, 93.0f, 0.0f);


break;

case 21:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1,9951.89f,2280.55f,1341.39f,0.0f);

break;

case 22:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0,-4981.0f,-881.0f,501.66f,0.0f);


break;

case 23:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530,-4014.0f,-11895.79f,-2.0f,0.0f);


break;

case 24:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -1887.510010f, 5359.379883f, -12.427300f, 0.0f);


break;

case 25:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, 1629.777344f, -4373.210449f, 31.246769, 0.0f);


break;

case 26:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -1196.858398f, 30.147331f, 176.949188f, 0.0f);


break;

case 27:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, 1844.765625f, 237.655991f, 62.275150f, 0.0f);


break;

case 28:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 9400.486328f, -7278.376953f, 14.206780f, 0.0f);


break;

// Azeroth-Inis

case 30:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -234.495087f, 1561.946411f, 76.892143f, 0.0f);


break;

case 31:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, 2870.442627f, -819.985229f, 160.331085f, 0.0f);


break;
case 32:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -6797.278809f, -2903.917969f, 9.953360f,0.0f);


break;
case 33:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, 3359.111572f, -3380.8444238f, 144.781860f,0.0f);


break;
case 34:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, 1267.468628f, -2556.651367f, 94.127983f,0.0f);


break;
case 35:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -8519.718750f, -4297.542480f, -208.441376f, 0.0f);


break;

// Azeroth-Schlachtzuege


case 36:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -7527.129883f, -1224.997437f, 285.733002f,0.0f);


break;
case 37:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -4744.647f, -3752.661133f, 50.427f,3.0f);


break;
case 38:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(409, 1089.6f, -470.19f, -106.41f,0.0f);


break;
case 39:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -11919.073242f, -1202.459374f, 92.298744f,0.0f);


break;
case 40:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(532, -11087.3f, -1977.47f, 49.6135f,0.0f);


break;
case 41:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -8394.730469f, 1485.658447f, 21.038563f,0.0f);


break;
case 42:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -8247.316406f, 1970.156860f, 129.071472f,0.0f);


break;
case 43:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(533, 3006.06f, -3436.72f, 293.891f,0.0f);


break;

// Scherbenwelt-Inis

case 44:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -360.670990f, 3071.899902f, -15.097700f,0.0f);


break;

case 45:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -303.506012f, 3164.820068f, 31.742500f,0.0f);


break;

case 46:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -311.083527f, 3083.291748f, -3.745923f,0.0f);


break;

case 47:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 777.088989f, 6763.450195f, -72.062561f,0.0f);


break;

case 48:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 719.507996f, 6999.339844f, -73.074303f,0.0f);


break;

case 49:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 816.590027f, 6934.669922f, -80.544601f,0.0f);


break;

case 50:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -3079.810059f, 4943.040039f, -101.046997f,0.0f);


break;

case 51:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -3361.959961f, 5225.770020f, -101.047997f,0.0f);


break;

case 52:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -3362.219971f, 4660.410156f, -101.049004f,0.0f);


break;

case 53:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -3645.060059f, 4943.620117f, -101.047997f,0.0f);


break;

case 54:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 2862.409912f, 1546.089966f, 252.158691f,0.0f);


break;

case 55:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 3413.649902f, 1483.319946f, 182.837997f,0.0f);


break;

case 56:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 3311.598145f, 1332.745117f, 505.557251f,0.0f);


break;

// Scherbenwelt-Schlachtzuege

case 57:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 3087.310059f, 1373.790039f, 184.643005f,0.0f);


break;

case 58:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 3549.424072f, 5179.854004f, -4.430779f,0.0f);


break;

case 59:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -313.678986f, 3088.350098f, -116.501999f,0.0f);


break;

case 60:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 830.542908f, 6865.445801f, -63.785503f,0.0f);


break;

case 61:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, -3609.739990f, 328.252014f, 37.307701f,0.0f);


break;

case 80:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 6853.331055f,-7956.031738f, 170.074585f,4.67f);


break;

case 81:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 6853.331055f,-7956.031738f, 170.074585f,4.67f);


break;

case 82:

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(530, 12892.640625f, -7314.847168f, 65.570222f,4.355247f);

break;

// AB HIER NORTHEND ALLIANZ

case 88:
// 88 = ZUL'DRAK     
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 5451.406250f, -2628.971436f, 306.253418f,1.577150f);

break;

case 605:
// 85 = EISKRONE     
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 6224.557969f, -2.641857f, 410.164795f,5.416985f);

break;

case 606:
// 86 = BOREANISCHES TUNDRA     
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 2243.259277f, 5264.776367f, 11.709665f,5.957395f);
break;

case 87:
// 87 = STURMGIPFEL     
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 6121.390625f, -1061.891724f, 402.559570f,1.590555f);
break;

case 89:
// 89 = DALARAN     
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 5804.182129f, 624.308594f, 647.786865f,1.640000f);


break;

case 90:
// 90 = DRACHENÖDE    
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 3546.780029f, 273.084015f, 45.792198f, 1.815140f);


break;

case 91:
// 91 = GRIZZLY HÜGEL    
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 3065.147705f, -2007.577515f, 79.796875f, 5.522248f);


break;

case 92:
// 92 = DER HEULENDE FLJÖRD  
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 616.571411f, -4987.544434f, 3.985763f, 5.291873f);

break;

case 93:
// 93 = SHOLAZAR BECKEN 
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 5596.030762f, 5826.276367f, -67.677391f, 3.567269f);
// ALLIANZ NORTHEND IST HIER ZUENDE
break;
//Horde Northend fängt hier an


case 95:
//Boreanisches Tundra   
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 2829.370117f, 6166.169922f, 208.820007f,0.959931f);

break;

case 97:
// 97 = GRIZZLY HÜGEL    
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 3065.147705f, -2007.577515f, 79.796875f, 5.522248f);


break;

case 100:
//Grizzly    
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 3852.056152f, -4525.665039f, 209.308899f,0.814193f);

break;

case 101:
//DER HEULENDE FLJÖRD  
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 2670.239990f, -4388.169922f, 284.031006f, 2.321290f);

break;

case 200: //Auswahl Fenster


player->ADD_GOSSIP_ITEM( 5, "Hauptstaedte" , GOSSIP_SENDER_MAIN, 1);
player->ADD_GOSSIP_ITEM( 5, "Azeroth Instanzen" , GOSSIP_SENDER_MAIN, 2);
player->ADD_GOSSIP_ITEM( 5, "Azeroth Raids" , GOSSIP_SENDER_MAIN, 3);
player->ADD_GOSSIP_ITEM( 5, "Scherbenwelt Instanzen" , GOSSIP_SENDER_MAIN, 4);
player->ADD_GOSSIP_ITEM( 5, "Scherbenwelt Raids" , GOSSIP_SENDER_MAIN, 5);
player->ADD_GOSSIP_ITEM( 5, "Gurubashi Arena" , GOSSIP_SENDER_MAIN, 6);
player->ADD_GOSSIP_ITEM( 5, "Nordend" , GOSSIP_SENDER_MAIN, 84);
player->ADD_GOSSIP_ITEM( 5, "Playertreff" , GOSSIP_SENDER_MAIN, 600);

player->ADD_GOSSIP_ITEM( 0, "Schoenen Tag noch!" , GOSSIP_SENDER_MAIN, 9);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());


break;

case 600: 
if (player->GetTeam() == ALLIANCE )
{

player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -11394.800000f, -4699.590000f, 5.977820f, 2.587900f);
player->GetSession()->SendNotification("Fuer die Allianz!");
}
else
{
	
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(1, -11856.000000f, -4759.160000f, 6.204370f, 0.302364f);
player->GetSession()->SendNotification("Fuer die Horde!");
}
break;
}


}

bool GossipSelect_teleporter(Player *player, Creature *_Creature, uint32

sender, uint32 action )

{
// Der Teleporter selbst
if (sender == GOSSIP_SENDER_MAIN)
SendDefaultMenu_teleporter(player, _Creature, action   );

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
newscript->pGOHello = NULL;
newscript->pAreaTrigger = NULL;
newscript->pItemQuestAccept = NULL;
newscript->pGOQuestAccept = NULL;
newscript->pGOChooseReward = NULL;
newscript->RegisterSelf();
}