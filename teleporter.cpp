#include "GossipDef.h"
#include "Player.h"
#include "precompiled.h"
#include "sc_gossip.h"

// Coded by Tornado

bool GossipHello_teleporter(Player *player, Creature *_Creature)
{
    player->SetTaxiCheater(true);

player->ADD_GOSSIP_ITEM( 5, "Hauptstaedte" , GOSSIP_SENDER_MAIN, 1);
player->ADD_GOSSIP_ITEM( 5, "Azeroth Instanzen" , GOSSIP_SENDER_MAIN, 2);
player->ADD_GOSSIP_ITEM( 5, "Azeroth Schlachtzüge" , GOSSIP_SENDER_MAIN, 3);
player->ADD_GOSSIP_ITEM( 5, "Scherbenwelt Instanzen" , GOSSIP_SENDER_MAIN, 4);
player->ADD_GOSSIP_ITEM( 5, "Scherbenwelt Schlachtzüge" , GOSSIP_SENDER_MAIN, 5);
player->ADD_GOSSIP_ITEM( 5, "Gurubashi Arena" , GOSSIP_SENDER_MAIN, 6);
player->ADD_GOSSIP_ITEM( 5, "Northend" , GOSSIP_SENDER_MAIN, 84);
player->ADD_GOSSIP_ITEM( 0, "Schönen Tag noch!" , GOSSIP_SENDER_MAIN, 9);
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

case 1: //Haupstaedte

if ( player->GetTeam() == ALLIANCE )
{
player->ADD_GOSSIP_ITEM( 5, "Sturmwind" , GOSSIP_SENDER_MAIN, 20);
player->ADD_GOSSIP_ITEM( 5, "Darnassus" , GOSSIP_SENDER_MAIN, 21);
player->ADD_GOSSIP_ITEM( 5, "Eisenschmiede" , GOSSIP_SENDER_MAIN, 22);
player->ADD_GOSSIP_ITEM( 5, "Exodar" , GOSSIP_SENDER_MAIN, 23);
player->ADD_GOSSIP_ITEM( 5, "Stattrath" , GOSSIP_SENDER_MAIN, 24);
player->ADD_GOSSIP_ITEM( 0, "[Hauptmenu]" , GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());

}else{
player->ADD_GOSSIP_ITEM( 5, "Orgrimmar" , GOSSIP_SENDER_MAIN, 25);
player->ADD_GOSSIP_ITEM( 5, "Donnerfeld" , GOSSIP_SENDER_MAIN, 26);
player->ADD_GOSSIP_ITEM( 5, "Unterstadt" , GOSSIP_SENDER_MAIN, 27);
player->ADD_GOSSIP_ITEM( 5, "Silbermond" , GOSSIP_SENDER_MAIN, 28);
player->ADD_GOSSIP_ITEM( 5, "Stattrath" , GOSSIP_SENDER_MAIN, 24);
player->ADD_GOSSIP_ITEM( 0, "[Hauptmenu]" , GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());


};

break;

case 2: // Azeroth-Instanzen

player->ADD_GOSSIP_ITEM(5, "Burg Schattenfang", GOSSIP_SENDER_MAIN, 30);
player->ADD_GOSSIP_ITEM(5, "Das Scharlachrote Kloster", GOSSIP_SENDER_MAIN, 31);
player->ADD_GOSSIP_ITEM(5, "Hohlen der Zeit", GOSSIP_SENDER_MAIN, 35);
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


player->ADD_GOSSIP_ITEM(5, "Festung der Stürme", GOSSIP_SENDER_MAIN, 57);
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
player->ADD_GOSSIP_ITEM(5, "Eiskrone", GOSSIP_SENDER_MAIN, 85);
player->ADD_GOSSIP_ITEM(5, "Boreanisches Tundra", GOSSIP_SENDER_MAIN, 86);
player->ADD_GOSSIP_ITEM(5, "Sturmgipfel", GOSSIP_SENDER_MAIN, 87);
player->ADD_GOSSIP_ITEM(5, "Zul'Drak", GOSSIP_SENDER_MAIN, 88);
player->ADD_GOSSIP_ITEM(5, "Dalaran", GOSSIP_SENDER_MAIN, 89);
player->ADD_GOSSIP_ITEM(5, "Drachenoede", GOSSIP_SENDER_MAIN, 90);
player->ADD_GOSSIP_ITEM(5, "Grizzly Huegel", GOSSIP_SENDER_MAIN, 91);
player->ADD_GOSSIP_ITEM(5, "Der heulende Fljoerd", GOSSIP_SENDER_MAIN, 92);
player->ADD_GOSSIP_ITEM(5, "Sholazar Becken", GOSSIP_SENDER_MAIN, 93);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
/* DIESES ELSE ERGIBT NOCH GARKEINEN SINN SOLL ABER BALD EDITIERT WERDEN
ES PORTET AUCH DIE HORDLER ZU DEN ALLIANZ GEBIETEN */
}else{
player->ADD_GOSSIP_ITEM(5, "Eiskrone", GOSSIP_SENDER_MAIN, 85);
player->ADD_GOSSIP_ITEM(5, "Boreanisches Tundra", GOSSIP_SENDER_MAIN, 86);
player->ADD_GOSSIP_ITEM(5, "Sturmgipfel", GOSSIP_SENDER_MAIN, 87);
player->ADD_GOSSIP_ITEM(5, "Zul'Drak", GOSSIP_SENDER_MAIN, 88);
player->ADD_GOSSIP_ITEM(5, "Dalaran", GOSSIP_SENDER_MAIN, 89);
player->ADD_GOSSIP_ITEM(5, "Drachenoede", GOSSIP_SENDER_MAIN, 90);
player->ADD_GOSSIP_ITEM(5, "Grizzly Huegel", GOSSIP_SENDER_MAIN, 91);
player->ADD_GOSSIP_ITEM(5, "Der heulende Fljoerd", GOSSIP_SENDER_MAIN, 92);
player->ADD_GOSSIP_ITEM(5, "Sholazar Becken", GOSSIP_SENDER_MAIN, 93);
player->ADD_GOSSIP_ITEM(0, "[Hauptmenu]", GOSSIP_SENDER_MAIN, 200);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
};

break;

case 6: // Hier kommen jetzt die ganzen coords
 
    
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(0, -13152.0f, 342.72f, 52.395f, 0.0f);





case 9: 

player->CLOSE_GOSSIP_MENU();
player->GetSession()->SendNotification("Schönen Tag noch.");


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

// AB HIER NORTHEND ALLIAZ

case 88:
// 88 = ZUL'DRAK     
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 5451.406250f, -2628.971436f, 306.253418f,1.577150f);

break;

case 85:
// 85 = EISKRONE     
player->CLOSE_GOSSIP_MENU();
player->TeleportTo(571, 6224.557969f, -2.641857f, 410.164795f,5.416985f);

break;

case 86:
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


case 200: //Auswahl Fenster


player->ADD_GOSSIP_ITEM( 5, "Hauptstaedte" , GOSSIP_SENDER_MAIN, 1);
player->ADD_GOSSIP_ITEM( 5, "Azeroth Instanzen" , GOSSIP_SENDER_MAIN, 2);
player->ADD_GOSSIP_ITEM( 5, "Azeroth Raids" , GOSSIP_SENDER_MAIN, 3);
player->ADD_GOSSIP_ITEM( 5, "Scherbenwelt Instanzen" , GOSSIP_SENDER_MAIN, 4);
player->ADD_GOSSIP_ITEM( 5, "Scherbenwelt Raids" , GOSSIP_SENDER_MAIN, 5);
player->ADD_GOSSIP_ITEM( 5, "Gurubashi Arena" , GOSSIP_SENDER_MAIN, 6);
player->ADD_GOSSIP_ITEM( 5, "Northend" , GOSSIP_SENDER_MAIN, 84);
player->ADD_GOSSIP_ITEM( 0, "Tschuess" , GOSSIP_SENDER_MAIN, 9);
player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());


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
