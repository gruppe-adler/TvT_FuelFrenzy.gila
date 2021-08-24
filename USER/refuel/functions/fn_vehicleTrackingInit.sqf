if (isDedicated) exitWith {};

{
    _x addEventHandler ["GetInMan", {
        params ["_unit", "_role", "_vehicle", "_turret"];

        if (_role == "driver") then {
            private _side = _unit getVariable ["FF_originalSide", sideUnknown];
            private _trackedForSide = _vehicle getVariable ["FF_trackedForSide", sideUnknown];

            if (_side != _trackedForSide && local _unit) then {
                ["Your fuel truck was stolen."] remoteExec ["hintSilent", _trackedForSide];

                hintSilent parseText ("<t color='#FFFFFF'><t size='1'><t align='center'>Taking vehicle into possession for your side.</t>");
                _vehicle setVariable ["FF_trackedForSide", _side, true];

                private _flag = _vehicle getVariable ["FF_fuelBusFlag", objNull];
                
                private _flagTexture = call {
                    switch (_side) do { 
                      case west : {  "\UK3CB_Factions\addons\UK3CB_Factions_TKM\Flag\tkm_o_flag_co.paa" }; 
                      case east : {  "\UK3CB_Factions\addons\UK3CB_Factions_CHC\Flag\CHC_flag_co.paa" }; 
                      case independent : {  "\A3\Data_F_Exp\Flags\flag_VIPER_CO.paa" };
                      default { "" }; 
                    };
                  };
                  _flag setFlagTexture _flagTexture;
            };
        };
    }];

} forEach playableUnits + switchableUnits;

execVM "USER\refuel\functions\fn_vehicleTrackingLoop.sqf";