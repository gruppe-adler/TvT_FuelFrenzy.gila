params ["_type", "_pos", "_dir", "_side"];

_pos params ["_posX", "_posY"];

private _busType = "gm_gc_army_ural44202";
private _carType = "Car";

private _nearBusses = nearestObjects [_pos, [_busType, _carType], 30];
private _bussesNear = false;
{
    private _bus = _x;
    
    if (!alive _bus) then {
      {
        detach _x;
        deleteVehicle _x;
      } forEach attachedObjects _bus;
      deleteVehicle _bus;
    };

    if (alive _bus) then {
        _bussesNear = true;
    };
} forEach _nearBusses;

if (_bussesNear) exitWith {
    private _playersOfSide = [];
    { 
        if (_x getVariable ["FF_originalSide", sideUnknown] == _side) then { _playersOfSide pushBackUnique _x; };
    } forEach (playableUnits + switchableUnits);
    ["Remove the vehicles near your spawn to get a new car! Then try again."] remoteExec ["hint", _playersOfSide];

};

private _vehicle = createVehicle [_type, [_posX, _posY, 2], [], 0, "CAN_COLLIDE"];
_vehicle setDir _dir;


if (_type == "UK3CB_CHC_C_Pickup") then {
    if (_side == west) then {
        [_vehicle,["ADM_1",1], true] call BIS_fnc_initVehicle;
    } else {
        [_vehicle,["CHDZZ",1], true] call BIS_fnc_initVehicle;
    };
};