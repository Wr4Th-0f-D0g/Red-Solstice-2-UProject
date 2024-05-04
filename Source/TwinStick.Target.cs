using UnrealBuildTool;

public class TwinStickTarget : TargetRules {
	public TwinStickTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ReplicationGraph",
			"TwinStick",
		});
	}
}
