{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "0702기계학습.ipynb",
      "private_outputs": true,
      "provenance": [],
      "authorship_tag": "ABX9TyNVd5pHeRrdQ38CehbxQ6JK",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    },
    "accelerator": "GPU",
    "gpuClass": "standard"
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/baramon0418/test/blob/main/%EB%8F%84%EB%AF%B8%EC%99%80%20%EB%B9%99%EC%96%B4%20%EB%8D%B0%EC%9D%B4%ED%84%B0.py\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "execution_count": null,
      "metadata": {
        "id": "6d-OKBoWCJqG"
      },
      "outputs": [],
      "source": [
        "!nvidia-smi"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "bream_length = [25.4, 26.3, 26.5, 29.0, 29.0, 29.7, 29.7, 30.0, 30.0, 30.7, 31.0, 31.0, \n",
        "                31.5, 32.0, 32.0, 32.0, 33.0, 33.0, 33.5, 33.5, 34.0, 34.0, 34.5, 35.0, \n",
        "                35.0, 35.0, 35.0, 36.0, 36.0, 37.0, 38.5, 38.5, 39.5, 41.0, 41.0]\n",
        "bream_weight = [242.0, 290.0, 340.0, 363.0, 430.0, 450.0, 500.0, 390.0, 450.0, 500.0, 475.0, 500.0, \n",
        "                500.0, 340.0, 600.0, 600.0, 700.0, 700.0, 610.0, 650.0, 575.0, 685.0, 620.0, 680.0, \n",
        "                700.0, 725.0, 720.0, 714.0, 850.0, 1000.0, 920.0, 955.0, 925.0, 975.0, 950.0]"
      ],
      "metadata": {
        "id": "nbuUY-n1CsC5"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "import matplotlib.pyplot as plt\n",
        "\n",
        "plt.scatter(bream_length, bream_weight)\n",
        "plt.xlabel('length')\n",
        "plt.ylabel('weight')\n",
        "plt.show()"
      ],
      "metadata": {
        "id": "e2q70m9mEWIs"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "smelt_length = [9.8, 10.5, 10.6, 11.0, 11.2, 11.3, 11.8, 11.8, 12.0, 12.2, 12.4, 13.0, 14.3, 15.0]\n",
        "smelt_weight = [6.7, 7.5, 7.0, 9.7, 9.8, 8.7, 10.0, 9.9, 9.8, 12.2, 13.4, 12.2, 19.7, 19.9]"
      ],
      "metadata": {
        "id": "kv_7vSHJE3Uw"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "print(len(smelt_length))\n",
        "print(len(smelt_weight))"
      ],
      "metadata": {
        "id": "tcwY1Hn9FArH"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "plt.scatter(bream_length, bream_weight)\n",
        "plt.scatter(smelt_length, smelt_weight)\n",
        "plt.xlabel('length')\n",
        "plt.ylabel('weight')\n",
        "plt.show()"
      ],
      "metadata": {
        "id": "uX3cTNcSFMpB"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "length = bream_length + smelt_length\n",
        "weight = bream_weight + smelt_weight"
      ],
      "metadata": {
        "id": "Vr1XOUUAFv-m"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "fish_data = [[l,w] for l, w in zip(length, weight)]\n",
        "print(fish_data)"
      ],
      "metadata": {
        "id": "XJqvGkD6GAjg"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "fish_target = [1]*35 + [0]*14\n",
        "print(fish_target)"
      ],
      "metadata": {
        "id": "xQMEOWEyGRmQ"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "from sklearn.neighbors import KNeighborsClassifier\n",
        "kn = KNeighborsClassifier()\n",
        "kn.fit(fish_data, fish_target)\n",
        "kn.score(fish_data, fish_target)"
      ],
      "metadata": {
        "id": "Vvyw8czvGfZs"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "kn.predict([[30,600]])"
      ],
      "metadata": {
        "id": "u5h-jhd2HC8d"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "plt.scatter(bream_length, bream_weight)\n",
        "plt.scatter(smelt_length, smelt_weight)\n",
        "plt.scatter(30,600, marker='^')\n",
        "plt.xlabel('length')\n",
        "plt.ylabel('weight')\n",
        "plt.legend(('bream', 'smelt', 'test_fish'))\n",
        "plt.show"
      ],
      "metadata": {
        "id": "NDuehFaYHLHc"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        "kn49 = KNeighborsClassifier(n_neighbors=49)\n",
        "\n",
        "kn49.fit(fish_data, fish_target)\n",
        "kn49.score(fish_data, fish_target)"
      ],
      "metadata": {
        "id": "x4XySLb2H9Lt"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [
        ""
      ],
      "metadata": {
        "id": "Z4KkI7oUIS7N"
      },
      "execution_count": null,
      "outputs": []
    }
  ]
}