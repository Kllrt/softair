//No need to speak/Textchat
0 fadeRadio 0;
player setSpeaker "NoVoice";
enableSentences false;
enableRadio false;
player disableConversation true;



DS_BB_Ammo    = ["softair_B_6mm_BB"];       //Wich bullets cause the "HIT!" effects?
DS_RespawnPos = getMarkerPos "RespawnPos";  //RespawnPosition after beeing hit
DS_IsHit      = false;                      //Check if he was hit (if beeing hit multiple times -> Not beeing triggered twice)
player setVariable ["DS_MyName",profileName,true];			//Set the Name as PubVar, so others can access it

DS_fnc_HandleDamage =
{
	params["_unit","_hitSelection","_damage","_source","_Projectile","_hitPartIndex","_instigator","_hitPoint"];

	if (_Projectile in DS_BB_Ammo) then
	{
		_damage = 0;
		if(!DS_IsHit)then
		{
			DS_IsHit = true;
			disableUserInput true;
			_NameOfInstigator = _instigator getVariable ["DS_MyName","Unkown"];
			[_unit,_NameOfInstigator] spawn
			{
				params ["_unit","_insti"];
				//Strip the _unit of all items:
				removeAllItems _unit;
				removeAllItemsWithMagazines _unit;
				removeAllWeapons _unit;
				{_unit removeMagazines _x;}forEach magazines _unit;
				
				_unit playMove "amovpknlmstpsraswrfldnon";			//Animation Name (i think that one was kneeling)
				playSound3D ["A3\Sounds_F\sfx\blip1.wav", _unit];	//Sound to play, when hit
				systemchat format["Hit by: %1", _insti ];			//quick n dirty feedback who hit you
				hint format["Hit by: %1", _insti];					//quick n dirty feedback who hit you
				
				uisleep 2;											//Wait a bit
				
				_unit setPos DS_RespawnPos;							//move the guy to the Respawn/Waiting Area
				disableUserInput false;								//Enable UserInput again
				DS_IsHit = false;									//Reset to false :D
			};
		};
	};
	_damage
};

player addEventHandler["handleDamage",{_this call DS_fnc_HandleDamage;}];