/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.0
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package io.adaptivecards.objectmodel;

public enum BackgroundImageMode {
  Stretch(0),
  RepeatHorizontally,
  RepeatVertically,
  Repeat;

  public final int swigValue() {
    return swigValue;
  }

  public static BackgroundImageMode swigToEnum(int swigValue) {
    BackgroundImageMode[] swigValues = BackgroundImageMode.class.getEnumConstants();
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (BackgroundImageMode swigEnum : swigValues)
      if (swigEnum.swigValue == swigValue)
        return swigEnum;
    throw new IllegalArgumentException("No enum " + BackgroundImageMode.class + " with value " + swigValue);
  }

  @SuppressWarnings("unused")
  private BackgroundImageMode() {
    this.swigValue = SwigNext.next++;
  }

  @SuppressWarnings("unused")
  private BackgroundImageMode(int swigValue) {
    this.swigValue = swigValue;
    SwigNext.next = swigValue+1;
  }

  @SuppressWarnings("unused")
  private BackgroundImageMode(BackgroundImageMode swigEnum) {
    this.swigValue = swigEnum.swigValue;
    SwigNext.next = this.swigValue+1;
  }

  private final int swigValue;

  private static class SwigNext {
    private static int next = 0;
  }
}

