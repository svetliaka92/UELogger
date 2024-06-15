#pragma once

#define S_LOG(FormatString , ...) UE_LOG(LogTemp, Warning, TEXT("%S: %s"), __FUNCTION__, *FString::Printf(TEXT(FormatString), ##__VA_ARGS__ ) )
#define S_LOG_ERROR(FormatString , ...) UE_LOG(LogTemp, Error, TEXT("%S: %s"), __FUNCTION__, *FString::Printf(TEXT(FormatString), ##__VA_ARGS__ ) )
