#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADB30
// Address: 0x1adb30 - 0x1addb0
void sub_001ADB30_0x1adb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADB30_0x1adb30");
#endif

    switch (ctx->pc) {
        case 0x1adb90u: goto label_1adb90;
        case 0x1adba0u: goto label_1adba0;
        case 0x1adbb8u: goto label_1adbb8;
        case 0x1adc2cu: goto label_1adc2c;
        case 0x1adc3cu: goto label_1adc3c;
        case 0x1adc60u: goto label_1adc60;
        case 0x1adc78u: goto label_1adc78;
        case 0x1adcb8u: goto label_1adcb8;
        case 0x1adcf8u: goto label_1adcf8;
        case 0x1add38u: goto label_1add38;
        case 0x1add78u: goto label_1add78;
        default: break;
    }

    ctx->pc = 0x1adb30u;

    // 0x1adb30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1adb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1adb34: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1adb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1adb38: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1adb38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb3c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1adb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1adb40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1adb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1adb44: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1adb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1adb48: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1adb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1adb4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1adb4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb50: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1adb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1adb54: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1adb54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1adb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1adb5c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1adb5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb60: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1adb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1adb64: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x1adb64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb68: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1adb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1adb6c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x1adb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x1adb70: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1adb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1adb74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1adb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1adb7c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1adb7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adb80: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1adb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1adb84: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x1adb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x1adb88: 0xc08114c  jal         func_204530
    ctx->pc = 0x1ADB88u;
    SET_GPR_U32(ctx, 31, 0x1ADB90u);
    ctx->pc = 0x1ADB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB88u;
    // 0x1adb8c: 0xafaa0008  sw          $t2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x1ADB88u, 0x1ADB90u)) {
        return;
    }
    ctx->pc = 0x1ADB90u;
label_1adb90:
    // 0x1adb90: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1ADB90u;
    {
        const bool branch_taken_0x1adb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB90u;
        // 0x1adb94: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb90) {
            ctx->pc = 0x1ADD78u;
            goto label_1add78;
        }
    }
    ctx->pc = 0x1ADB98u;
    // 0x1adb98: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1ADB98u;
    SET_GPR_U32(ctx, 31, 0x1ADBA0u);
    ctx->pc = 0x1ADB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB98u;
    // 0x1adb9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1ADB98u, 0x1ADBA0u)) {
        return;
    }
    ctx->pc = 0x1ADBA0u;
label_1adba0:
    // 0x1adba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1adba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adba4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1adba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1adba8: 0x2484b870  addiu       $a0, $a0, -0x4790
    ctx->pc = 0x1adba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948976));
    // 0x1adbac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1adbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1adbb0: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x1ADBB0u;
    SET_GPR_U32(ctx, 31, 0x1ADBB8u);
    ctx->pc = 0x1ADBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADBB0u;
    // 0x1adbb4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1ADBB0u, 0x1ADBB8u)) {
        return;
    }
    ctx->pc = 0x1ADBB8u;
label_1adbb8:
    // 0x1adbb8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1adbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1adbbc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1adbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1adbc0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1adbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1adbc4: 0x24a38610  addiu       $v1, $a1, -0x79F0
    ctx->pc = 0x1adbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936080));
    // 0x1adbc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1adbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8614u));
    // 0x1adbcc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADBCCu;
    {
        const bool branch_taken_0x1adbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBCCu;
        // 0x1adbd0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbcc) {
            ctx->pc = 0x1ADBD8u;
            goto label_1adbd8;
        }
    }
    ctx->pc = 0x1ADBD4u;
    // 0x1adbd4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1adbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1adbd8:
    // 0x1adbd8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1adbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1adbdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADBDCu;
    {
        const bool branch_taken_0x1adbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBDCu;
        // 0x1adbe0: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbdc) {
            ctx->pc = 0x1ADBE8u;
            goto label_1adbe8;
        }
    }
    ctx->pc = 0x1ADBE4u;
    // 0x1adbe4: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1adbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_1adbe8:
    // 0x1adbe8: 0x8ca28610  lw          $v0, -0x79F0($a1)
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936080)));
    // 0x1adbec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1adbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1adbf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1adbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1adbf4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1adbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1adbf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1adbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1adbfc: 0xac8390dc  sw          $v1, -0x6F24($a0)
    ctx->pc = 0x1adbfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3390DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3390DCu, _value); } while (0);
    // 0x1adc00: 0xaca28610  sw          $v0, -0x79F0($a1)
    ctx->pc = 0x1adc00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936080), GPR_U32(ctx, 2));
    // 0x1adc04: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1adc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc08: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1adc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1adc0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc10: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1adc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1adc14: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1adc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1adc18: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1adc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1adc1c: 0x2632004c  addiu       $s2, $s1, 0x4C
    ctx->pc = 0x1adc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x1adc20: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1adc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1adc24: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1ADC24u;
    SET_GPR_U32(ctx, 31, 0x1ADC2Cu);
    ctx->pc = 0x1ADC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC24u;
    // 0x1adc28: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1ADC24u, 0x1ADC2Cu)) {
        return;
    }
    ctx->pc = 0x1ADC2Cu;
label_1adc2c:
    // 0x1adc2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1adc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc34: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1ADC34u;
    SET_GPR_U32(ctx, 31, 0x1ADC3Cu);
    ctx->pc = 0x1ADC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC34u;
    // 0x1adc38: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1ADC34u, 0x1ADC3Cu)) {
        return;
    }
    ctx->pc = 0x1ADC3Cu;
label_1adc3c:
    // 0x1adc3c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1adc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1adc40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1adc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adc44: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x1adc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x1adc48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADC48u;
    {
        const bool branch_taken_0x1adc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ADC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC48u;
        // 0x1adc4c: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc48) {
            ctx->pc = 0x1ADC58u;
            goto label_1adc58;
        }
    }
    ctx->pc = 0x1ADC50u;
    // 0x1adc50: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x1adc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
    // 0x1adc54: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1adc54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1adc58:
    // 0x1adc58: 0xc06b8a8  jal         func_1AE2A0
    ctx->pc = 0x1ADC58u;
    SET_GPR_U32(ctx, 31, 0x1ADC60u);
    ctx->pc = 0x1ADC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC58u;
    // 0x1adc5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE2A0u, 0x1ADC58u, 0x1ADC60u)) {
        return;
    }
    ctx->pc = 0x1ADC60u;
label_1adc60:
    // 0x1adc60: 0xae370030  sw          $s7, 0x30($s1)
    ctx->pc = 0x1adc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 23));
    // 0x1adc64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc68: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x1adc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x1adc6c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1adc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1adc70: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1ADC70u;
    SET_GPR_U32(ctx, 31, 0x1ADC78u);
    ctx->pc = 0x1ADC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC70u;
    // 0x1adc74: 0xae2000c8  sw          $zero, 0xC8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1ADC70u, 0x1ADC78u)) {
        return;
    }
    ctx->pc = 0x1ADC78u;
label_1adc78:
    // 0x1adc78: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADC78u;
    {
        const bool branch_taken_0x1adc78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC78u;
        // 0x1adc7c: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc78) {
            ctx->pc = 0x1ADCB8u;
            goto label_1adcb8;
        }
    }
    ctx->pc = 0x1ADC80u;
    // 0x1adc80: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x1adc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1adc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc88: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x1adc88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1adc8c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1adc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1adc90: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1adc90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x1adc94: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1adc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1adc98: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1adc98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1adc9c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1adc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1adca0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1adca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adca4: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x1adca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x1adca8: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x1adca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1adcac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1adcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1adcb0: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1ADCB0u;
    SET_GPR_U32(ctx, 31, 0x1ADCB8u);
    ctx->pc = 0x1ADCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCB0u;
    // 0x1adcb4: 0xae2300bc  sw          $v1, 0xBC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1ADCB0u, 0x1ADCB8u)) {
        return;
    }
    ctx->pc = 0x1ADCB8u;
label_1adcb8:
    // 0x1adcb8: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADCB8u;
    {
        const bool branch_taken_0x1adcb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCB8u;
        // 0x1adcbc: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcb8) {
            ctx->pc = 0x1ADCF8u;
            goto label_1adcf8;
        }
    }
    ctx->pc = 0x1ADCC0u;
    // 0x1adcc0: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1adcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1adcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcc8: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x1adcc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1adccc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1adcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1adcd0: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x1adcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x1adcd4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1adcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1adcd8: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1adcd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1adcdc: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1adcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1adce0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1adce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1adce4: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x1adce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x1adce8: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1adcec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1adcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1adcf0: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1ADCF0u;
    SET_GPR_U32(ctx, 31, 0x1ADCF8u);
    ctx->pc = 0x1ADCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCF0u;
    // 0x1adcf4: 0xae2300bc  sw          $v1, 0xBC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1ADCF0u, 0x1ADCF8u)) {
        return;
    }
    ctx->pc = 0x1ADCF8u;
label_1adcf8:
    // 0x1adcf8: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADCF8u;
    {
        const bool branch_taken_0x1adcf8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCF8u;
        // 0x1adcfc: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcf8) {
            ctx->pc = 0x1ADD38u;
            goto label_1add38;
        }
    }
    ctx->pc = 0x1ADD00u;
    // 0x1add00: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x1add00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1add04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add08: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x1add08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1add0c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1add0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1add10: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x1add10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x1add14: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1add14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1add18: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1add18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1add1c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1add1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1add20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1add20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1add24: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x1add24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x1add28: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x1add28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1add2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1add30: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1ADD30u;
    SET_GPR_U32(ctx, 31, 0x1ADD38u);
    ctx->pc = 0x1ADD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD30u;
    // 0x1add34: 0xae2300bc  sw          $v1, 0xBC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1ADD30u, 0x1ADD38u)) {
        return;
    }
    ctx->pc = 0x1ADD38u;
label_1add38:
    // 0x1add38: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADD38u;
    {
        const bool branch_taken_0x1add38 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD38u;
        // 0x1add3c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add38) {
            ctx->pc = 0x1ADD78u;
            goto label_1add78;
        }
    }
    ctx->pc = 0x1ADD40u;
    // 0x1add40: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1add40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1add44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add48: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x1add48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1add4c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1add4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1add50: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x1add50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x1add54: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x1add54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1add58: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1add58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1add5c: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x1add5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1add60: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1add60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1add64: 0xac650054  sw          $a1, 0x54($v1)
    ctx->pc = 0x1add64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 5));
    // 0x1add68: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1add68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1add6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1add6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1add70: 0xc06b568  jal         func_1AD5A0
    ctx->pc = 0x1ADD70u;
    SET_GPR_U32(ctx, 31, 0x1ADD78u);
    ctx->pc = 0x1ADD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD70u;
    // 0x1add74: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1ADD70u, 0x1ADD78u)) {
        return;
    }
    ctx->pc = 0x1ADD78u;
label_1add78:
    // 0x1add78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1add78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add7c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1add7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1add80: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1add80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1add84: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1add84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1add88: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1add88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1add8c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1add8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1add90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1add90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1add94: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1add94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add98: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1add98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1add9c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1add9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adda0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adda4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDA4u;
        // 0x1adda8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADDACu;
    // 0x1addac: 0x0  nop
    ctx->pc = 0x1addacu;
    // NOP
    ctx->pc = 0x1addb0u;
}
