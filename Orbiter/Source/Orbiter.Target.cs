
using UnrealBuildTool;
using System.Collections.Generic;

public class OrbiterTarget : TargetRules
{
	public OrbiterTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "Orbiter" } );
	}
}
