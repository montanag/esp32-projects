/*
 * SPDX-FileCopyrightText: 2015-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

// MSPI IOMUX PINs
#define MSPI_FUNC_NUM               1
#define MSPI_IOMUX_PIN_NUM_CLK      6
#define MSPI_IOMUX_PIN_NUM_MISO     7
#define MSPI_IOMUX_PIN_NUM_MOSI     8
#define MSPI_IOMUX_PIN_NUM_HD       9
#define MSPI_IOMUX_PIN_NUM_WP       10
#define MSPI_IOMUX_PIN_NUM_CS0      11

//For D2WD and PICO-D4 chip
#define SPI_D2WD_PIN_NUM_MISO       17
#define SPI_D2WD_PIN_NUM_MOSI       8
#define SPI_D2WD_PIN_NUM_CLK        6
#define SPI_D2WD_PIN_NUM_CS         16
#define SPI_D2WD_PIN_NUM_WP         7
#define SPI_D2WD_PIN_NUM_HD         11

#define SPI2_FUNC_NUM           HSPI_FUNC_NUM
#define SPI2_IOMUX_PIN_NUM_MISO HSPI_IOMUX_PIN_NUM_MISO
#define SPI2_IOMUX_PIN_NUM_MOSI HSPI_IOMUX_PIN_NUM_MOSI
#define SPI2_IOMUX_PIN_NUM_CLK  HSPI_IOMUX_PIN_NUM_CLK
#define SPI2_IOMUX_PIN_NUM_CS   HSPI_IOMUX_PIN_NUM_CS
#define SPI2_IOMUX_PIN_NUM_WP   HSPI_IOMUX_PIN_NUM_WP
#define SPI2_IOMUX_PIN_NUM_HD   HSPI_IOMUX_PIN_NUM_HD

#define SPI3_FUNC_NUM           VSPI_FUNC_NUM
#define SPI3_IOMUX_PIN_NUM_MISO VSPI_IOMUX_PIN_NUM_MISO
#define SPI3_IOMUX_PIN_NUM_MOSI VSPI_IOMUX_PIN_NUM_MOSI
#define SPI3_IOMUX_PIN_NUM_CLK  VSPI_IOMUX_PIN_NUM_CLK
#define SPI3_IOMUX_PIN_NUM_CS   VSPI_IOMUX_PIN_NUM_CS
#define SPI3_IOMUX_PIN_NUM_WP   VSPI_IOMUX_PIN_NUM_WP
#define SPI3_IOMUX_PIN_NUM_HD   VSPI_IOMUX_PIN_NUM_HD

//Following Macros are deprecated. Please use the Macros above
#define HSPI_FUNC_NUM           1
#define HSPI_IOMUX_PIN_NUM_MISO 12
#define HSPI_IOMUX_PIN_NUM_MOSI 13
#define HSPI_IOMUX_PIN_NUM_CLK  14
#define HSPI_IOMUX_PIN_NUM_CS   15
#define HSPI_IOMUX_PIN_NUM_WP   2
#define HSPI_IOMUX_PIN_NUM_HD   4

#define VSPI_FUNC_NUM           1
#define VSPI_IOMUX_PIN_NUM_MISO 19
#define VSPI_IOMUX_PIN_NUM_MOSI 23
#define VSPI_IOMUX_PIN_NUM_CLK  18
#define VSPI_IOMUX_PIN_NUM_CS   5
#define VSPI_IOMUX_PIN_NUM_WP   22
#define VSPI_IOMUX_PIN_NUM_HD   21