Re-implementing the PlanetSide game client to learn how it works and make improvements to it. I only expect to work on this when I feel like it and focus on areas that interest me the most, so feel free to contribute.
I am using Ghidra for this project due to its accessibility to potential contributors. You must provide your own copy of the latest PlanetSide game files in the `_game_` folder.
The openside.exe binary has been patched to replace the original WinMain with our own from openside.dll.

## Building
I'm insane and using Visual C 6.0, but it hopefully compiles as-is in any newer msvc. Just replace the vcvars32.bat call with your own.
