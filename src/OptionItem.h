/*
LaunchyQt
Copyright (C) 2018 Samson Wang

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include <QPoint>

namespace launchy {

// general
extern const char*      OPSTION_ALWAYSSHOW;
extern const bool       OPSTION_ALWAYSSHOW_DEFAULT;

extern const char*      OPSTION_ALWAYSTOP;
extern const bool       OPSTION_ALWAYSTOP_DEFAULT;

extern const char*      OPSTION_LOGLEVEL;
extern const int        OPSTION_LOGLEVEL_DEFAULT;

extern const char*      OPSTION_DECORATETEXT;
extern const bool       OPSTION_DECORATETEXT_DEFAULT;

extern const char*      OPSTION_HIDEIFLOSTFOCUS;
extern const bool       OPSTION_HIDEIFLOSTFOCUS_DEFAULT;

extern const char*      OPSTION_ALWAYSCENTER;
extern const int        OPSTION_ALWAYSCENTER_DEFAULT;

extern const char*      OPSTION_DRAGMODE;
extern const bool       OPSTION_DRAGMODE_DEFAULT;

extern const char*      OPTION_APPSTYLE;
extern const char*      OPTION_APPSTYLE_DEFAULT;

extern const char*      OPSTION_SHOWHIDDENFILES;
extern const bool       OPSTION_SHOWHIDDENFILES_DEFAULT;

extern const char*      OPSTION_SHOWNETWORK;
extern const bool       OPSTION_SHOWNETWORK_DEFAULT;

extern const char*      OPSTION_AUTOSUGGESTDELAY;
extern const int        OPSTION_AUTOSUGGESTDELAY_DEFAULT;

extern const char*      OPSTION_REBUILDTIMER;
extern const int        OPSTION_REBUILDTIMER_DEFAULT;

extern const char*      OPSTION_NUMVIEWABLE;
extern const int        OPSTION_NUMVIEWABLE_DEFAULT;

extern const char*      OPSTION_NUMRESULT;
extern const int        OPSTION_NUMRESULT_DEFAULT;

extern const char*      OPSTION_MAXITEMSINHISTORY;
extern const int        OPSTION_MAXITEMSINHISTORY_DEFAULT;

extern const char*      OPSTION_OPAQUENESS;
extern const int        OPSTION_OPAQUENESS_DEFAULT;

extern const char*      OPSTION_FADEIN;
extern const int        OPSTION_FADEIN_DEFAULT;

extern const char*      OPSTION_FADEOUT;
extern const int        OPSTION_FADEOUT_DEFAULT;

extern const char*      OPSTION_SKIN;
extern const char*      OPSTION_SKIN_DEFAULT;

extern const char*      OPSTION_CONDENSEDVIEW;
extern const int        OPSTION_CONDENSEDVIEW_DEFAULT;

extern const char*      OPSTION_HOTKEY;
extern const int        OPSTION_HOTKEY_DEFAULT;

extern const char*      OPSTION_HOTKEYMOD;
extern const int        OPSTION_HOTKEYMOD_DEFAULT;

extern const char*      OPSTION_HOTKEYKEY;
extern const int        OPSTION_HOTKEYKEY_DEFAULT;

extern const char*      OPSTION_VERSION;
extern const int        OPSTION_VERSION_DEFAULT;

extern const char*      OPSTION_POS;
extern const QPoint     OPSTION_POS_DEFAULT;

// update
extern const char*      OPTION_UPDATE_CHECK_ON_STARTUP;
extern const bool       OPTION_UPDATE_CHECK_ON_STARTUP_DEFAULT;

extern const char*      OPTION_UPDATE_CHECK_ON_STARTUP_DELAY;
extern const int        OPTION_UPDATE_CHECK_ON_STARTUP_DELAY_DEFAULT;

extern const char*      OPTION_UPDATE_CHECK_INTERVAL;
extern const int        OPTION_UPDATE_CHECK_INTERVAL_DEFAULT;

extern const char*      OPTION_UPDATE_LAST_CHECK;
extern const char*      OPTION_UPDATE_LAST_CHECK_DEFAULT;

// proxy
extern const char*      OPTION_PROXY_TYPE;
extern const int        OPTION_PROXY_TYPE_DEFAULT;

extern const char*      OPTION_PROXY_SERVER_NAME;
extern const char*      OPTION_PROXY_SERVER_NAME_DEFAULT;

extern const char*      OPTION_PROXY_SERVER_PORT;
extern const char*      OPTION_PROXY_SERVER_PORT_DEFAULT;

extern const char*      OPTION_PROXY_REQUIRE_PASSWORD;
extern const bool       OPTION_PROXY_REQUIRE_PASSWORD_DEFAULT;

extern const char*      OPTION_PROXY_USERNAME;
extern const char*      OPTION_PROXY_USERNAME_DEFAULT;

extern const char*      OPTION_PROXY_PASSWORD;
extern const char*      OPTION_PROXY_PASSWORD_DEFAULT;

}
