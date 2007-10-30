/***************************************************************************
 *   Copyright (C) 2006 by FThauer FHammer   *
 *   f.thauer@web.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef GAME_DEFS_H
#define GAME_DEFS_H

#define MIN_NUMBER_OF_PLAYERS		2
#define MAX_NUMBER_OF_PLAYERS		7

#define MIN_GUI_SPEED			1
#define MAX_GUI_SPEED			11

#define DEBUG_MODE			0

#define POKERTH_VERSION_MAJOR	0
#define POKERTH_VERSION_MINOR	6
#define POKERTH_VERSION			((POKERTH_VERSION_MAJOR << 8) | POKERTH_VERSION_MINOR)

#define POKERTH_BETA_REVISION	2

enum GameState {
	GAME_STATE_PREFLOP = 0,
	GAME_STATE_FLOP,
	GAME_STATE_TURN,
	GAME_STATE_RIVER,
	GAME_STATE_POST_RIVER,
	GAME_STATE_PREFLOP_SMALL_BLIND = 0xF0,
	GAME_STATE_PREFLOP_BIG_BLIND = 0xF1 };

enum PlayerAction {
	PLAYER_ACTION_NONE = 0,
	PLAYER_ACTION_FOLD,
	PLAYER_ACTION_CHECK,
	PLAYER_ACTION_CALL,
	PLAYER_ACTION_BET,
	PLAYER_ACTION_RAISE,
	PLAYER_ACTION_ALLIN };

enum PlayerActionCode
{
	ACTION_CODE_VALID = 0,
	ACTION_CODE_INVALID_STATE,
	ACTION_CODE_NOT_YOUR_TURN,
	ACTION_CODE_NOT_ALLOWED
};


enum Button {
	BUTTON_NONE = 0,
	BUTTON_DEALER,
	BUTTON_SMALL_BLIND,
	BUTTON_BIG_BLIND };

struct ServerStats
{
	ServerStats() : numberOfPlayersOnServer(0), totalPlayersEverLoggedIn(0), totalGamesEverStarted(0) {}
	unsigned numberOfPlayersOnServer;
	unsigned totalPlayersEverLoggedIn;
	unsigned totalGamesEverStarted;
};

#endif
