// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Spectrum Database API (spectrum/v1explorer)
// Description:
//   API for spectrum-management functions.
// Documentation:
//   http://developers.google.com/spectrum

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRSpectrum_PawsGetSpectrumBatchRequest;
@class GTLRSpectrum_PawsGetSpectrumRequest;
@class GTLRSpectrum_PawsInitRequest;
@class GTLRSpectrum_PawsNotifySpectrumUseRequest;
@class GTLRSpectrum_PawsRegisterRequest;
@class GTLRSpectrum_PawsVerifyDeviceRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Spectrum query classes.
 */
@interface GTLRSpectrumQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Requests information about the available spectrum for a device at a
 *  location. Requests from a fixed-mode device must include owner information
 *  so the device can be registered with the database.
 *
 *  Method: spectrum.paws.getSpectrum
 */
@interface GTLRSpectrumQuery_PawsGetSpectrum : GTLRSpectrumQuery
// Previous library name was
//   +[GTLQuerySpectrum queryForPawsGetSpectrumWithObject:]

/**
 *  Fetches a @c GTLRSpectrum_PawsGetSpectrumResponse.
 *
 *  Requests information about the available spectrum for a device at a
 *  location. Requests from a fixed-mode device must include owner information
 *  so the device can be registered with the database.
 *
 *  @param object The @c GTLRSpectrum_PawsGetSpectrumRequest to include in the
 *    query.
 *
 *  @returns GTLRSpectrumQuery_PawsGetSpectrum
 */
+ (instancetype)queryWithObject:(GTLRSpectrum_PawsGetSpectrumRequest *)object;

@end

/**
 *  The Google Spectrum Database does not support batch requests, so this method
 *  always yields an UNIMPLEMENTED error.
 *
 *  Method: spectrum.paws.getSpectrumBatch
 */
@interface GTLRSpectrumQuery_PawsGetSpectrumBatch : GTLRSpectrumQuery
// Previous library name was
//   +[GTLQuerySpectrum queryForPawsGetSpectrumBatchWithObject:]

/**
 *  Fetches a @c GTLRSpectrum_PawsGetSpectrumBatchResponse.
 *
 *  The Google Spectrum Database does not support batch requests, so this method
 *  always yields an UNIMPLEMENTED error.
 *
 *  @param object The @c GTLRSpectrum_PawsGetSpectrumBatchRequest to include in
 *    the query.
 *
 *  @returns GTLRSpectrumQuery_PawsGetSpectrumBatch
 */
+ (instancetype)queryWithObject:(GTLRSpectrum_PawsGetSpectrumBatchRequest *)object;

@end

/**
 *  Initializes the connection between a white space device and the database.
 *
 *  Method: spectrum.paws.init
 */
@interface GTLRSpectrumQuery_PawsInit : GTLRSpectrumQuery
// Previous library name was
//   +[GTLQuerySpectrum queryForPawsInitWithObject:]

/**
 *  Fetches a @c GTLRSpectrum_PawsInitResponse.
 *
 *  Initializes the connection between a white space device and the database.
 *
 *  @param object The @c GTLRSpectrum_PawsInitRequest to include in the query.
 *
 *  @returns GTLRSpectrumQuery_PawsInit
 */
+ (instancetype)queryWithObject:(GTLRSpectrum_PawsInitRequest *)object;

@end

/**
 *  Notifies the database that the device has selected certain frequency ranges
 *  for transmission. Only to be invoked when required by the regulator. The
 *  Google Spectrum Database does not operate in domains that require
 *  notification, so this always yields an UNIMPLEMENTED error.
 *
 *  Method: spectrum.paws.notifySpectrumUse
 */
@interface GTLRSpectrumQuery_PawsNotifySpectrumUse : GTLRSpectrumQuery
// Previous library name was
//   +[GTLQuerySpectrum queryForPawsNotifySpectrumUseWithObject:]

/**
 *  Fetches a @c GTLRSpectrum_PawsNotifySpectrumUseResponse.
 *
 *  Notifies the database that the device has selected certain frequency ranges
 *  for transmission. Only to be invoked when required by the regulator. The
 *  Google Spectrum Database does not operate in domains that require
 *  notification, so this always yields an UNIMPLEMENTED error.
 *
 *  @param object The @c GTLRSpectrum_PawsNotifySpectrumUseRequest to include in
 *    the query.
 *
 *  @returns GTLRSpectrumQuery_PawsNotifySpectrumUse
 */
+ (instancetype)queryWithObject:(GTLRSpectrum_PawsNotifySpectrumUseRequest *)object;

@end

/**
 *  The Google Spectrum Database implements registration in the getSpectrum
 *  method. As such this always returns an UNIMPLEMENTED error.
 *
 *  Method: spectrum.paws.register
 */
@interface GTLRSpectrumQuery_PawsRegister : GTLRSpectrumQuery
// Previous library name was
//   +[GTLQuerySpectrum queryForPawsRegisterWithObject:]

/**
 *  Fetches a @c GTLRSpectrum_PawsRegisterResponse.
 *
 *  The Google Spectrum Database implements registration in the getSpectrum
 *  method. As such this always returns an UNIMPLEMENTED error.
 *
 *  @param object The @c GTLRSpectrum_PawsRegisterRequest to include in the
 *    query.
 *
 *  @returns GTLRSpectrumQuery_PawsRegister
 */
+ (instancetype)queryWithObject:(GTLRSpectrum_PawsRegisterRequest *)object;

@end

/**
 *  Validates a device for white space use in accordance with regulatory rules.
 *  The Google Spectrum Database does not support master/slave configurations,
 *  so this always yields an UNIMPLEMENTED error.
 *
 *  Method: spectrum.paws.verifyDevice
 */
@interface GTLRSpectrumQuery_PawsVerifyDevice : GTLRSpectrumQuery
// Previous library name was
//   +[GTLQuerySpectrum queryForPawsVerifyDeviceWithObject:]

/**
 *  Fetches a @c GTLRSpectrum_PawsVerifyDeviceResponse.
 *
 *  Validates a device for white space use in accordance with regulatory rules.
 *  The Google Spectrum Database does not support master/slave configurations,
 *  so this always yields an UNIMPLEMENTED error.
 *
 *  @param object The @c GTLRSpectrum_PawsVerifyDeviceRequest to include in the
 *    query.
 *
 *  @returns GTLRSpectrumQuery_PawsVerifyDevice
 */
+ (instancetype)queryWithObject:(GTLRSpectrum_PawsVerifyDeviceRequest *)object;

@end

NS_ASSUME_NONNULL_END
