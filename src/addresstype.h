Transforming the Bitcoin Core source code into a new blockchain called QuantumChain would require extensive modifications to the codebase. Here is a simplified example of how the header file might be modified to meet some of the requirements:

```cpp
// Copyright (c) 2023 The QuantumChain Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef QUANTUMCHAIN_ADDRESSTYPE_H
#define QUANTUMCHAIN_ADDRESSTYPE_H

#include <attributes.h>
#include <pubkey.h>
#include <script/script.h>
#include <uint256.h>
#include <util/check.h>
#include <util/hash_type.h>

#include <algorithm>
#include <variant>
#include <vector>

// Import the Crystals-Dilithium quantum-resistant encryption library
#include <crystals-dilithium.h>

class CNoDestination
{
private:
    CScript m_script;

public:
    CNoDestination() = default;
    explicit CNoDestination(const CScript& script) : m_script(script) {}

    const CScript& GetScript() const LIFETIMEBOUND { return m_script; }

    friend bool operator==(const CNoDestination& a, const CNoDestination& b) { return a.GetScript() == b.GetScript(); }
    friend bool operator<(const CNoDestination& a, const CNoDestination& b) { return a.GetScript() < b.GetScript(); }
};

struct PubKeyDestination {
private:
    // Replace CPubKey with Crystals-Dilithium quantum-resistant public key
    DilithiumPublicKey m_pubkey;

public:
    explicit PubKeyDestination(const DilithiumPublicKey& pubkey) : m_pubkey(pubkey) {}

    const DilithiumPublicKey& GetPubKey() const LIFETIMEBOUND { return m_pubkey; }

    friend bool operator==(const PubKeyDestination& a, const PubKeyDestination& b) { return a.GetPubKey() == b.GetPubKey(); }
    friend bool operator<(const PubKeyDestination& a, const PubKeyDestination& b) { return a.GetPubKey() < b.GetPubKey(); }
};

// Continue replacing Bitcoin-specific code with QuantumChain-specific code...
```

This is just a small part of the codebase and doesn't cover all the requirements. For example, the premine feature, the dynamic consensus mechanism, the interoperability tools, the proof-of-stake consensus mechanism, the smart contract templates, the quantum-resistant wallet system, the logging and comments, and the final code checks would all require additional modifications to other parts of the codebase.