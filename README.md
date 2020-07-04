# Simple Terminal

![](/rice.png)

##### This is my personal build of [Suckless's](https://st.suckless.org) Simple Terminal. 

Each branch of this repository contains a feature implemented on top of the base build of St from Suckless.  

All desired features are then merged into the ***current_config*** branch. 
The current build contains patches from all other branches, other than the alpha patch.

##### Patches: #####

All patches that I have applied are located in [patches](./patches).

##### Use my build: #####

Since my current build supports emoji's, it is required replace libXft with the patched version until the fix gets implemented in the official build.  

[libxft-bgra](https://aur.archlinux.org/packages/libxft-bgra/) is available in the AUR.

Once replacing the standard libXft, you can build and install St by cloning this repository (insuring you are on the current_config branch).

Finally, run:
```shell
# make install
```

After making changes, be sure to include the clean target when rebuilding St:
```shell
# make clean install
```

##### Fonts and colors: #####

*Fonts:*

* [cherry](https://github.com/turquoise-hexagon/cherry)
* [JoyPixels](https://www.joypixels.com)

Cherry is a bitmap font. If there are any issues with displaying this font, make sure the file `/etc/fonts/conf.d/70-no-bitmaps.conf` does not exist. 

*Colors:*

My colorschemes are available in (colors)[./colors].

The current build also supports reading xresources. This is not necessary to replicate my build, but provides added convenience.
