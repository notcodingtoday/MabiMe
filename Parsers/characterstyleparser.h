/*
 MabiMe Character Simulator - by Yai (Sophie N)
 Email: sinoc300@gmail.com
 Copyright (C) 2016

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

#ifndef CHARACTERSTYLEPARSER_H
#define CHARACTERSTYLEPARSER_H

#include <QString>
#include <QByteArray>
#include <QImage>

#include "Parsers/localemaphelper.h"
#include "Parsers/xmlparser.h"
namespace CharacterStyle {
    const int MALE_HAIR_STYLE = 0;
    const int FEMALE_HAIR_STYLE = 1;
    const int MALE_FACE = 2;
    const int FEMALE_FACE = 3;
    const int HAIR_COLOUR = 4;
    const int EYE_COLOUR = 5;
    const int SKIN_COLOUR = 6;
    const int UNKNOWN_COLOUR = -1;
    struct Object {
        int categoryType;
        QImage icon;
        QString name = "";
        int entryID = 0;
    };
};

class CharacterStyleParser : public XMLParser
{
public:
    CharacterStyleParser(QString name, QByteArray xml, LocaleMapHelper *localeMap = nullptr);
    QList<CharacterStyle::Object*> styles;
    ~CharacterStyleParser();
protected:
    virtual void parseFile();
signals:

public slots:
};

#endif // CHARACTERSTYLEPARSER_H
