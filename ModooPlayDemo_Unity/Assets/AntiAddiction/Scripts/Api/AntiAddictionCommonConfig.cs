using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AntiAddictionSdk.OpenSource
{
    public class AntiAddictionCommonConfig
    {
        public int gusterTime{ get; set;}
        public int nightStrictStart{ get; set;}
        public int nightStrictEnd{ get; set;}
        public int childCommonTime{ get; set;}
        public int childHolidayTime{ get; set;}
        public int teenPayLimit{ get; set;}
        public int teenMonthPayLimit{ get; set;}
        public int youngPayLimit{ get; set;}
        public int youngMonthPayLimit{ get; set;}

        private AntiAddictionCommonConfig(Builder builder) {
            this.gusterTime = builder.gusterTime;
            this.nightStrictStart = builder.nightStrictStart;
            this.nightStrictEnd = builder.nightStrictEnd;
            this.childCommonTime = builder.childCommonTime;
            this.childHolidayTime = builder.childHolidayTime;
            this.teenPayLimit = builder.teenPayLimit;
            this.teenMonthPayLimit = builder.teenMonthPayLimit;
            this.youngPayLimit = builder.youngPayLimit;
            this.youngMonthPayLimit = builder.youngMonthPayLimit;
        }

        public class Builder {
            internal int gusterTime{ get; set;}
            internal int nightStrictStart{ get; set;}
            internal int nightStrictEnd{ get; set;}
            internal int childCommonTime{ get; set;}
            internal int childHolidayTime{ get; set;}
            internal int teenPayLimit{ get; set;}
            internal int teenMonthPayLimit{ get; set;}
            internal int youngPayLimit{ get; set;}
            internal int youngMonthPayLimit{ get; set;}

            public Builder() {
                // 游客每日游戏时长，默认 1 小时，单位 秒
                this.gusterTime = 60 * 60;
                // 未成年宵禁起始时间，默认晚上 10 点，单位 秒
                this.nightStrictStart = 22 * 60 * 60;
                // 未成年宵禁截止时间，默认次日 8 点， 单位 秒
                this.nightStrictEnd = 8 * 60 * 60;
                // 未成年人非节假日每日游戏时长，默认 1.5 小时，单位 秒
                this.childCommonTime = 90 * 60;
                // 未成年人节假日每日游戏时长，默认 3 小时，单位 秒
                this.childHolidayTime = 3 * 60 * 60;
                // 未成年人（8-15岁）单次付费限额，默认 50 元，单位 分
                this.teenPayLimit = 50 * 100;
                // 未成年人（8-15岁）每月付费限额，默认 200 元，单位 分
                this.teenMonthPayLimit = 200 * 100;
                // 未成年人（16-17岁）单次付费限额，默认 100 元，单位 分
                this.youngPayLimit = 100 * 100;
                // 未成年人（16-17岁）每月付费限额，默认 400 元， 单位 分
                this.youngMonthPayLimit = 400 * 100;
            }

            public Builder GusterTime(int gusterTime) {
                this.gusterTime = gusterTime;
                return this;
            }

            public Builder NightStrictStart(int nightStrictStart) {
                this.nightStrictStart = nightStrictStart;
                return this;
            }

            public Builder NightStrictEnd(int nightStrictEnd) {
                this.nightStrictEnd = nightStrictEnd;
                return this;
            }

            public Builder ChildCommonTime(int childCommonTime) {
                this.childCommonTime = childCommonTime;
                return this;
            }

            public Builder ChildHolidayTime(int childHolidayTime) {
                this.childHolidayTime = childHolidayTime;
                return this;
            }

            public Builder TeenPayLimit(int teenPayLimit) {
                this.teenPayLimit = teenPayLimit;
                return this;
            }

            public Builder TeenMonthPayLimit(int teenMonthPayLimit) {
                this.teenMonthPayLimit = teenMonthPayLimit;
                return this;
            }

            public Builder YoungPayLimit(int youngPayLimit) {
                this.youngPayLimit = youngPayLimit;
                return this;
            }

            public Builder YoungMonthPayLimit(int youngMonthPayLimit) {
                this.youngMonthPayLimit = youngMonthPayLimit;
                return this;
            }

            public AntiAddictionCommonConfig Build() {
                return new AntiAddictionCommonConfig(this);
            }
        }
	}
}