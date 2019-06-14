//
params ["_vehicle"];

// object addAction [title, script, arguments, priority, showWindow, hideOnUse, shortcut, condition, radius, unconscious, selection, memoryPoint] 
_startStrobe = _vehicle addAction 
[
    "Ligar Strobe IR", 
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
	_light_real_obj = "B_IRStrobe" createVehicle [0,0,0];
        _light_real_obj attachTo [(vehicle player),[-0.171,-2.346,-0.406]];
        _light_real_obj setVectorDirAndUp [[0,1,0],[0,0,1]];
	(vehicle _caller) setVariable ["status_light",true,false];
	(vehicle _caller) setVariable ["light_obj",_light_real_obj,true];
	hint "Strobe IR Ligado";
	//_caller removeAction _actionId;

    },
    [],
    1.5, 
    false, 
    true, 
    "",
    "!(vehicle _this getVariable ['status_light',false]) && (typeof vehicle _this) find 'A3CN_LSV' >=0", // _target, _this, _originalTarget
    50,
    false,
    "",
    ""
];
_vehicle setUserActionText [_startStrobe, "<img size='2' image='\a3\ui_f\data\IGUI\Cfg\Actions\beacons_on_ca'/> Ligar strobe IR"];



_stopStrobe = _vehicle addAction 
[
    "Desligar Strobe IR", 
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
	
	detach ((vehicle player) getVariable ["light_obj",objNull]);
	deleteVehicle ((vehicle player) getVariable ["light_obj",objNull]);
	deleteVehicle  (nearestobject [getpos (vehicle _caller),"nvg_targetC"]);
	(vehicle _caller) setVariable ["status_light",false,false];
	(vehicle _caller) setVariable ["light_obj",objNull,false];
	hint "Stobe IR Desligado";

	//_caller removeAction _actionId;

    },
    [],
    1.5, 
    false, 
    true, 
    "",
    "(vehicle _this getVariable ['status_light',false]) && (typeof vehicle _this) find 'A3CN_LSV' >=0", // _target, _this, _originalTarget
     50,
    false,
    "",
    ""
]; 
_vehicle setUserActionText [_stopStrobe, "<img size='2' image='\a3\ui_f\data\IGUI\Cfg\Actions\beacons_off_ca'/> Desligar strobe IR"];



