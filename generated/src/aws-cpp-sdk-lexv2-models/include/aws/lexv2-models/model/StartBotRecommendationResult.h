﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotRecommendationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/TranscriptSourceSetting.h>
#include <aws/lexv2-models/model/EncryptionSetting.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class StartBotRecommendationResult
  {
  public:
    AWS_LEXMODELSV2_API StartBotRecommendationResult();
    AWS_LEXMODELSV2_API StartBotRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StartBotRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot containing the bot recommendation.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation.</p>
     */
    inline StartBotRecommendationResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot containing the bot recommendation.</p>
     */
    inline StartBotRecommendationResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot containing the bot recommendation.</p>
     */
    inline StartBotRecommendationResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline StartBotRecommendationResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline StartBotRecommendationResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline StartBotRecommendationResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale of the bot recommendation to start.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale of the bot recommendation to start.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The identifier of the language and locale of the bot recommendation to start.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale of the bot recommendation to start.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale of the bot recommendation to start.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline StartBotRecommendationResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale of the bot recommendation to start.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline StartBotRecommendationResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale of the bot recommendation to start.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline StartBotRecommendationResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The status of the bot recommendation.</p> <p>If the status is Failed, then
     * the reasons for the failure are listed in the failureReasons field. </p>
     */
    inline const BotRecommendationStatus& GetBotRecommendationStatus() const{ return m_botRecommendationStatus; }

    /**
     * <p>The status of the bot recommendation.</p> <p>If the status is Failed, then
     * the reasons for the failure are listed in the failureReasons field. </p>
     */
    inline void SetBotRecommendationStatus(const BotRecommendationStatus& value) { m_botRecommendationStatus = value; }

    /**
     * <p>The status of the bot recommendation.</p> <p>If the status is Failed, then
     * the reasons for the failure are listed in the failureReasons field. </p>
     */
    inline void SetBotRecommendationStatus(BotRecommendationStatus&& value) { m_botRecommendationStatus = std::move(value); }

    /**
     * <p>The status of the bot recommendation.</p> <p>If the status is Failed, then
     * the reasons for the failure are listed in the failureReasons field. </p>
     */
    inline StartBotRecommendationResult& WithBotRecommendationStatus(const BotRecommendationStatus& value) { SetBotRecommendationStatus(value); return *this;}

    /**
     * <p>The status of the bot recommendation.</p> <p>If the status is Failed, then
     * the reasons for the failure are listed in the failureReasons field. </p>
     */
    inline StartBotRecommendationResult& WithBotRecommendationStatus(BotRecommendationStatus&& value) { SetBotRecommendationStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bot recommendation that you have created.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const{ return m_botRecommendationId; }

    /**
     * <p>The identifier of the bot recommendation that you have created.</p>
     */
    inline void SetBotRecommendationId(const Aws::String& value) { m_botRecommendationId = value; }

    /**
     * <p>The identifier of the bot recommendation that you have created.</p>
     */
    inline void SetBotRecommendationId(Aws::String&& value) { m_botRecommendationId = std::move(value); }

    /**
     * <p>The identifier of the bot recommendation that you have created.</p>
     */
    inline void SetBotRecommendationId(const char* value) { m_botRecommendationId.assign(value); }

    /**
     * <p>The identifier of the bot recommendation that you have created.</p>
     */
    inline StartBotRecommendationResult& WithBotRecommendationId(const Aws::String& value) { SetBotRecommendationId(value); return *this;}

    /**
     * <p>The identifier of the bot recommendation that you have created.</p>
     */
    inline StartBotRecommendationResult& WithBotRecommendationId(Aws::String&& value) { SetBotRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot recommendation that you have created.</p>
     */
    inline StartBotRecommendationResult& WithBotRecommendationId(const char* value) { SetBotRecommendationId(value); return *this;}


    /**
     * <p>A timestamp of the date and time that the bot recommendation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>A timestamp of the date and time that the bot recommendation was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the bot recommendation was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the bot recommendation was created.</p>
     */
    inline StartBotRecommendationResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the bot recommendation was created.</p>
     */
    inline StartBotRecommendationResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The object representing the Amazon S3 bucket containing the transcript, as
     * well as the associated metadata.</p>
     */
    inline const TranscriptSourceSetting& GetTranscriptSourceSetting() const{ return m_transcriptSourceSetting; }

    /**
     * <p>The object representing the Amazon S3 bucket containing the transcript, as
     * well as the associated metadata.</p>
     */
    inline void SetTranscriptSourceSetting(const TranscriptSourceSetting& value) { m_transcriptSourceSetting = value; }

    /**
     * <p>The object representing the Amazon S3 bucket containing the transcript, as
     * well as the associated metadata.</p>
     */
    inline void SetTranscriptSourceSetting(TranscriptSourceSetting&& value) { m_transcriptSourceSetting = std::move(value); }

    /**
     * <p>The object representing the Amazon S3 bucket containing the transcript, as
     * well as the associated metadata.</p>
     */
    inline StartBotRecommendationResult& WithTranscriptSourceSetting(const TranscriptSourceSetting& value) { SetTranscriptSourceSetting(value); return *this;}

    /**
     * <p>The object representing the Amazon S3 bucket containing the transcript, as
     * well as the associated metadata.</p>
     */
    inline StartBotRecommendationResult& WithTranscriptSourceSetting(TranscriptSourceSetting&& value) { SetTranscriptSourceSetting(std::move(value)); return *this;}


    /**
     * <p>The object representing the passwords that were used to encrypt the data
     * related to the bot recommendation results, as well as the KMS key ARN used to
     * encrypt the associated metadata.</p>
     */
    inline const EncryptionSetting& GetEncryptionSetting() const{ return m_encryptionSetting; }

    /**
     * <p>The object representing the passwords that were used to encrypt the data
     * related to the bot recommendation results, as well as the KMS key ARN used to
     * encrypt the associated metadata.</p>
     */
    inline void SetEncryptionSetting(const EncryptionSetting& value) { m_encryptionSetting = value; }

    /**
     * <p>The object representing the passwords that were used to encrypt the data
     * related to the bot recommendation results, as well as the KMS key ARN used to
     * encrypt the associated metadata.</p>
     */
    inline void SetEncryptionSetting(EncryptionSetting&& value) { m_encryptionSetting = std::move(value); }

    /**
     * <p>The object representing the passwords that were used to encrypt the data
     * related to the bot recommendation results, as well as the KMS key ARN used to
     * encrypt the associated metadata.</p>
     */
    inline StartBotRecommendationResult& WithEncryptionSetting(const EncryptionSetting& value) { SetEncryptionSetting(value); return *this;}

    /**
     * <p>The object representing the passwords that were used to encrypt the data
     * related to the bot recommendation results, as well as the KMS key ARN used to
     * encrypt the associated metadata.</p>
     */
    inline StartBotRecommendationResult& WithEncryptionSetting(EncryptionSetting&& value) { SetEncryptionSetting(std::move(value)); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    BotRecommendationStatus m_botRecommendationStatus;

    Aws::String m_botRecommendationId;

    Aws::Utils::DateTime m_creationDateTime;

    TranscriptSourceSetting m_transcriptSourceSetting;

    EncryptionSetting m_encryptionSetting;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
