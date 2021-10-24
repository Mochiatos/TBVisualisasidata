#!/usr/bin/env python
# coding: utf-8

# In[1]:


import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns


# In[46]:


stocks = ['sepal_length','sepal_width','petal_length','petal_width']
data = pd.read_csv('iris.csv')
data.head(10)

# In[5]:


print('Ukuran data : ', data.shape)
print(pd.value_counts(data.species))


# In[6]:


data.describe()


# In[8]:


sns.barplot(x="species",y="sepal_length", data=data)
plt.title('Bar Chart')
plt.show()


# In[9]:


sns.histplot(x="sepal_length",y="sepal_width", data=data)
plt.show()


# In[53]:


plt.plot(data.sepal_length);
plt.plot(data.sepal_width);
plt.plot(data.petal_length);
plt.plot(data.petal_width);
plt.legend(['sepal_length','sepal_width','petal_length','petal_width'])
plt.show()


# In[53]:


sns.FacetGrid(data, hue="species", height=7) \
   .map(plt.scatter, "sepal_length", "sepal_width") \
   .add_legend()
   
   
   
