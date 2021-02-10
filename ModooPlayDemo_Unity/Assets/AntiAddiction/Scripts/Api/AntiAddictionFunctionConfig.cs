using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AntiAddictionSdk.OpenSource
{
    public class AntiAddictionFunctionConfig
    {
        public bool useSdkRealName{ get; set;}
        public bool useSdkPaymentLimit{ get; set;}
        public bool useSdkOnlineTimeLimit{ get; set;}
        public bool showSwitchAccountButton{ get; set;}

        private AntiAddictionFunctionConfig(Builder builder) {
            this.useSdkRealName = builder.useSdkRealName;
            this.useSdkPaymentLimit = builder.useSdkPaymentLimit;
            this.useSdkOnlineTimeLimit = builder.useSdkOnlineTimeLimit;
            this.showSwitchAccountButton = builder.showSwitchAccountButton;
        }

        public class Builder {
            internal bool useSdkRealName{ get; set;}
            internal bool useSdkPaymentLimit{ get; set;}
            internal bool useSdkOnlineTimeLimit{ get; set;}
            internal bool showSwitchAccountButton{ get; set;}

            public Builder() {
                this.useSdkRealName = true;
                this.useSdkPaymentLimit = true;
                this.useSdkOnlineTimeLimit = true;
                this.showSwitchAccountButton = true;
            }

            public Builder UseSdkRealName(bool useSdkRealName) {
                this.useSdkRealName = useSdkRealName;
                return this;
            }

            public Builder UseSdkPaymentLimit(bool useSdkPaymentLimit) {
                this.useSdkPaymentLimit = useSdkPaymentLimit;
                return this;
            }

            public Builder UseSdkOnlineTimeLimit(bool useSdkOnlineTimeLimit) {
                this.useSdkOnlineTimeLimit = useSdkOnlineTimeLimit;
                return this;
            }

            public Builder ShowSwitchAccountButton(bool showSwitchAccountButton) {
                this.showSwitchAccountButton = showSwitchAccountButton;
                return this;
            }

            public AntiAddictionFunctionConfig Build() {
                return new AntiAddictionFunctionConfig(this);
            }
        }
	}
}
