// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestServerProject : ModuleRules
{
	public TestServerProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"UMG",
			"EnhancedInput",
			"Networking",
            "Sockets",
            "Niagara"
        });
	}
}
