# -*- coding: utf-8 -*-
"""기계학습.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1t8YKjvxN1FxAjKTYV3dWKajYAXyey5Fe
"""

import gym

env = gym.make("FrozenLake-v0", is_slippery = False)
print(env.observation_space)
print(env.action_space)

n_trial=20

env.reset()
episode = []

for i in range(n_trial):
    action = env.action_space.sample()
    obs, reward, done, info = env.step(action)
    episode.append([action, reward, obs])
    env.render()
    if done:
        break
        
print(episode)
env.close()