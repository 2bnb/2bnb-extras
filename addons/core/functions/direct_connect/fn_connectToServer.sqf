/* ----------------------------------------------------------------------------
Function: bnb_e_core_fnc_connectToServer

Description:
	Direct Connect to a server using connection details defined in
	`\x\bnb_e\core\config.cpp`

Parameters:
	0: _address - Server address to connect to <STRING>
	1: _port - Server port to connect to <NUMBER>

Returns:
	Nothing

Examples:
	["arma.2bnb.com", 2302] call bnb_e_core_fnc_connectToServer;

Author:
	Arend
	McDiod
	DerZade
	Salbei
---------------------------------------------------------------------------- */
params [["_address", "arma.gruppe-adler.de", [""]], ["_port", 2302, [0]]];

#include "\A3\Ui_f\hpp\defineResincl.inc";
#define UI_DIRECTCONNECTTIMEOUT 5

diag_log (format ["Attempting direct connect to %1:%2", _address, _port]);
bnb_e_directConnectAddress = _address;
bnb_e_directConnectPort = _port;

onEachFrame {
	bnb_e_directConnectStartTime = diag_tickTime;

	_displayMain = findDisplay IDD_MAIN;
	_ctrlServerBrowser = _displayMain displayCtrl IDC_MAIN_MULTIPLAYER;
	ctrlActivate _ctrlServerBrowser;

	onEachFrame {
		ctrlActivate (findDisplay IDD_MULTIPLAYER displayCtrl IDC_MULTI_TAB_DIRECT_CONNECT);

		onEachFrame {
			_ctrlServerAddress = findDisplay IDD_IP_ADDRESS displayCtrl 2300;
			_ctrlServerAddress controlsGroupCtrl IDC_IP_ADDRESS ctrlSetText bnb_e_directConnectAddress;

			_ctrlServerAddress controlsGroupCtrl IDC_IP_PORT ctrlSetText str bnb_e_directConnectPort;

			ctrlActivate (_ctrlServerAddress controlsGroupCtrl IDC_OK);

			onEachFrame {
				_ctrlServerList = findDisplay IDD_MULTIPLAYER displayCtrl IDC_MULTI_SESSIONS;

				_exit = for "_i" from 0 to ((lbSize _ctrlServerList) - 1) do {
					([_ctrlServerList lbText _i,_ctrlServerList lbData _i]) call {
						params [["_serverName", ""], ["_serverData", ""]];

						if (diag_tickTime > (bnb_e_directConnectStartTime + UI_DIRECTCONNECTTIMEOUT)) exitWith {
							diag_log (format ["Direct connect on %1:%2 timed out", bnb_e_directConnectAddress, bnb_e_directConnectPort]);
							onEachFrame {};
							true;
						};

						if (_serverData isEqualTo format ["%1:%2", bnb_e_directConnectAddress, bnb_e_directConnectPort]) exitWith {
							findDisplay IDD_MULTIPLAYER displayCtrl IDC_MULTI_SESSIONS lbSetCurSel _i;

							onEachFrame {
								ctrlActivate (findDisplay IDD_MULTIPLAYER displayCtrl IDC_MULTI_JOIN);

								onEachFrame {
									if (diag_tickTime > bnb_e_directConnectStartTime + UI_DIRECTCONNECTTIMEOUT) then {
										diag_log (format ["Direct connect on %1:%2 timed out", bnb_e_directConnectAddress, bnb_e_directConnectPort]);
										onEachFrame {};
									};

									if (!isNull findDisplay IDD_PASSWORD) then {
										private _display = findDisplay IDD_PASSWORD;
										private _passwordEditBoxCtrl = _display displayCtrl IDC_PASSWORD;

										// No password saved by CBA --> abort here so user can enter password
										if (!isNull _passwordEditBoxCtrl && {ctrlText _passwordEditBoxCtrl == ""}) exitWith {
											onEachFrame {};
										};

										ctrlActivate (_display displayCtrl IDC_OK);
									};

									if (getClientStateNumber >= 3) then {
										diag_log (format ["Direct connect on %1:%2 successful", bnb_e_directConnectAddress, bnb_e_directConnectPort]);
										onEachFrame {};
									};
								};
							};

							true;
						};

						false;
					};

					if (_exit) exitWith {};
				};
			};
		};
	};
};
