# OTP XOR Generator (C++)

A simple **One-Time Pad (OTP) style XOR encryption + decryption** demo in C++.

## ✅ How it works
- Takes a plaintext string as input
- Generates a random key of the same length
- Encrypts using XOR:
  `ciphertext[i] = plaintext[i] XOR key[i]`
- Decrypts using XOR again:
  `decrypted[i] = ciphertext[i] XOR key[i]`

If decrypted text matches the original plaintext, it prints **success**.

## 🧠 Note
This is for learning/demo purposes.
A real OTP requires:
- truly random key
- key used only once
- secure key exchange/storage

## ▶️ Run

### Compile
```bash
g++ otp.cpp -o otp
