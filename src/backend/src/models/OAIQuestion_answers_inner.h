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
 * OAIQuestion_answers_inner.h
 *
 * 
 */

#ifndef OAIQuestion_answers_inner_H
#define OAIQuestion_answers_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIQuestion_answers_inner : public OAIObject {
public:
    OAIQuestion_answers_inner();
    OAIQuestion_answers_inner(QString json);
    ~OAIQuestion_answers_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getBody() const;
    void setBody(const QString &body);
    bool is_body_Set() const;
    bool is_body_Valid() const;

    bool isIsRight() const;
    void setIsRight(const bool &is_right);
    bool is_is_right_Set() const;
    bool is_is_right_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString body;
    bool m_body_isSet;
    bool m_body_isValid;

    bool is_right;
    bool m_is_right_isSet;
    bool m_is_right_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIQuestion_answers_inner)

#endif // OAIQuestion_answers_inner_H