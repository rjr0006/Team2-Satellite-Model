
using UnrealBuildTool;
using System.Collections.Generic;

public class OrbiterEditorTarget : TargetRules
{
	public OrbiterEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "Orbiter" } );
	}
}
