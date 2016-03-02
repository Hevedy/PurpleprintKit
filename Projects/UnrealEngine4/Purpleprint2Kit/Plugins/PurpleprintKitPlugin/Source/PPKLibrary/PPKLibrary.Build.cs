/*
===========================================================================
This code is part of the "Source Code" content in
Purpleprint 2 - Kit by Hevedy <https://github.com/Hevedy>
<https://github.com/Hevedy/PurpleprintKit>

The MIT License (MIT)
Copyright (c) 2014-2016 Hevedy <https://github.com/Hevedy>
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
===========================================================================
*/

/*
================================================
PPKLibrary.Build.cs
================================================
*/


namespace UnrealBuildTool.Rules
{
    public class PPKLibrary : ModuleRules
	{
		public PPKLibrary(TargetInfo Target)
		{
			PublicIncludePaths.AddRange(
				new string[] {
					"PPKLibrary/Core",
					// ... add public include paths required here ...
				}
				);

			PrivateIncludePaths.AddRange(
				new string[] {
					"PPKLibrary/Core",
					// ... add other private include paths required here ...
				}
				);

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"RHI",
				"RenderCore",
				"HTTP",
				"UMG", "Slate", "SlateCore",
				"ImageWrapper",
				"PhysX", "APEX"
					// ... add other public dependencies that you statically link with here ...
				}
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					// ... add private dependencies that you statically link with here ...
				}
				);

			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
				);
		}
	}
}
