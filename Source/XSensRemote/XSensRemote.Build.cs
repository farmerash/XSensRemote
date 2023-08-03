// Copyright 2020. All Rights Reserved.
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class XSensRemote : ModuleRules
	{
		public XSensRemote(ReadOnlyTargetRules Target) : base(Target)
		{
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));

            PublicDependencyModuleNames.AddRange(
				new string[]
				{
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "Sockets",
                    "Networking",
                    "Json",
                    "JsonUtilities",
		    "Slate",
		    "SlateCore"
                }
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
				}
				);

			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
				}
				);
		}
	}
}
