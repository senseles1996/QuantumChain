Your task involves a significant amount of work, including modifying the source code, changing cryptographic algorithms, adding new features, and ensuring the final code is fully functional. Here's a general outline of how you might approach this task:

1. **Replace all references to Bitcoin with QuantumChain**: You can use a text editor or IDE's find-and-replace function to replace all instances of "Bitcoin" with "QuantumChain". Be careful to only replace relevant instances and not alter variable or function names that happen to contain the word "Bitcoin".

2. **Replace the ECDSA cryptographic algorithm with Crystals-Dilithium quantum-resistant encryption**: This will involve modifying the cryptographic functions in the code to use the Crystals-Dilithium algorithm instead of ECDSA. You'll need to include the Crystals-Dilithium library in your project and replace the ECDSA function calls with Crystals-Dilithium function calls.

3. **Add a premine feature**: This will involve modifying the blockchain initialization code to create and transfer 1,000,000 tokens to the owner ('senseles1996') upon initial setup. This could be done in the genesis block or in a special transaction immediately after the genesis block.

4. **Maintain a fixed supply of 21 million tokens**: This will involve setting the maximum supply of tokens in the code and ensuring that the token creation (mining) code does not exceed this limit.

5. **Introduce advanced dynamic consensus mechanisms**: This will involve significant modifications to the consensus code. You'll need to design and implement a new consensus algorithm that can adapt to network conditions.

6. **Integrate interoperability tools**: This will involve adding code to communicate with other blockchain networks. This could involve implementing standard protocols or APIs for blockchain interoperability.

7. **Create a sustainable and eco-friendly proof-of-stake or hybrid consensus mechanism**: This will involve modifying the consensus code to use proof-of-stake or a hybrid mechanism instead of proof-of-work, which is used by Bitcoin.

8. **Incorporate modular smart contract templates**: This will involve adding code for smart contracts, which is not present in the Bitcoin Core code. You'll need to design and implement a smart contract system that is compatible with your blockchain.

9. **Implement a quantum-resistant wallet system**: This will involve modifying the wallet code to use quantum-resistant encryption and adding a key recovery feature.

10. **Add comprehensive logging and comments**: This will involve adding logging statements throughout the code and writing comments to explain the modifications you've made.

11. **Ensure the final code is fully functional**: This will involve testing all the features of your new blockchain to ensure they work correctly.

Please note that this is a high-level overview and the actual implementation will be much more complex and time-consuming. You'll need a deep understanding of blockchain technology, cryptography, and C++ programming to complete this task.