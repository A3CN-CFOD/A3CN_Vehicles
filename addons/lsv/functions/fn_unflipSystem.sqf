params ["_vehicle"];

[
    _vehicle,											// Object the action is attached to
    "Virar veículo",										// Title of the action
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_takeoff1_ca.paa",	// Idle icon shown on screen
    "\a3\ui_f\data\IGUI\Cfg\holdactions\holdaction_takeoff1_ca.paa",	// Progress icon shown on screen
    "(vectorUp _target) vectorCos (surfaceNormal getPos _target) <0.5 && _target != vehicle _this",						// Condition for the action to be shown
    "(vectorUp _target) vectorCos (surfaceNormal getPos _target) <0.5 && _target != vehicle _caller",						// Condition for the action to progress
    {},													// Code executed when action starts
    {},													// Code executed on every progress tick
    { 
    params ["_target", "_caller", "_actionId", "_arguments"];
    _normalVec = surfaceNormal getPos _target;
	if (!local _target) then {
		[_target,_normalVec] remoteExec ["setVectorUp",_target];
	} else {
		_target setVectorUp _normalVec;
	};
	_target setPosATL [getPosATL _target select 0, getPosATL _target select 1, 0];
    },				// Code executed on completion
    {},													// Code executed on interrupted
    [],													// Arguments passed to the scripts as _this select 3
    12,													// Action duration [s]
    0,													// Priority
    false,												// Remove on completion
    false												// Show in unconscious state 
] remoteExec ["BIS_fnc_holdActionAdd", 0, _vehicle];	// MP compatible implementation
