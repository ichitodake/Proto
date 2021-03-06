/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 */

#ifndef __USB_CORE_XHCI_PDRIVER_H
#define __USB_CORE_XHCI_PDRIVER_H

/**
 * struct usb_xhci_pdata - platform_data for generic xhci platform driver
 *
 * @usb3_lpm_capable:	determines if this xhci platform supports USB3
 *			LPM capability
 *
 */
struct usb_xhci_pdata {
	unsigned	usb3_lpm_capable:1;
	unsigned	ctrl_nyet_abnormal:1;
#ifdef CONFIG_USB_DWC3_NYET_ABNORMAL
	unsigned	hcd_local_mem:1;
	unsigned	disable_lpm:1;
	unsigned	not_support_sg:1;
#endif
};

#endif /* __USB_CORE_XHCI_PDRIVER_H */
