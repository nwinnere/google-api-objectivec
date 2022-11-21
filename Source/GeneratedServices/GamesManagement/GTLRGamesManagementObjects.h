// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Game Services Management API (gamesManagement/v1management)
// Description:
//   The Management API for Google Play Game Services.
// Documentation:
//   https://developers.google.com/games/services

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRGamesManagement_AchievementResetResponse;
@class GTLRGamesManagement_GamesPlayedResource;
@class GTLRGamesManagement_GamesPlayerExperienceInfoResource;
@class GTLRGamesManagement_GamesPlayerLevelResource;
@class GTLRGamesManagement_HiddenPlayer;
@class GTLRGamesManagement_Player;
@class GTLRGamesManagement_Player_Name;
@class GTLRGamesManagement_PlayerScoreResetResponse;
@class GTLRGamesManagement_ProfileSettings;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  This is a JSON template for achievement reset all response.
 */
@interface GTLRGamesManagement_AchievementResetAllResponse : GTLRObject

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#achievementResetAllResponse.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The achievement reset results. */
@property(nonatomic, strong, nullable) NSArray<GTLRGamesManagement_AchievementResetResponse *> *results;

@end


/**
 *  This is a JSON template for multiple achievements reset all request.
 */
@interface GTLRGamesManagement_AchievementResetMultipleForAllRequest : GTLRObject

/** The IDs of achievements to reset. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *achievementIds;

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#achievementResetMultipleForAllRequest.
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  This is a JSON template for an achievement reset response.
 */
@interface GTLRGamesManagement_AchievementResetResponse : GTLRObject

/**
 *  The current state of the achievement. This is the same as the initial state
 *  of the achievement.
 *  Possible values are:
 *  - "HIDDEN"- Achievement is hidden.
 *  - "REVEALED" - Achievement is revealed.
 *  - "UNLOCKED" - Achievement is unlocked.
 */
@property(nonatomic, copy, nullable) NSString *currentState;

/** The ID of an achievement for which player state has been updated. */
@property(nonatomic, copy, nullable) NSString *definitionId;

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#achievementResetResponse.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Flag to indicate if the requested update actually occurred.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *updateOccurred;

@end


/**
 *  This is a JSON template for multiple events reset all request.
 */
@interface GTLRGamesManagement_EventsResetMultipleForAllRequest : GTLRObject

/** The IDs of events to reset. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *eventIds;

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#eventsResetMultipleForAllRequest.
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  This is a JSON template for metadata about a player playing a game with the
 *  currently authenticated user.
 */
@interface GTLRGamesManagement_GamesPlayedResource : GTLRObject

/**
 *  True if the player was auto-matched with the currently authenticated user.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *autoMatched;

/**
 *  The last time the player played the game in milliseconds since the epoch in
 *  UTC.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *timeMillis;

@end


/**
 *  This is a JSON template for 1P/3P metadata about the player's experience.
 */
@interface GTLRGamesManagement_GamesPlayerExperienceInfoResource : GTLRObject

/**
 *  The current number of experience points for the player.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *currentExperiencePoints;

/** The current level of the player. */
@property(nonatomic, strong, nullable) GTLRGamesManagement_GamesPlayerLevelResource *currentLevel;

/**
 *  The timestamp when the player was leveled up, in millis since Unix epoch
 *  UTC.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *lastLevelUpTimestampMillis;

/**
 *  The next level of the player. If the current level is the maximum level,
 *  this should be same as the current level.
 */
@property(nonatomic, strong, nullable) GTLRGamesManagement_GamesPlayerLevelResource *nextLevel;

@end


/**
 *  This is a JSON template for 1P/3P metadata about a user's level.
 */
@interface GTLRGamesManagement_GamesPlayerLevelResource : GTLRObject

/**
 *  The level for the user.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *level;

/**
 *  The maximum experience points for this level.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxExperiencePoints;

/**
 *  The minimum experience points for this level.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *minExperiencePoints;

@end


/**
 *  This is a JSON template for the HiddenPlayer resource.
 */
@interface GTLRGamesManagement_HiddenPlayer : GTLRObject

/**
 *  The time this player was hidden.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hiddenTimeMillis;

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#hiddenPlayer.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The player information. */
@property(nonatomic, strong, nullable) GTLRGamesManagement_Player *player;

@end


/**
 *  This is a JSON template for a list of hidden players.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRGamesManagement_HiddenPlayerList : GTLRCollectionObject

/**
 *  The players.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRGamesManagement_HiddenPlayer *> *items;

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#hiddenPlayerList.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The pagination token for the next page of results. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  This is a JSON template for a Player resource.
 */
@interface GTLRGamesManagement_Player : GTLRObject

/** The base URL for the image that represents the player. */
@property(nonatomic, copy, nullable) NSString *avatarImageUrl;

/** The url to the landscape mode player banner image. */
@property(nonatomic, copy, nullable) NSString *bannerUrlLandscape;

/** The url to the portrait mode player banner image. */
@property(nonatomic, copy, nullable) NSString *bannerUrlPortrait;

/** The name to display for the player. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** An object to represent Play Game experience information for the player. */
@property(nonatomic, strong, nullable) GTLRGamesManagement_GamesPlayerExperienceInfoResource *experienceInfo;

/**
 *  The friend status of the given player, relative to the requester. This is
 *  unset if the player is not sharing their friends list with the game.
 */
@property(nonatomic, copy, nullable) NSString *friendStatus;

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#player.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  Details about the last time this player played a multiplayer game with the
 *  currently authenticated player. Populated for PLAYED_WITH player collection
 *  members.
 */
@property(nonatomic, strong, nullable) GTLRGamesManagement_GamesPlayedResource *lastPlayedWith;

/**
 *  An object representation of the individual components of the player's name.
 *  For some players, these fields may not be present.
 */
@property(nonatomic, strong, nullable) GTLRGamesManagement_Player_Name *name;

/**
 *  The player ID that was used for this player the first time they signed into
 *  the game in question. This is only populated for calls to player.get for the
 *  requesting player, only if the player ID has subsequently changed, and only
 *  to clients that support remapping player IDs.
 */
@property(nonatomic, copy, nullable) NSString *originalPlayerId;

/** The ID of the player. */
@property(nonatomic, copy, nullable) NSString *playerId;

@property(nonatomic, copy, nullable) NSString *playerStattus;

/**
 *  The player's profile settings. Controls whether or not the player's profile
 *  is visible to other players.
 */
@property(nonatomic, strong, nullable) GTLRGamesManagement_ProfileSettings *profileSettings;

/** The player's title rewarded for their game activities. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  An object representation of the individual components of the player's name.
 *  For some players, these fields may not be present.
 */
@interface GTLRGamesManagement_Player_Name : GTLRObject

/**
 *  The family name of this player. In some places, this is known as the last
 *  name.
 */
@property(nonatomic, copy, nullable) NSString *familyName;

/**
 *  The given name of this player. In some places, this is known as the first
 *  name.
 */
@property(nonatomic, copy, nullable) NSString *givenName;

@end


/**
 *  This is a JSON template for a list of leaderboard reset resources.
 */
@interface GTLRGamesManagement_PlayerScoreResetAllResponse : GTLRObject

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#playerScoreResetResponse.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The leaderboard reset results. */
@property(nonatomic, strong, nullable) NSArray<GTLRGamesManagement_PlayerScoreResetResponse *> *results;

@end


/**
 *  This is a JSON template for a list of reset leaderboard entry resources.
 */
@interface GTLRGamesManagement_PlayerScoreResetResponse : GTLRObject

/** The ID of an leaderboard for which player state has been updated. */
@property(nonatomic, copy, nullable) NSString *definitionId;

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#playerScoreResetResponse.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The time spans of the updated score.
 *  Possible values are:
 *  - "ALL_TIME" - The score is an all-time score.
 *  - "WEEKLY" - The score is a weekly score.
 *  - "DAILY" - The score is a daily score.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *resetScoreTimeSpans;

@end


/**
 *  This is a JSON template for profile settings
 */
@interface GTLRGamesManagement_ProfileSettings : GTLRObject

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#profileSettings.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  profileVisible
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *profileVisible;

@end


/**
 *  This is a JSON template for multiple scores reset all request.
 */
@interface GTLRGamesManagement_ScoresResetMultipleForAllRequest : GTLRObject

/**
 *  Uniquely identifies the type of this resource. Value is always the fixed
 *  string gamesManagement#scoresResetMultipleForAllRequest.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The IDs of leaderboards to reset. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *leaderboardIds;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
