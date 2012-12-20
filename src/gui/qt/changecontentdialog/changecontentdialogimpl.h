/*****************************************************************************
 * PokerTH - The open source texas holdem engine                             *
 * Copyright (C) 2006-2011 Felix Hammer, Florian Thauer, Lothar May          *
 *                                                                           *
 * This program is free software: you can redistribute it and/or modify      *
 * it under the terms of the GNU Affero General Public License as            *
 * published by the Free Software Foundation, either version 3 of the        *
 * License, or (at your option) any later version.                           *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU Affero General Public License for more details.                       *
 *                                                                           *
 * You should have received a copy of the GNU Affero General Public License  *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.     *
 *****************************************************************************/
#ifndef CHANGECONTENTDIALOGIMPL_H
#define CHANGECONTENTDIALOGIMPL_H

#ifdef GUI_800x480
#include "ui_changecontentdialog_800x480.h"
#else
#include "ui_changecontentdialog.h"
#endif

enum DialogType { CHANGE_HUMAN_PLAYER_NAME=0, CHANGE_NICK_ALREADY_IN_USE, CHANGE_NICK_INVALID, CHANGE_INET_BAD_GAME_NAME, CHANGE_INET_GAME_NAME_IN_USE };

class ConfigFile;

class changeContentDialogImpl: public QDialog, public Ui::changeContentDialog
{
	Q_OBJECT
public:
	changeContentDialogImpl(QWidget *parent, ConfigFile *config, DialogType t);
	bool eventFilter(QObject *obj, QEvent *event);

public slots:

	void saveContent();

private:
	ConfigFile *myConfig;
	DialogType myType;

};

#endif
