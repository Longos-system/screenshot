/*
 * Copyright (C) 2023 LongOS Team.
 *
 * Author:     chang2005 <389574063@qq.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SCREENSHOTVIEW_H
#define SCREENSHOTVIEW_H

#include <QQuickView>

class ScreenshotView : public QQuickView
{
    Q_OBJECT

public:
    explicit ScreenshotView(QQuickView *parent = nullptr);

    void start();
    void delay(int value);

    Q_INVOKABLE void quit();
    Q_INVOKABLE void saveFile(QRect rect);
    Q_INVOKABLE void copyToClipboard(QRect rect);

    void removeTmpFile();

signals:
    void refresh();
};

#endif // SCREENSHOTVIEW_H
