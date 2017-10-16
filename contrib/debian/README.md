
Debian
====================
This directory contains files used to package aghilbitd/aghilbit-qt
for Debian-based Linux systems. If you compile aghilbitd/aghilbit-qt yourself, there are some useful files here.

## aghilbit: URI support ##


aghilbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install aghilbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your aghilbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/aghilbit128.png` to `/usr/share/pixmaps`

aghilbit-qt.protocol (KDE)

