#define CONFIG_QEMU_TARGET 1
#define CONFIG_HAS_COVERAGE_SUPPORT 1
#define CONFIG_KERNEL_VM_SIZE 0x800000
#define CONFIG_MULTIBOOT 1
#define CONFIG_MULTIBOOT_INFO 1
#define CONFIG_MULTIBOOT_MEMMAP 1
#define CONFIG_QEMU_ICOUNT 1
#define CONFIG_QEMU_ICOUNT_SHIFT 5
#define CONFIG_X86_PC_COMPATIBLE 1
#define CONFIG_X86_EXTRA_PAGE_TABLE_PAGES 0
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 25000000
#define CONFIG_FLASH_SIZE 4096
#define CONFIG_FLASH_BASE_ADDRESS 0x500000
#define CONFIG_MP_MAX_NUM_CPUS 1
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 100
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_UART_NS16550 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_DCACHE 1
#define CONFIG_SERIAL 1
#define CONFIG_UART_USE_RUNTIME_CONFIGURE 1
#define CONFIG_CPU_HAS_DCACHE 1
#define CONFIG_CONSOLE 1
#define CONFIG_COMMON_LIBC_MALLOC_ARENA_SIZE 16384
#define CONFIG_X86_VERY_EARLY_CONSOLE 1
#define CONFIG_SRAM_OFFSET 0x100000
#define CONFIG_GDT_DYNAMIC 1
#define CONFIG_GDT_RESERVED_NUM_ENTRIES 0
#define CONFIG_CPU_HAS_MMU 1
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_PRIVILEGED_STACK_SIZE 4096
#define CONFIG_KERNEL_VM_OFFSET 0x100000
#define CONFIG_DT_HAS_FIXED_PARTITIONS_ENABLED 1
#define CONFIG_DT_HAS_INTEL_E1000_ENABLED 1
#define CONFIG_DT_HAS_INTEL_HPET_ENABLED 1
#define CONFIG_DT_HAS_INTEL_IOAPIC_ENABLED 1
#define CONFIG_DT_HAS_INTEL_LOAPIC_ENABLED 1
#define CONFIG_DT_HAS_INTEL_X86_ENABLED 1
#define CONFIG_DT_HAS_KVASER_PCICAN_ENABLED 1
#define CONFIG_DT_HAS_MOTOROLA_MC146818_ENABLED 1
#define CONFIG_DT_HAS_NS16550_ENABLED 1
#define CONFIG_DT_HAS_PCIE_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_SOC_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_BT_HCI_UART_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_EMU_EEPROM_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_IEEE802154_UART_PIPE_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_SIM_EEPROM_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_SIM_FLASH_ENABLED 1
#define CONFIG_ZEPHYR_ACPICA_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_DSP_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_NN_MODULE 1
#define CONFIG_ZEPHYR_FATFS_MODULE 1
#define CONFIG_ZEPHYR_ADI_MODULE 1
#define CONFIG_ZEPHYR_ALTERA_MODULE 1
#define CONFIG_ZEPHYR_HAL_AMBIQ_MODULE 1
#define CONFIG_ZEPHYR_ATMEL_MODULE 1
#define CONFIG_ZEPHYR_HAL_ESPRESSIF_MODULE 1
#define CONFIG_ZEPHYR_HAL_ETHOS_U_MODULE 1
#define CONFIG_ZEPHYR_HAL_GIGADEVICE_MODULE 1
#define CONFIG_ZEPHYR_HAL_INFINEON_MODULE 1
#define CONFIG_ZEPHYR_HAL_INTEL_MODULE 1
#define CONFIG_ZEPHYR_MICROCHIP_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_ZEPHYR_NUVOTON_MODULE 1
#define CONFIG_ZEPHYR_HAL_NXP_MODULE 1
#define CONFIG_ZEPHYR_OPENISA_MODULE 1
#define CONFIG_ZEPHYR_QUICKLOGIC_MODULE 1
#define CONFIG_ZEPHYR_HAL_RENESAS_MODULE 1
#define CONFIG_ZEPHYR_HAL_RPI_PICO_MODULE 1
#define CONFIG_ZEPHYR_HAL_SILABS_MODULE 1
#define CONFIG_ZEPHYR_HAL_ST_MODULE 1
#define CONFIG_ZEPHYR_HAL_STM32_MODULE 1
#define CONFIG_ZEPHYR_HAL_TDK_MODULE 1
#define CONFIG_ZEPHYR_HAL_TELINK_MODULE 1
#define CONFIG_ZEPHYR_TI_MODULE 1
#define CONFIG_ZEPHYR_HAL_WCH_MODULE 1
#define CONFIG_ZEPHYR_HAL_WURTHELEKTRONIK_MODULE 1
#define CONFIG_ZEPHYR_XTENSA_MODULE 1
#define CONFIG_ZEPHYR_HOSTAP_MODULE 1
#define CONFIG_ZEPHYR_LIBLC3_MODULE 1
#define CONFIG_ZEPHYR_LIBMCTP_MODULE 1
#define CONFIG_ZEPHYR_LIBMETAL_MODULE 1
#define CONFIG_ZEPHYR_LITTLEFS_MODULE 1
#define CONFIG_ZEPHYR_LORAMAC_NODE_MODULE 1
#define CONFIG_ZEPHYR_LVGL_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_ZEPHYR_MCUBOOT_MODULE 1
#define CONFIG_ZEPHYR_MIPI_SYS_T_MODULE 1
#define CONFIG_ZEPHYR_NRF_WIFI_MODULE 1
#define CONFIG_ZEPHYR_OPEN_AMP_MODULE 1
#define CONFIG_ZEPHYR_OPENTHREAD_MODULE 1
#define CONFIG_ZEPHYR_PERCEPIO_MODULE 1
#define CONFIG_ZEPHYR_PICOLIBC_MODULE 1
#define CONFIG_ZEPHYR_SEGGER_MODULE 1
#define CONFIG_ZEPHYR_TINYCRYPT_MODULE 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_A_MODULE 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE 1
#define CONFIG_ZEPHYR_UOSCORE_UEDHOC_MODULE 1
#define CONFIG_ZEPHYR_ZCBOR_MODULE 1
#define CONFIG_ZEPHYR_NRF_HW_MODELS_MODULE 1
#define CONFIG_BOARD "qemu_x86"
#define CONFIG_BOARD_REVISION ""
#define CONFIG_BOARD_TARGET "qemu_x86/atom"
#define CONFIG_BOARD_QEMU_X86 1
#define CONFIG_BOARD_QEMU_X86_ATOM 1
#define CONFIG_BOARD_QUALIFIERS "atom"
#define CONFIG_QEMU_GDBSERVER_LISTEN_DEV "tcp::1234"
#define CONFIG_QEMU_EXTRA_FLAGS ""
#define CONFIG_SOC "atom"
#define CONFIG_SOC_ATOM 1
#define CONFIG_MMU_PAGE_SIZE 0x1000
#define CONFIG_ARCH "x86"
#define CONFIG_CPU_ATOM 1
#define CONFIG_X86_CPU_HAS_MMX 1
#define CONFIG_X86_CPU_HAS_SSE 1
#define CONFIG_X86_CPU_HAS_SSE2 1
#define CONFIG_X86_CPU_HAS_SSE3 1
#define CONFIG_MAX_IRQ_LINES 128
#define CONFIG_PIC_DISABLE 1
#define CONFIG_X86_MEMMAP 1
#define CONFIG_X86_MEMMAP_ENTRIES 64
#define CONFIG_X86_MMU 1
#define CONFIG_NESTED_INTERRUPTS 1
#define CONFIG_IDT_NUM_VECTORS 256
#define CONFIG_SET_GDT 1
#define CONFIG_X86_PAE 1
#define CONFIG_X86_FP_USE_SOFT_FLOAT 1
#define CONFIG_ARCH_HAS_STACKWALK 1
#define CONFIG_X86_USE_THREAD_LOCAL_STORAGE 1
#define CONFIG_X86 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_LITTLE_ENDIAN 1
#define CONFIG_SRAM_SIZE 32768
#define CONFIG_SRAM_BASE_ADDRESS 0x0
#define CONFIG_ARCH_STACKWALK 1
#define CONFIG_ARCH_STACKWALK_MAX_FRAMES 8
#define CONFIG_EXCEPTION_DEBUG 1
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP_PRIV_STACKS 1
#define CONFIG_ARCH_SUPPORTS_ROM_START 1
#define CONFIG_ARCH_HAS_GDBSTUB 1
#define CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE 1
#define CONFIG_ARCH_HAS_STACK_CANARIES_TLS 1
#define CONFIG_ARCH_SUPPORTS_MEM_MAPPED_STACKS 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_ARCH_HAS_DEMAND_PAGING 1
#define CONFIG_ARCH_HAS_DEMAND_MAPPING 1
#define CONFIG_ARCH_HAS_RESERVED_PAGE_FRAMES 1
#define CONFIG_SRAM_REGION_PERMISSIONS 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_SCHED_SCALABLE 1
#define CONFIG_WAITQ_SCALABLE 1
#define CONFIG_LIBC_ERRNO 1
#define CONFIG_ERRNO 1
#define CONFIG_CURRENT_THREAD_USE_TLS 1
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_BANNER_STRING "Booting Zephyr OS build"
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS 365
#define CONFIG_STACK_POINTER_RANDOM 0
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_THREAD_LOCAL_STORAGE 1
#define CONFIG_TOOLCHAIN_SUPPORTS_STATIC_INIT_GNU 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_LIBC 35
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_KERNEL_VM_SUPPORT 1
#define CONFIG_KERNEL_VM_BASE 0x0
#define CONFIG_MMU 1
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_CONSOLE_INIT_PRIORITY 60
#define CONFIG_UART_CONSOLE 1
#define CONFIG_INTC_INIT_PRIORITY 40
#define CONFIG_LOAPIC 1
#define CONFIG_IOAPIC 1
#define CONFIG_IOAPIC_MASK_RTE 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_SERIAL_INIT_PRIORITY 50
#define CONFIG_UART_NS16550_VARIANT_NS16550 1
#define CONFIG_TIMER_HAS_64BIT_CYCLE_COUNTER 1
#define CONFIG_TIMER_READS_ITS_FREQUENCY_AT_RUNTIME 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_HPET_TIMER 1
#define CONFIG_CORTEX_M_SYSTICK_LPM_TIMER_NONE 1
#define CONFIG_FULL_LIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC_SUPPORTED 1
#define CONFIG_NEWLIB_LIBC_SUPPORTED 1
#define CONFIG_PICOLIBC_SUPPORTED 1
#define CONFIG_PICOLIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_COMMON_LIBC_ABORT 1
#define CONFIG_COMMON_LIBC_MALLOC 1
#define CONFIG_COMMON_LIBC_CALLOC 1
#define CONFIG_COMMON_LIBC_REALLOCARRAY 1
#define CONFIG_PICOLIBC_USE_TOOLCHAIN 1
#define CONFIG_PICOLIBC_IO_LONG_LONG 1
#define CONFIG_STDOUT_CONSOLE 1
#define CONFIG_NEED_LIBC_MEM_PARTITION 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_SYS_HEAP_ARRAY_SIZE 0
#define CONFIG_SYS_HEAP_AUTO 1
#define CONFIG_ZVFS_OPEN_MAX 4
#define CONFIG_CBPRINTF_COMPLETE 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_CBPRINTF_CONVERT_CHECK_PTR 1
#define CONFIG_POSIX_AEP_CHOICE_NONE 1
#define CONFIG_POSIX_OPEN_MAX 4
#define CONFIG_POSIX_PAGE_SIZE 0x1000
#define CONFIG_TC_PROVIDES_POSIX_C_LANG_SUPPORT_R 1
#define CONFIG_LIBGCC_RTLIB 1
#define CONFIG_RING_BUFFER 1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_DEBUG_INFO 1
#define CONFIG_EXCEPTION_STACK_TRACE 1
#define CONFIG_TEST_RANDOM_GENERATOR 1
#define CONFIG_TIMER_RANDOM_INITIAL_STATE 123456789
#define CONFIG_TIMER_RANDOM_GENERATOR 1
#define CONFIG_TEST_CSPRNG_GENERATOR 1
#define CONFIG_TOOLCHAIN_ZEPHYR_0_17 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_GNU_EXTENSIONS 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_ROM_END_OFFSET 0x0
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_HAS_SRAM_OFFSET 1
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_LINKER_USE_RELAX 1
#define CONFIG_LINKER_ITERABLE_SUBALIGN 4
#define CONFIG_STD_C99 1
#define CONFIG_TOOLCHAIN_SUPPORTS_GNU_EXTENSIONS 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_TRACK_MACRO_EXPANSION 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_FORTIFY_SOURCE_COMPILE_TIME 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_TOOLCHAIN_SUPPORTS_VLA_IN_STATEMENTS 1
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_GAP_FILL_PATTERN 0xFF
#define CONFIG_BUILD_OUTPUT_STRIP_PATHS 1
#define CONFIG_CHECK_INIT_PRIORITIES 1
#define CONFIG_WARN_DEPRECATED 1
#define CONFIG_ENFORCE_ZEPHYR_STDINT 1
#define CONFIG_LEGACY_GENERATED_INCLUDE_PATH 1
