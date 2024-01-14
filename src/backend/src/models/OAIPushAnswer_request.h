/**
 * Study-Test.Online - сервис проведения тестирования
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.1
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPushAnswer_request.h
 *
 * 
 */

#ifndef OAIPushAnswer_request_H
#define OAIPushAnswer_request_H

#include <QJsonObject>

#include "OAIAnswer.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPushAnswer_request : public OAIObject {
public:
    OAIPushAnswer_request();
    OAIPushAnswer_request(QString json);
    ~OAIPushAnswer_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSessionId() const;
    void setSessionId(const QString &session_id);
    bool is_session_id_Set() const;
    bool is_session_id_Valid() const;

    QString getQuestionId() const;
    void setQuestionId(const QString &question_id);
    bool is_question_id_Set() const;
    bool is_question_id_Valid() const;

    QList<OAIAnswer> getAnswers() const;
    void setAnswers(const QList<OAIAnswer> &answers);
    bool is_answers_Set() const;
    bool is_answers_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString session_id;
    bool m_session_id_isSet;
    bool m_session_id_isValid;

    QString question_id;
    bool m_question_id_isSet;
    bool m_question_id_isValid;

    QList<OAIAnswer> answers;
    bool m_answers_isSet;
    bool m_answers_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPushAnswer_request)

#endif // OAIPushAnswer_request_H