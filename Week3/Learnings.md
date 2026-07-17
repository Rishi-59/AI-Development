# Week 3 — Learnings

This week focused on practical exploration of transformers, tokenization, model internals, and visualizing token predictions. Notes and links reference the Colab notebooks used for hands-on experiments.

## Day 1 — Introducing Colab
- Got comfortable using Google Colab (free and Pro tiers).
- Learned about Colab runtimes (CPU vs T4 GPU), session limits, and managing secrets (Hugging Face token).
- Hands-on: setting up Hugging Face token and running simple demos in Colab.

## Day 2 — Hugging Face Pipelines
- Explored the high-level `pipeline` API (automatic model selection for tasks).
- Key idea: pipelines wrap model + tokenizer + postprocessing into a simple call interface.
- Note: practical execution issues were encountered in the notebook (runtime stuck — investigate runtime and dependency differences if repeating).

## Day 3 — Tokenizers
- Reviewed Hugging Face tokenizers and `AutoTokenizer` usage.
- Learned encode/decode flows (`encode`, `batch_decode`) and templating prompts for generation-style models.
- Reminder: tokenizer behavior (special tokens, templates) matters for model input formatting.

## Day 4 — Models (Transformer internals)
- Dug into model internals beyond pipelines: tokenizer → model → encoder/decoder → streamer.
- Transformer components reviewed: embedding layer, decoder layers, query/key/value/output projections.
- Discussed gating (up/down projections), activation functions, normalization layers, and quantization trade-offs.

## Day 5 — Meeting Minutes Creator & Visualization
- Built an experimental meeting-summarizer pipeline: audio → transcript → LLM summarization.
- Implemented a token-level visualization flow to inspect model token predictions and alternatives.
- See `visualizer.py` for the `TokenPredictor`, graph creation, and visualization helpers used to plot token probabilities and alternatives.

## Tools & Code
- Primary hands-on environment: Google Colab (links included in each notebook).
- Key repo file: `visualizer.py` — token prediction streaming, top-logprob extraction, graph creation and plotting. Not made by me but can be used to get understanding or a aha moment on working of llm


