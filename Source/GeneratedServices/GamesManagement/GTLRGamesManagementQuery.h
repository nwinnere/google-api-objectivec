// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Game Management (gamesManagement/v1management)
// Description:
//   The Google Play Game Management API allows developers to manage resources
//   from the Google Play Game service.
// Documentation:
//   https://developers.google.com/games/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRGamesManagement_AchievementResetMultipleForAllRequest;
@class GTLRGamesManagement_EventsResetMultipleForAllRequest;
@class GTLRGamesManagement_ScoresResetMultipleForAllRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Games Management query classes.
 */
@interface GTLRGamesManagementQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Resets the achievement with the given ID for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  Method: gamesManagement.achievements.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_AchievementsReset : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetWithachievementId:]

/** The ID of the achievement used by this method. */
@property(nonatomic, copy, nullable) NSString *achievementId;

/**
 *  Fetches a @c GTLRGamesManagement_AchievementResetResponse.
 *
 *  Resets the achievement with the given ID for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  @param achievementId The ID of the achievement used by this method.
 *
 *  @return GTLRGamesManagementQuery_AchievementsReset
 */
+ (instancetype)queryWithAchievementId:(NSString *)achievementId;

@end

/**
 *  Resets all achievements for the currently authenticated player for your
 *  application. This method is only accessible to whitelisted tester accounts
 *  for your application.
 *
 *  Method: gamesManagement.achievements.resetAll
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_AchievementsResetAll : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetAll]

/**
 *  Fetches a @c GTLRGamesManagement_AchievementResetAllResponse.
 *
 *  Resets all achievements for the currently authenticated player for your
 *  application. This method is only accessible to whitelisted tester accounts
 *  for your application.
 *
 *  @return GTLRGamesManagementQuery_AchievementsResetAll
 */
+ (instancetype)query;

@end

/**
 *  Resets all draft achievements for all players. This method is only available
 *  to user accounts for your developer console.
 *
 *  Method: gamesManagement.achievements.resetAllForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_AchievementsResetAllForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetAllForAllPlayers]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all draft achievements for all players. This method is only available
 *  to user accounts for your developer console.
 *
 *  @return GTLRGamesManagementQuery_AchievementsResetAllForAllPlayers
 */
+ (instancetype)query;

@end

/**
 *  Resets the achievement with the given ID for all players. This method is
 *  only available to user accounts for your developer console. Only draft
 *  achievements can be reset.
 *
 *  Method: gamesManagement.achievements.resetForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_AchievementsResetForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetForAllPlayersWithachievementId:]

/** The ID of the achievement used by this method. */
@property(nonatomic, copy, nullable) NSString *achievementId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets the achievement with the given ID for all players. This method is
 *  only available to user accounts for your developer console. Only draft
 *  achievements can be reset.
 *
 *  @param achievementId The ID of the achievement used by this method.
 *
 *  @return GTLRGamesManagementQuery_AchievementsResetForAllPlayers
 */
+ (instancetype)queryWithAchievementId:(NSString *)achievementId;

@end

/**
 *  Resets achievements with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft
 *  achievements may be reset.
 *
 *  Method: gamesManagement.achievements.resetMultipleForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_AchievementsResetMultipleForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForAchievementsResetMultipleForAllPlayersWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets achievements with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft
 *  achievements may be reset.
 *
 *  @param object The @c
 *    GTLRGamesManagement_AchievementResetMultipleForAllRequest to include in
 *    the query.
 *
 *  @return GTLRGamesManagementQuery_AchievementsResetMultipleForAllPlayers
 */
+ (instancetype)queryWithObject:(GTLRGamesManagement_AchievementResetMultipleForAllRequest *)object;

@end

/**
 *  Get the list of players hidden from the given application. This method is
 *  only available to user accounts for your developer console.
 *
 *  Method: gamesManagement.applications.listHidden
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_ApplicationsListHidden : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForApplicationsListHiddenWithapplicationId:]

/** The application ID from the Google Play developer console. */
@property(nonatomic, copy, nullable) NSString *applicationId;

/**
 *  The maximum number of player resources to return in the response, used for
 *  paging. For any response, the actual number of player resources returned may
 *  be less than the specified `maxResults`.
 */
@property(nonatomic, assign) NSInteger maxResults;

/** The token returned by the previous request. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRGamesManagement_HiddenPlayerList.
 *
 *  Get the list of players hidden from the given application. This method is
 *  only available to user accounts for your developer console.
 *
 *  @param applicationId The application ID from the Google Play developer
 *    console.
 *
 *  @return GTLRGamesManagementQuery_ApplicationsListHidden
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithApplicationId:(NSString *)applicationId;

@end

/**
 *  Resets all player progress on the event with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application.
 *
 *  Method: gamesManagement.events.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_EventsReset : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetWitheventId:]

/** The ID of the event. */
@property(nonatomic, copy, nullable) NSString *eventId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all player progress on the event with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application.
 *
 *  @param eventId The ID of the event.
 *
 *  @return GTLRGamesManagementQuery_EventsReset
 */
+ (instancetype)queryWithEventId:(NSString *)eventId;

@end

/**
 *  Resets all player progress on all events for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  Method: gamesManagement.events.resetAll
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_EventsResetAll : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetAll]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all player progress on all events for the currently authenticated
 *  player. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  @return GTLRGamesManagementQuery_EventsResetAll
 */
+ (instancetype)query;

@end

/**
 *  Resets all draft events for all players. This method is only available to
 *  user accounts for your developer console.
 *
 *  Method: gamesManagement.events.resetAllForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_EventsResetAllForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetAllForAllPlayers]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets all draft events for all players. This method is only available to
 *  user accounts for your developer console.
 *
 *  @return GTLRGamesManagementQuery_EventsResetAllForAllPlayers
 */
+ (instancetype)query;

@end

/**
 *  Resets the event with the given ID for all players. This method is only
 *  available to user accounts for your developer console. Only draft events can
 *  be reset.
 *
 *  Method: gamesManagement.events.resetForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_EventsResetForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetForAllPlayersWitheventId:]

/** The ID of the event. */
@property(nonatomic, copy, nullable) NSString *eventId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets the event with the given ID for all players. This method is only
 *  available to user accounts for your developer console. Only draft events can
 *  be reset.
 *
 *  @param eventId The ID of the event.
 *
 *  @return GTLRGamesManagementQuery_EventsResetForAllPlayers
 */
+ (instancetype)queryWithEventId:(NSString *)eventId;

@end

/**
 *  Resets events with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft events may
 *  be reset.
 *
 *  Method: gamesManagement.events.resetMultipleForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_EventsResetMultipleForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForEventsResetMultipleForAllPlayersWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets events with the given IDs for all players. This method is only
 *  available to user accounts for your developer console. Only draft events may
 *  be reset.
 *
 *  @param object The @c GTLRGamesManagement_EventsResetMultipleForAllRequest to
 *    include in the query.
 *
 *  @return GTLRGamesManagementQuery_EventsResetMultipleForAllPlayers
 */
+ (instancetype)queryWithObject:(GTLRGamesManagement_EventsResetMultipleForAllRequest *)object;

@end

/**
 *  Hide the given player's leaderboard scores from the given application. This
 *  method is only available to user accounts for your developer console.
 *
 *  Method: gamesManagement.players.hide
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_PlayersHide : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForPlayersHideWithapplicationId:playerId:]

/** The application ID from the Google Play developer console. */
@property(nonatomic, copy, nullable) NSString *applicationId;

/**
 *  A player ID. A value of `me` may be used in place of the authenticated
 *  player's ID.
 */
@property(nonatomic, copy, nullable) NSString *playerId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Hide the given player's leaderboard scores from the given application. This
 *  method is only available to user accounts for your developer console.
 *
 *  @param applicationId The application ID from the Google Play developer
 *    console.
 *  @param playerId A player ID. A value of `me` may be used in place of the
 *    authenticated player's ID.
 *
 *  @return GTLRGamesManagementQuery_PlayersHide
 */
+ (instancetype)queryWithApplicationId:(NSString *)applicationId
                              playerId:(NSString *)playerId;

@end

/**
 *  Unhide the given player's leaderboard scores from the given application.
 *  This method is only available to user accounts for your developer console.
 *
 *  Method: gamesManagement.players.unhide
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_PlayersUnhide : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForPlayersUnhideWithapplicationId:playerId:]

/** The application ID from the Google Play developer console. */
@property(nonatomic, copy, nullable) NSString *applicationId;

/**
 *  A player ID. A value of `me` may be used in place of the authenticated
 *  player's ID.
 */
@property(nonatomic, copy, nullable) NSString *playerId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Unhide the given player's leaderboard scores from the given application.
 *  This method is only available to user accounts for your developer console.
 *
 *  @param applicationId The application ID from the Google Play developer
 *    console.
 *  @param playerId A player ID. A value of `me` may be used in place of the
 *    authenticated player's ID.
 *
 *  @return GTLRGamesManagementQuery_PlayersUnhide
 */
+ (instancetype)queryWithApplicationId:(NSString *)applicationId
                              playerId:(NSString *)playerId;

@end

/**
 *  Resets scores for the leaderboard with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application.
 *
 *  Method: gamesManagement.scores.reset
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_ScoresReset : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetWithleaderboardId:]

/** The ID of the leaderboard. */
@property(nonatomic, copy, nullable) NSString *leaderboardId;

/**
 *  Fetches a @c GTLRGamesManagement_PlayerScoreResetResponse.
 *
 *  Resets scores for the leaderboard with the given ID for the currently
 *  authenticated player. This method is only accessible to whitelisted tester
 *  accounts for your application.
 *
 *  @param leaderboardId The ID of the leaderboard.
 *
 *  @return GTLRGamesManagementQuery_ScoresReset
 */
+ (instancetype)queryWithLeaderboardId:(NSString *)leaderboardId;

@end

/**
 *  Resets all scores for all leaderboards for the currently authenticated
 *  players. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  Method: gamesManagement.scores.resetAll
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_ScoresResetAll : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetAll]

/**
 *  Fetches a @c GTLRGamesManagement_PlayerScoreResetAllResponse.
 *
 *  Resets all scores for all leaderboards for the currently authenticated
 *  players. This method is only accessible to whitelisted tester accounts for
 *  your application.
 *
 *  @return GTLRGamesManagementQuery_ScoresResetAll
 */
+ (instancetype)query;

@end

/**
 *  Resets scores for all draft leaderboards for all players. This method is
 *  only available to user accounts for your developer console.
 *
 *  Method: gamesManagement.scores.resetAllForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_ScoresResetAllForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetAllForAllPlayers]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets scores for all draft leaderboards for all players. This method is
 *  only available to user accounts for your developer console.
 *
 *  @return GTLRGamesManagementQuery_ScoresResetAllForAllPlayers
 */
+ (instancetype)query;

@end

/**
 *  Resets scores for the leaderboard with the given ID for all players. This
 *  method is only available to user accounts for your developer console. Only
 *  draft leaderboards can be reset.
 *
 *  Method: gamesManagement.scores.resetForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_ScoresResetForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetForAllPlayersWithleaderboardId:]

/** The ID of the leaderboard. */
@property(nonatomic, copy, nullable) NSString *leaderboardId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets scores for the leaderboard with the given ID for all players. This
 *  method is only available to user accounts for your developer console. Only
 *  draft leaderboards can be reset.
 *
 *  @param leaderboardId The ID of the leaderboard.
 *
 *  @return GTLRGamesManagementQuery_ScoresResetForAllPlayers
 */
+ (instancetype)queryWithLeaderboardId:(NSString *)leaderboardId;

@end

/**
 *  Resets scores for the leaderboards with the given IDs for all players. This
 *  method is only available to user accounts for your developer console. Only
 *  draft leaderboards may be reset.
 *
 *  Method: gamesManagement.scores.resetMultipleForAllPlayers
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeGamesManagementGames
 */
@interface GTLRGamesManagementQuery_ScoresResetMultipleForAllPlayers : GTLRGamesManagementQuery
// Previous library name was
//   +[GTLQueryGamesManagement queryForScoresResetMultipleForAllPlayersWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Resets scores for the leaderboards with the given IDs for all players. This
 *  method is only available to user accounts for your developer console. Only
 *  draft leaderboards may be reset.
 *
 *  @param object The @c GTLRGamesManagement_ScoresResetMultipleForAllRequest to
 *    include in the query.
 *
 *  @return GTLRGamesManagementQuery_ScoresResetMultipleForAllPlayers
 */
+ (instancetype)queryWithObject:(GTLRGamesManagement_ScoresResetMultipleForAllRequest *)object;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
