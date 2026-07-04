#pragma once

enum { MAX_GAME_ALIAS_LEN = 50 };

const char* checkGameAlias(const char* aRomName);
bool registerGameAlias(const char* aliasName, const char* romName);
