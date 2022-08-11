#pragma once

#define S_LOG(LogCat, FormatString , ...) UE_LOG(LogTemp, Warning, TEXT("%S: %s"), __FUNCTION__, *FString::Printf(TEXT(FormatString), ##__VA_ARGS__ ) )
