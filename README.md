# LilithPort Alpha
LilithPort is a UDP multiplayer/netplay program for 2D Fighter Maker games. It includes chat and makes accommodations for players who cannot forward their ports. LilithPort is based off MT Special Edition, which is in turn based off LunaPort.

LilithPort 1.08 updated this to include UPnP, a new way to connect without the need of Port Forwarding. While older versions of LilithPort have been translated, 1.08 never was, so I've created this branch of LilithPort to do so.

> LilithPort requires .NET Framework 3.5 and Visual C++ 2015 redistributable
> [.NET Framework 3.5](https://www.microsoft.com/en-us/download/details.aspx?id=21)
> [Visual C++](https://aka.ms/vs/17/release/vc_redist.x64.exe)

LilithPort Alpha is a slightly modified, as it was easier to focus on the key parts that Pokemon: Close Combat needed than focusing on a 100% faithful port of the existing 1.08 code. Major changes of note are security patches that prevent players from getting access to unobfuscated IP addresses, and the removal of the MTSP server link on Server Creation.


# Games
 LilithPort Alpha is compatible with any Fighter Maker game, and is backwards compatible with older versions of LilithPort.

 This was designed specifically to help [Pokemon: Close Combat](https://wiki.gbl.gg/w/Pokemon:_Close_Combat) but is also compatible with many older games like:
 - [Pokémon Type: Wild](http://oneweakness.com/pokemon-type-wild.html)
 - [Vanguard Princess](https://wiki.gbl.gg/w/Vanguard_Princess)
 - [WonderfulWorld](http://www55.atwiki.jp/ainefill_oinusama/pages/111.html)


# Public Servers

As of writing, these are the servers that are mostly up 24/7. The servers towards the top tend to be up and more active than the ones on the bottom.

### Studios Server
MzAyODI2NDgzNw==:7500

### Wonderful World's Server
yukari.mydns.jp:60512

### PKMN:CC's Backup Server
MzQwNzIwNDUz:7501

### Japanese Public Server
NDI3NzMwNjkwNw==:7500 


# UPnP
UPnP Support on an english client is the main feature of this LilithPort release. Here's how to navigate to it.

1. Launch LilithPort Alpha. You'll be greeted by a Server Setup screen.
2. You will see a section called UPnP Toggle. Choose the port you wish to use for UPnP (Default/Suggested: 7500).
3. Press "On" to enabled UPnP on that port.
4. Either create a server (Server Button -> Click OK) or Host on UPnP while joining a server (Host Button -> Enter Server Address -> Click Connect).

And that's it, you're ready to play.

If you run into an error when enabling UPnP, odds are you have a network configuration that disallows UPnP. This is often true for extremely outdated networks, such as direct-connect via modem, or on very regulated networks like Schools.


# Additional Info

This version of LilithPort unfortunately receives false positives from antiviruses pretty commonly. If you get one, you'll have to add an exception for it.

The old English LilithPort repository also has a lot of great info about LilithPort in general if you want more information. See it [Here!](https://github.com/oldmud0/LilithPort)

Pokemon: Close Combat also has another page that's used as a netplay guide for LilithPort that you can find [Here.](https://wiki.gbl.gg/w/Pokemon:_Close_Combat/Netplay)


# Thanks

Thanks to those who helped write the original LunaPort, MTSP, and LilithPorts for keeping this dinosaur engine line.

Thanks to oldmud0 for their original translation and coding work, as without it, Alpha would've been impossible.
