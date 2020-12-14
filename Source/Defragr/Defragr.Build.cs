// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Defragr : ModuleRules
{
	public Defragr(ReadOnlyTargetRules Target) : base (Target)
	{
		PrivatePCHHeaderFile = "Defragr.h";

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
