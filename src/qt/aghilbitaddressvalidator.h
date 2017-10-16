// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef AGHILBIT_QT_AGHILBITADDRESSVALIDATOR_H
#define AGHILBIT_QT_AGHILBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class AghilbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit AghilbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Aghilbit address widget validator, checks for a valid aghilbit address.
 */
class AghilbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit AghilbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // AGHILBIT_QT_AGHILBITADDRESSVALIDATOR_H
