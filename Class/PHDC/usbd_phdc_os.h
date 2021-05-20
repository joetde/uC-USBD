/*
*********************************************************************************************************
*                                            uC/USB-Device
*                                    The Embedded USB Device Stack
*
*                    Copyright 2004-2021 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                USB PHDC CLASS OPERATING SYSTEM LAYER
*
* Filename : usbd_phdc_os.h
* Version  : V4.06.01
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/

#ifndef  USBD_PHDC_OS_MODULE_PRESENT
#define  USBD_PHDC_OS_MODULE_PRESENT


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  "../../Source/usbd_core.h"
#include  <Source/os.h>


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MACRO'S
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void  USBD_PHDC_OS_Init        ( USBD_ERR   *p_err);

void  USBD_PHDC_OS_RdLock      (CPU_INT08U   class_nbr,
                                CPU_INT16U   timeout,
                                USBD_ERR    *p_err);

void  USBD_PHDC_OS_RdUnlock    (CPU_INT08U   class_nbr);


void  USBD_PHDC_OS_WrBulkLock  (CPU_INT08U   class_nbr,
                                CPU_INT08U   prio,
                                CPU_INT16U   timeout,
                                USBD_ERR    *p_err);

void  USBD_PHDC_OS_WrBulkUnlock(CPU_INT08U   class_nbr);

void  USBD_PHDC_OS_WrIntrLock  (CPU_INT08U   class_nbr,
                                CPU_INT16U   timeout,
                                USBD_ERR    *p_err);

void  USBD_PHDC_OS_WrIntrUnlock(CPU_INT08U   class_nbr);

void  USBD_PHDC_OS_Reset       (CPU_INT08U   class_nbr);


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/

#if (OS_VERSION >= 30000)
#error  "USB-Device PHDC class is not supported by uC/OS-III"
#endif


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif
