# Week 4 — Learnings

This week focused on choosing and evaluating LLMs in practice. I explored benchmarks and leaderboards, compared models for real tasks, and used LLMs to translate Python code into faster compiled languages such as C++ and Rust.

## Day 1 — Choosing the Right LLM

- Learned that model selection should begin with the task requirements, not with a single overall ranking.
- Reviewed the Chinchilla Scaling Law: larger models need sufficient training data, and parameter count is only a rough signal of capability.
- Explored common benchmarks:
  - **GPQA** for difficult science reasoning.
  - **MMLU-Pro** for broad knowledge and reasoning.
  - **AIME** for competitive mathematics.
  - **LiveCodeBench** for coding on previously unseen problems.
  - **MuSR** for multi-step reasoning.
  - **HLE** for extremely challenging cross-domain questions.
- Learned how public leaderboards use these benchmarks to compare models.

## Day 2 — Leaderboards, Cost, and AI Product Types

- Explored model-comparison resources including Artificial Analysis, Vellum, Scale AI, the Hugging Face Open LLM Leaderboard, LiveBench, and LMArena.
- Learned that a useful model choice balances quality, latency, and cost—not benchmark performance alone.
- Saw how LMArena provides a human-centred comparison by letting people evaluate anonymous model responses side by side.
- Reviewed three common types of commercial AI applications:
  - **GPT wrappers**, which mainly add an interface around a frontier model.
  - **Specialised AI applications**, which add domain data, RAG, prompts, fine-tuning, or tools.
  - **Agentic AI systems**, which can plan, use tools, call APIs, execute code, and complete multi-step work.

## Day 3 — LLM-Assisted Python-to-C++ Conversion

- Used LLMs to convert Python code into C++ and compile/run the generated program.
- Compared outputs from different models for the same coding task.
- Learned that leaderboard positions are useful starting points, but the best model can vary significantly by task.
- My experiments showed that Gemini sometimes produced more useful results for the task than its broad leaderboard position would suggest.
- Key lesson: evaluate shortlisted models on representative examples from the actual use case before choosing one.

## Day 4 — Local Models and Performance Testing

- Continued the code-conversion experiment using local models instead of frontier models.
- Measured the runtime of the converted code and compared it with the Python implementation.
- Observed that one local model initially produced incorrect converted code, so generated programs still need review, correction, and testing.
- Learned that model quality is not only about whether code is produced; correctness, compilation, and runtime performance all matter.

## Day 5 — Python-to-Rust Conversion and Model Comparison

- Explored converting a Python implementation of Kadane's algorithm into Rust.
- Tested several frontier and open-source coding models on correctness and performance.
- Found that many models failed the task for different reasons, including formatting a float value incorrectly.
- The successful timing results placed GPT-OSS 120B first, followed by Grok 4 and GPT-OSS 20B in this experiment.
- This reinforced that even strong models can fail on small implementation details, especially when working in a less familiar language or under strict output requirements.

## Key Takeaways

- Benchmarks and leaderboards are helpful for shortlisting models, but they do not replace task-specific testing.
- Model selection requires balancing capability, reliability, latency, and cost.
- Side-by-side human evaluation can reveal differences that automated benchmarks miss.
- LLM-generated code should be compiled, tested, and benchmarked rather than trusted immediately.
- Local and open-source models can be valuable options, but they should be evaluated with the same care as frontier models.

## Tools & Technologies

- Python
- C++
- Rust
- LLM APIs and local/open-source models
- Model leaderboards and LMArena
- Compiler and runtime benchmarking tools
