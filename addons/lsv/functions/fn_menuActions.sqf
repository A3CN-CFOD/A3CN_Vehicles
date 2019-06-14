//
params ["_vehicle"];


// inicia o sistema de strobe IR
_vehicle call A3CN_fnc_strobeSystem;

// Inicia o sistema de unflip
_vehicle call A3CN_fnc_unflipSystem;




