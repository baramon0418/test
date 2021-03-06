# -*- coding: utf-8 -*-
"""기계학습.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1vCrKlh9tUFwp2Q4WbPoZQ6Lswe8GtN3Z
"""

from keras import models
from keras import layers

model = models.Sequential()
model.add(layers.Dense(16,activation='relu',input_shape=(10000,)))
model.add(layers.Dense(16,activation='relu'))
model.add(layers.Dense(1,activation='sigmoid'))

model.summary()

from keras import models
from keras import layers

model = models.Sequential()
model.add(layers.Dense(6,activation='relu',input_shape=(10000,)))
model.add(layers.Dense(6,activation='relu'))
model.add(layers.Dense(1,activation='sigmoid'))

model.summary()

from keras import models
from keras import layers

model = models.Sequential()
model.add(layers.Dense(1024,activation='relu',input_shape=(10000,)))
model.add(layers.Dense(1024,activation='relu'))
model.add(layers.Dense(1,activation='sigmoid'))

model.summary()

from keras import models
from keras import layers
from keras import regularizers

model = models.Sequential()
model.add(layers.Dense(16,kernel_regularizer=regularizers.l2(0.01),activation='relu',input_shape=(10000,)))
model.add(layers.Dense(16,kernel_regularizer=regularizers.l2(0.01),activation='relu'))
model.add(layers.Dense(1,activation='sigmoid'))

model.summary()

from keras import models
from keras import layers

model = models.Sequential()
model.add(layers.Dense(16,activation='relu',input_shape=(10000,)))
model.add(layers.Dropout(0.5))
model.add(layers.Dense(16,activation='relu'))
model.add(layers.Dropout(0.5))
model.add(layers.Dense(1,activation='sigmoid'))

model.summary()

import tensorflow as tf
import numpy as np

mnist = tf.keras.datasets.mnist
(x_train,y_train),(x_test,y_test)=mnist.load_data()

x_train=x_train.reshape(60000,28,28,1)
x_test=x_test.reshape(10000,28,28,1)
x_train=x_train.astype(np.float32)/255
x_test=x_test.astype(np.float32)/255
y_train=tf.keras.utils.to_categorical(y_train,10)
y_test=tf.keras.utils.to_categorical(y_test,10)

model=tf.keras.models.Sequential([
   tf.keras.layers.Conv2D(32,(3,3),activation='relu',input_shape=(28,28,1)),
   tf.keras.layers.MaxPooling2D(2,2),
   tf.keras.layers.Conv2D(64,(3,3),activation='relu'),
   tf.keras.layers.MaxPooling2D(2,2),
   tf.keras.layers.Flatten(input_shape=(28,28)),
   tf.keras.layers.Dense(512,activation=tf.nn.relu),
   tf.keras.layers.Dense(10,activation=tf.nn.softmax)                               
])
model.summary()

model.compile(optimizer='adam',
              loss='categorical_crossentropy',
              metrics=['accuracy'])

history=model.fit(x_train,y_train,epochs=30,
                  validation_data=(x_test,y_test),verbose=2)

print(model.evaluate(x_test,y_test))

import matplotlib.pyplot as plt

plt.plot(history.history['accuracy'])
plt.plot(history.history['val_accuracy'])
plt.title('Model Accuracy')
plt.ylabel('Accuracy')
plt.xlabel('Epoch')
plt.legend(['Train','Validation'],loc='best')
plt.grid()
plt.show()

plt.plot(history.history['loss'])
plt.plot(history.history['val_loss'])
plt.title('Model Loss')
plt.ylabel('Loss')
plt.xlabel('Epoch')
plt.legend(['Train','Validation'],loc='best')
plt.grid()
plt.show()

