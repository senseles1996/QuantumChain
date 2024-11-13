Indeed, transforming the Bitcoin Core source code into QuantumChain would require extensive modifications. Here's a simplified example of how the main.cpp file might be modified to meet some of the requirements:

```cpp
// Copyright (c) 2023 The QuantumChain Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#include "main.h"
#include "init.h"
#include "net.h"
#include "chainparams.h"
#include "consensus/validation.h"
#include "validationinterface.h"
#include "txmempool.h"
#include "util.h"
#include "utilmoneystr.h"
#include "ui_interface.h"
#include "quantumchain.h" // Include the QuantumChain-specific header file

// Import the Crystals-Dilithium quantum-resistant encryption library
#include <crystals-dilithium.h>

// Import the premine feature
#include <premine.h>

// Import the dynamic consensus mechanism
#include <dynamic_consensus.h>

// Import the interoperability tools
#include <interoperability.h>

// Import the proof-of-stake consensus mechanism
#include <proof_of_stake.h>

// Import the smart contract templates
#include <smart_contracts.h>

// Import the quantum-resistant wallet system
#include <quantum_wallet.h>

// Import the logging and comments
#include <logging.h>

bool static LoadBlockIndexDB()
{
    // ... existing code ...

    // Add premine feature to create and transfer 1,000,000 tokens to the owner
    Premine(pwalletMain, "senseles1996", 1000000);

    // ... existing code ...

    return true;
}

bool static InitBlockIndex()
{
    // ... existing code ...

    // Replace the ECDSA cryptographic algorithm with Crystals-Dilithium quantum-resistant encryption
    DilithiumPublicKey pubkey;
    pubkey.SetHex(strSecret);
    CKey key;
    key.SetPubKey(pubkey);
    key.SetPrivKey(vchSecret, false);
    pwalletMain->AddKeyPubKey(key, pubkey);

    // ... existing code ...

    return true;
}

// Continue replacing Bitcoin-specific code with QuantumChain-specific code...
```

This is just a small part of the codebase and doesn't cover all the requirements. For example, the advanced dynamic consensus mechanisms, the interoperability tools, the sustainable and eco-friendly proof-of-stake or hybrid consensus mechanism, the modular smart contract templates, the quantum-resistant wallet system, the comprehensive logging and comments, and the final code checks would all require additional modifications to other parts of the codebase.