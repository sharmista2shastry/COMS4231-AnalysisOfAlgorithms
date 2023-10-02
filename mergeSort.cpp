#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Oct  1 17:47:46 2023

@author: sharmistashastry
"""

def mergeSort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        
        A = arr[:mid]
        B = arr[mid:]
        
        mergeSort(A)
        mergeSort(B)
    
        i = 0
        j = 0
        k = 0
        
        while i < len(A) and j < len(B):
            if A[i] < B[j]:
                arr[k] = A[i]
                k = k + 1
                i = i + 1
            
            else:
                arr[k] = B[j]
                k = k + 1
                j = j + 1
        
        while i < len(A):
            arr[k] = A[i]
            k = k + 1
            i = i + 1
        
        while j < len(B):
            arr[k] = B[j]
            k = k + 1
            j = j + 1
            
    return arr
        

def main():
    input_str = input("Enter elements separated by commas: ")
    elements = input_str.split(",")  # Split the input string by commas
    array = [int(x) for x in elements]  # Convert elements to integers
    print("Original Array:", array)
    
    mergeSort(array)
    
    print("Sorted Array:", array)
    
if __name__ == "__main__":
    main()
