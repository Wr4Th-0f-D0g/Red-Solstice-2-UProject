using UnrealBuildTool;

public class TwinStickEditorTarget : TargetRules {
	public TwinStickEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ReplicationGraph",
			"TwinStick",
		});
	}
}
