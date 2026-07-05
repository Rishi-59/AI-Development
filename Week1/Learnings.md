# Week 1 – Foundations of LLM Engineering

## Overview

This week focused on building a strong foundation in Large Language Models (LLMs). Rather than diving straight into complex applications, I learned how modern AI models are deployed, how to interact with them through APIs, and the fundamental concepts behind how they work.

Along the way, I also built my first LLM-powered applications, including a Website Summarizer and an AI-powered Brochure Generator.

---

## Day 1 – Getting Started with Ollama

### Topics Covered

* What is Ollama?
* Running LLMs locally
* Downloading and managing models
* Model lifecycle and memory management

### My Understanding

The easiest way for me to think about **Ollama** is to compare it to a media player like **MX Player**.

Just as MX Player provides everything needed to play video files, Ollama provides everything needed to run local AI models. It handles downloading, storing, caching, loading, and unloading models without requiring me to manage these details manually.

One feature I found particularly useful is that Ollama automatically unloads idle models after a few minutes, freeing system memory.

**Key Takeaways**

* Ollama is a local model runtime.
* It simplifies working with open-source LLMs.
* Developers can focus on building applications instead of managing model processes.

---

## Day 2 – Frontier Models & APIs

### Topics Covered

* Frontier AI models
* OpenAI
* Google Gemini
* Anthropic Claude
* xAI Grok
* DeepSeek
* API Keys
* OpenAI Python SDK
* Running local and cloud models

### My Learning

I learned about today's leading AI companies and the models they provide.

During the course, I created API keys for both **OpenAI** and **Google Gemini**. At the moment, I'm using their free tiers, which are more than sufficient while learning.

I also discovered that the OpenAI Python library can communicate with many OpenAI-compatible models, making it easier to switch providers without rewriting large amounts of code.

Another interesting discussion covered open-source models. DeepSeek's large open-weight models were highlighted as some of the strongest currently available.

**Key Takeaways**

* Cloud models provide powerful capabilities through APIs.
* Local models offer privacy and offline development.
* The OpenAI SDK supports multiple compatible providers.

---

## Mini Project – Website Summarizer

During the first week, I built a Website Summarizer.

### Concepts Used

* Beautiful Soup
* Web scraping
* LLM prompts
* Text summarization

This project connected nicely with my previous **100 Days of Python** journey, where I had recently learned Beautiful Soup. It was satisfying to combine web scraping with LLMs to create something genuinely useful.

---

## Day 3 – Types of LLMs

### Topics Covered

* Base models
* Chat models
* Reasoning models
* Comparing frontier models
* GPT Deep Research
* Agentic AI

We explored the differences between various categories of language models and compared the outputs of several leading models using the same prompts.

Although the comparisons were interesting, I realized that model choice matters less for me right now because I'm primarily limited to free-tier access.

Currently I mostly use **GPT-5.4-mini** through the free tier. My backup plan is to use **Llama 3.2** locally with Ollama once my API limits are exhausted, although running local models causes my laptop to heat up considerably.

One particularly exciting demonstration was GPT-5's **Deep Research** and **Agentic Mode**, which showed how AI can perform long-running tasks with very little human supervision.

---

## Day 4 – Understanding Transformers

### Topics Covered

* Transformer Architecture
* Parameters
* Tokenization
* Context Windows
* Memory in LLMs
* TikToken

This day focused heavily on theory.

One of the biggest misconceptions I had before starting the course was believing that LLMs actually "remember" previous conversations.

I learned that they don't.

Instead, every new request includes previous conversation history inside the prompt, which explains why longer conversations consume more tokens and become more expensive when using APIs.

While experimenting with the **TikToken** library, I also became curious about GPT's tokenizer after noticing certain token IDs couldn't be decoded, which led me to explore how tokenization actually works.

Another interesting topic was context windows.

At the time of learning, **Google Gemini** offers one of the largest publicly available context windows (up to one million tokens), allowing extremely large documents to be processed in a single prompt.

**Key Takeaways**

* LLMs don't have memory between API calls.
* Conversation history is sent repeatedly as context.
* More context means higher token usage and cost.
* Tokenization is fundamental to how LLMs understand text.

---

## Day 5 – AI Brochure Generator

### Project Built

AI-powered Website Brochure Generator

### Concepts Used

* Multiple LLM calls
* Prompt chaining
* Structured outputs
* Streaming responses

We extended the Website Summarizer into a more capable application.

Instead of making a single model call, the application first analyzed a website, extracted relevant content and links, and then generated a polished marketing brochure.

I also learned how to **stream model responses**, allowing text to appear token by token instead of waiting for the entire response to finish.

The homework for this section is to build an AI Tutor, which I plan to complete next.

---

# Week 1 Reflection

This week was primarily about building strong fundamentals rather than creating complex applications.

Some of my biggest learnings were:

* Understanding the difference between local and cloud-hosted LLMs.
* Learning how modern AI applications interact with models through APIs.
* Realizing that LLMs don't actually "remember" conversations—the illusion of memory comes from repeatedly sending context.
* Building my first applications that combine web scraping with LLMs.
* Learning to stream responses and chain multiple model calls together.

Overall, I feel like I'm finally moving beyond simply **using AI** and starting to understand **how AI applications are actually built**.

---

## Projects Completed

* Website Summarizer
* AI Website Brochure Generator

---

## Tools & Technologies

* Python
* Ollama
* OpenAI API
* Google Gemini API
* Beautiful Soup
* TikToken
* OpenAI Python SDK

---

## Looking Ahead

In the coming weeks, I plan to continue building more advanced LLM applications, deepen my understanding of transformer-based systems, and strengthen my practical AI engineering skills through hands-on projects.
