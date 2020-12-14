// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DefragrEditorTarget : TargetRules
{
	public DefragrEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Defragr");
	}

	//
	// TargetRules interface.
	//

	
}
