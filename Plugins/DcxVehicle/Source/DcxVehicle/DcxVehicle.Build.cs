using UnrealBuildTool;

public class DcxVehicle : ModuleRules {
    public DcxVehicle(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
            "PhysicsCore",
        });
    }
}
