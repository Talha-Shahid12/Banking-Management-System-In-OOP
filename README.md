# Banking Management System In OOP (with Email Integration)

The Banking Management System with Email Integration is an object-oriented programming (OOP) project designed to manage banking operations and provide email notifications for important updates. This project showcases the principles of OOP, database management, and email integration to create a comprehensive banking system.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Class Structure](#class-structure)
- [Email Integration](#email-integration)
- [Contributors](#contributors)

## Introduction

The Banking Management System with Email Integration project aims to provide a user-friendly interface for managing banking operations such as account creation, deposits, withdrawals, and fund transfers. The system is enhanced with email integration to notify customers about important updates related to their accounts.

## Features

- **Account Management**: The system allows users to create new accounts, perform deposits and withdrawals, and transfer funds between accounts.

- **Balance Inquiry**: Users can inquire about their account balance at any time.

- **Email Notifications**: Whenever a significant event occurs, such as a successful fund transfer or change in account details, the system sends email notifications to the respective account holders.

- **Transaction History**: Users can view the transaction history for their accounts.

## Class Structure

The project is organized using object-oriented principles:

- `Bank`: Manages accounts and transactions, including methods for account creation, deposit, withdrawal, fund transfer, and balance inquiry.

- `Account`: Represents a bank account with attributes like account number, account holder name, balance, and transaction history.

- `Transaction`: Represents a transaction with details like transaction type (deposit, withdrawal, transfer), amount, and timestamp.

## Email Integration

Email integration is achieved using an external email service (SMTP):

- The system uses an SMTP library to send email notifications to account holders for important account-related events.

- Whenever an account is created, a welcome email is sent to the account holder.

- For successful fund transfers, the sender and receiver receive email notifications with transaction details.

## Contributors

- [Talha Shahid](https://github.com/Talha-Shahid12)

---
