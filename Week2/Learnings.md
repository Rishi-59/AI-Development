# Week 2 – Building Interactive AI Applications

## Overview

This week was all about moving from simple model calls to building real, interactive AI experiences. I learned how to design better prompts, create user interfaces for AI apps, build chatbots, and connect LLMs to tools and external data.

A big shift this week was understanding that an AI application is not just the model. The surrounding system design, the prompt structure, the UI, and the tool-calling logic are just as important.

---

## Day 1 – Prompt Engineering and Conversation Design

### Topics Covered

* Prompt structure and formatting
* System messages and user messages
* Conversation history in chat apps
* The "memory illusion" of LLMs
* Prompt caching concepts

### My Understanding

I learned that prompting is not just about asking a question clearly. It is also about organizing information in a way the model can use effectively.

One important realization was that LLMs do not truly remember past conversations unless that history is included again in the next request. The feeling of memory comes from passing previous messages back to the model as context.

I also learned that prompt caching can reduce cost and latency when parts of the prompt stay the same across repeated requests. This makes a lot of sense for applications where instructions, examples, or static context are reused often.

**Key Takeaways**

* Good prompts are well-structured and intentional.
* Conversation history must be passed explicitly to the model.
* Prompt caching can make applications more efficient and cheaper.

---

## Day 2 – Building UIs with Gradio

### Topics Covered

* Gradio basics
* Creating simple interfaces with Python
* Launching apps in browser
* Sharing apps publicly
* Streaming responses
* Turning a simple app into a polished demo

### My Learning

Gradio was one of the biggest highlights of the week. It made it surprisingly easy to turn Python functions into simple web apps.

I learned that Gradio is especially useful for demos, experiments, and MVPs. With just a few lines of code, I could create a UI for text input and model output. I also discovered that streaming responses can make the experience feel much more natural because the user sees output appear gradually instead of waiting for the whole answer.

I used this learning to build a brochure generator experience where the app could take a company website and produce a marketing-style summary.

**Key Takeaways**

* Gradio is a fast way to build AI demos.
* It can turn a Python function into a usable interface quickly.
* Streaming makes LLM apps feel more interactive.

---

## Day 3 – Chatbots and Retrieval-Augmented Generation

### Topics Covered

* Gradio ChatInterface
* Chat callbacks with message and history
* System prompts for better behavior
* One-shot prompting
* Basic principles of RAG

### My Learning

This day focused on building conversational AI experiences. I learned how to define a chat callback that takes both the latest message and the previous conversation history, so the assistant can respond in a more coherent way.

I also explored how adding a strong system prompt helps guide the behavior of the chatbot. This is especially useful for role-based assistants such as a store helper or support assistant.

One of the most useful ideas was the basic concept of RAG: only add relevant context when needed instead of stuffing everything into every prompt. This saves tokens and helps keep the model focused.

**Key Takeaways**

* Chat interfaces require the model to receive conversation context.
* System prompts help define the assistant's role and behavior.
* RAG is a practical way to make models smarter without overloading the context window.

---

## Day 4 – Tool Calling and Function-Driven AI

### Topics Covered

* Tool calling with LLMs
* Function definitions and JSON schema
* Routing model responses to Python functions
* Handling multiple tool calls
* Using a small database with SQLite

### My Learning

This was one of the most important concepts of the week. I learned that LLMs do not directly perform tasks like looking up a price or updating a database. Instead, they generate a structured response that indicates which tool should be called, and the application handles that call.

This idea made the “tool calling” pattern much clearer. The model decides when to use a tool, and the program executes the corresponding Python function. This is a core building block for AI agents and more advanced assistants.

I also saw how tools can be wired to simple backend logic such as database lookups and updates. In the airline assistant example, the model could retrieve or update ticket prices through tool calls.

**Key Takeaways**

* Tool calling lets models interact with real-world systems.
* The model produces structured instructions; the app performs the action.
* This is the foundation for agent-like workflows.

---

## Day 5 – Multimodal AI and Agentic Ideas

### Topics Covered

* Multi-modal AI
* Image generation
* Audio generation
* Building more advanced assistants
* Gradio Blocks and custom layouts
* The idea of agentic workflows

### My Learning

The final day pushed the concept of AI apps further by combining multiple modalities. I learned that an assistant does not have to be limited to text. It can generate images, respond in different formats, and combine multiple capabilities in one experience.

I also learned that this kind of multi-step workflow begins to resemble agentic AI, where the system can decide which tools or actions to use depending on the task. Even though I am still not fully comfortable with all the details, this was an exciting step toward understanding how more advanced AI systems are built.

**Key Takeaways**

* AI apps can be multi-modal, not just text-based.
* Tool use and multiple capabilities can create more powerful experiences.
* Agentic workflows are built from repeated reasoning, tool use, and action.

---

## Extra – SVG Generation with Advanced Models

### What I Learned

The extra session introduced a fun and creative experiment: generating SVG artwork using advanced models. It showed that model performance can vary a lot depending on the task.

This was a reminder that different models are better at different things. Some are stronger at image generation, while others may perform better at structured visual tasks such as SVG drawing.

---

## Projects and Experiments

### Built or Explored

* A simple Gradio-based AI app
* A brochure generator interface
* A chatbot using ChatInterface
* A basic airline support assistant with tool calling
* A multimodal assistant concept with image and audio capabilities
* A small web scraper used to gather website content for AI tasks

---

## Reflection

Week 2 felt much more practical than Week 1. Instead of just learning about LLM concepts, I started building applications that looked and behaved more like real products.

Some of the biggest lessons were:

* Gradio makes it easy to turn Python code into interactive AI apps.
* Prompt design matters a lot for both quality and cost.
* Chat applications need careful handling of conversation context.
* Tool calling is a powerful way to connect LLMs to real actions.
* Multi-modal and agent-like workflows are the next step beyond simple chatbots.

Overall, this week helped me move from “using AI” toward “building AI-powered experiences.”

---

## Tools and Technologies

* Python
* Gradio
* OpenAI API
* Anthropic API
* Google Gemini API
* Beautiful Soup
* Requests
* SQLite
* IPython display tools

---

## Looking Ahead

In the coming weeks, I want to continue building more polished AI applications, experiment more with tools and agents, and improve my understanding of how to design better user experiences around LLMs.
