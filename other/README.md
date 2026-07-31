# Basic Negotiation System

A simple C++ project that models a basic negotiation system using three values: the item market price, the seller's ask, and the buyer's offer. It demonstrates how a purchase decision can be evaluated by comparing those values in a lightweight command-line workflow.

## Project Overview

This project provides a minimal negotiation engine where:

- The market price is established for the item
- The seller sets an asking price
- The buyer submits an offer
- The system compares the buyer's offer against the seller's ask and the market price to determine the negotiation outcome

The system is intentionally simple and beginner-friendly, making it suitable for learning about decision logic, input handling, and iterative state management in C++.

## Features

- Tracks the market price of the item
- Stores the seller's ask
- Accepts the buyer's offer
- Compares the buyer's offer to the seller's ask and the market price to decide whether the deal is favorable, acceptable, or rejected
- Command-line interface
- Easy to extend with more negotiation rules or AI behavior

## How It Works

1. The system starts with a known market price for the item.
2. The seller provides their ask.
3. The buyer enters an offer.
4. The system evaluates the offer relative to the seller's ask and the market price.
5. The negotiation loop continues until the process ends.

## Example Flow

```text
Market price: 50
Seller ask: 55
Buyer offer: 53

System response: buyer offer is below the seller's ask, so the offer is rejected or countered
```

## Build and Run

Compile the project with a C++ compiler, for example:

```bash
g++ main.cpp -o negotiation
./negotiation
```

## Future Improvements

- Add scoring or utility-based decision making based on the difference between market price, ask, and offer
- Support multiple negotiation rounds with history tracking
- Implement structured data models for market price, ask, and offer
- Add a graphical or web-based interface

## Notes

This project is a foundational example of a negotiation system built around market price, seller ask, and buyer offer, and it can be expanded into a more advanced trading or bargaining simulation.

## Credits 

made by [Ayaan Dhalait](https://github.com/ayaandh)

