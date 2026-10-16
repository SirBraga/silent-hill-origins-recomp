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

// Function: sub_00283A78
// Address: 0x283a78 - 0x283c08
void sub_00283A78_0x283a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283A78_0x283a78");
#endif

    switch (ctx->pc) {
        case 0x283a78u: goto label_283a78;
        case 0x283a7cu: goto label_283a7c;
        case 0x283a80u: goto label_283a80;
        case 0x283a84u: goto label_283a84;
        case 0x283a88u: goto label_283a88;
        case 0x283a8cu: goto label_283a8c;
        case 0x283a90u: goto label_283a90;
        case 0x283a94u: goto label_283a94;
        case 0x283a98u: goto label_283a98;
        case 0x283a9cu: goto label_283a9c;
        case 0x283aa0u: goto label_283aa0;
        case 0x283aa4u: goto label_283aa4;
        case 0x283aa8u: goto label_283aa8;
        case 0x283aacu: goto label_283aac;
        case 0x283ab0u: goto label_283ab0;
        case 0x283ab4u: goto label_283ab4;
        case 0x283ab8u: goto label_283ab8;
        case 0x283abcu: goto label_283abc;
        case 0x283ac0u: goto label_283ac0;
        case 0x283ac4u: goto label_283ac4;
        case 0x283ac8u: goto label_283ac8;
        case 0x283accu: goto label_283acc;
        case 0x283ad0u: goto label_283ad0;
        case 0x283ad4u: goto label_283ad4;
        case 0x283ad8u: goto label_283ad8;
        case 0x283adcu: goto label_283adc;
        case 0x283ae0u: goto label_283ae0;
        case 0x283ae4u: goto label_283ae4;
        case 0x283ae8u: goto label_283ae8;
        case 0x283aecu: goto label_283aec;
        case 0x283af0u: goto label_283af0;
        case 0x283af4u: goto label_283af4;
        case 0x283af8u: goto label_283af8;
        case 0x283afcu: goto label_283afc;
        case 0x283b00u: goto label_283b00;
        case 0x283b04u: goto label_283b04;
        case 0x283b08u: goto label_283b08;
        case 0x283b0cu: goto label_283b0c;
        case 0x283b10u: goto label_283b10;
        case 0x283b14u: goto label_283b14;
        case 0x283b18u: goto label_283b18;
        case 0x283b1cu: goto label_283b1c;
        case 0x283b20u: goto label_283b20;
        case 0x283b24u: goto label_283b24;
        case 0x283b28u: goto label_283b28;
        case 0x283b2cu: goto label_283b2c;
        case 0x283b30u: goto label_283b30;
        case 0x283b34u: goto label_283b34;
        case 0x283b38u: goto label_283b38;
        case 0x283b3cu: goto label_283b3c;
        case 0x283b40u: goto label_283b40;
        case 0x283b44u: goto label_283b44;
        case 0x283b48u: goto label_283b48;
        case 0x283b4cu: goto label_283b4c;
        case 0x283b50u: goto label_283b50;
        case 0x283b54u: goto label_283b54;
        case 0x283b58u: goto label_283b58;
        case 0x283b5cu: goto label_283b5c;
        case 0x283b60u: goto label_283b60;
        case 0x283b64u: goto label_283b64;
        case 0x283b68u: goto label_283b68;
        case 0x283b6cu: goto label_283b6c;
        case 0x283b70u: goto label_283b70;
        case 0x283b74u: goto label_283b74;
        case 0x283b78u: goto label_283b78;
        case 0x283b7cu: goto label_283b7c;
        case 0x283b80u: goto label_283b80;
        case 0x283b84u: goto label_283b84;
        case 0x283b88u: goto label_283b88;
        case 0x283b8cu: goto label_283b8c;
        case 0x283b90u: goto label_283b90;
        case 0x283b94u: goto label_283b94;
        case 0x283b98u: goto label_283b98;
        case 0x283b9cu: goto label_283b9c;
        case 0x283ba0u: goto label_283ba0;
        case 0x283ba4u: goto label_283ba4;
        case 0x283ba8u: goto label_283ba8;
        case 0x283bacu: goto label_283bac;
        case 0x283bb0u: goto label_283bb0;
        case 0x283bb4u: goto label_283bb4;
        case 0x283bb8u: goto label_283bb8;
        case 0x283bbcu: goto label_283bbc;
        case 0x283bc0u: goto label_283bc0;
        case 0x283bc4u: goto label_283bc4;
        case 0x283bc8u: goto label_283bc8;
        case 0x283bccu: goto label_283bcc;
        case 0x283bd0u: goto label_283bd0;
        case 0x283bd4u: goto label_283bd4;
        case 0x283bd8u: goto label_283bd8;
        case 0x283bdcu: goto label_283bdc;
        case 0x283be0u: goto label_283be0;
        case 0x283be4u: goto label_283be4;
        case 0x283be8u: goto label_283be8;
        case 0x283becu: goto label_283bec;
        case 0x283bf0u: goto label_283bf0;
        case 0x283bf4u: goto label_283bf4;
        case 0x283bf8u: goto label_283bf8;
        case 0x283bfcu: goto label_283bfc;
        case 0x283c00u: goto label_283c00;
        case 0x283c04u: goto label_283c04;
        default: break;
    }

    ctx->pc = 0x283a78u;

label_283a78:
    // 0x283a78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x283a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_283a7c:
    // 0x283a7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x283a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_283a80:
    // 0x283a80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x283a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_283a84:
    // 0x283a84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x283a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_283a88:
    // 0x283a88: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x283a88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_283a8c:
    // 0x283a8c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x283a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_283a90:
    // 0x283a90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x283a90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_283a94:
    // 0x283a94: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x283a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_283a98:
    // 0x283a98: 0x2691002c  addiu       $s1, $s4, 0x2C
    ctx->pc = 0x283a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_283a9c:
    // 0x283a9c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x283a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_283aa0:
    // 0x283aa0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x283aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_283aa4:
    // 0x283aa4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x283aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_283aa8:
    // 0x283aa8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x283aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_283aac:
    // 0x283aac: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x283aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_283ab0:
    // 0x283ab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_283ab4:
    // 0x283ab4: 0xc0927be  jal         func_249EF8
label_283ab8:
    if (ctx->pc == 0x283AB8u) {
        ctx->pc = 0x283AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AB4u;
        // 0x283ab8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283ABCu;
        goto label_283abc;
    }
    ctx->pc = 0x283AB4u;
    SET_GPR_U32(ctx, 31, 0x283ABCu);
    ctx->pc = 0x283AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283AB4u;
    // 0x283ab8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x283AB4u, 0x283ABCu)) {
        return;
    }
    ctx->pc = 0x283ABCu;
label_283abc:
    // 0x283abc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_283ac0:
    if (ctx->pc == 0x283AC0u) {
        ctx->pc = 0x283AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283ABCu;
        // 0x283ac0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283AC4u;
        goto label_283ac4;
    }
    ctx->pc = 0x283ABCu;
    {
        const bool branch_taken_0x283abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283ABCu;
        // 0x283ac0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283abc) {
            ctx->pc = 0x283BC0u;
            goto label_283bc0;
        }
    }
    ctx->pc = 0x283AC4u;
label_283ac4:
    // 0x283ac4: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x283ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_283ac8:
    // 0x283ac8: 0xc0927be  jal         func_249EF8
label_283acc:
    if (ctx->pc == 0x283ACCu) {
        ctx->pc = 0x283ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AC8u;
        // 0x283acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283AD0u;
        goto label_283ad0;
    }
    ctx->pc = 0x283AC8u;
    SET_GPR_U32(ctx, 31, 0x283AD0u);
    ctx->pc = 0x283ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283AC8u;
    // 0x283acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x283AC8u, 0x283AD0u)) {
        return;
    }
    ctx->pc = 0x283AD0u;
label_283ad0:
    // 0x283ad0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_283ad4:
    if (ctx->pc == 0x283AD4u) {
        ctx->pc = 0x283AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AD0u;
        // 0x283ad4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283AD8u;
        goto label_283ad8;
    }
    ctx->pc = 0x283AD0u;
    {
        const bool branch_taken_0x283ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AD0u;
        // 0x283ad4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ad0) {
            ctx->pc = 0x283BC0u;
            goto label_283bc0;
        }
    }
    ctx->pc = 0x283AD8u;
label_283ad8:
    // 0x283ad8: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x283ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_283adc:
    // 0x283adc: 0xc0927be  jal         func_249EF8
label_283ae0:
    if (ctx->pc == 0x283AE0u) {
        ctx->pc = 0x283AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283ADCu;
        // 0x283ae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283AE4u;
        goto label_283ae4;
    }
    ctx->pc = 0x283ADCu;
    SET_GPR_U32(ctx, 31, 0x283AE4u);
    ctx->pc = 0x283AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283ADCu;
    // 0x283ae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x283ADCu, 0x283AE4u)) {
        return;
    }
    ctx->pc = 0x283AE4u;
label_283ae4:
    // 0x283ae4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_283ae8:
    if (ctx->pc == 0x283AE8u) {
        ctx->pc = 0x283AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AE4u;
        // 0x283ae8: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283AECu;
        goto label_283aec;
    }
    ctx->pc = 0x283AE4u;
    {
        const bool branch_taken_0x283ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AE4u;
        // 0x283ae8: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ae4) {
            ctx->pc = 0x283BC0u;
            goto label_283bc0;
        }
    }
    ctx->pc = 0x283AECu;
label_283aec:
    // 0x283aec: 0x1a400036  blez        $s2, . + 4 + (0x36 << 2)
label_283af0:
    if (ctx->pc == 0x283AF0u) {
        ctx->pc = 0x283AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AECu;
        // 0x283af0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283AF4u;
        goto label_283af4;
    }
    ctx->pc = 0x283AECu;
    {
        const bool branch_taken_0x283aec = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x283AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AECu;
        // 0x283af0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283aec) {
            ctx->pc = 0x283BC8u;
            goto label_283bc8;
        }
    }
    ctx->pc = 0x283AF4u;
label_283af4:
    // 0x283af4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x283af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_283af8:
    // 0x283af8: 0x8fbe0008  lw          $fp, 0x8($sp)
    ctx->pc = 0x283af8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_283afc:
    // 0x283afc: 0x12b040  sll         $s6, $s2, 1
    ctx->pc = 0x283afcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_283b00:
    // 0x283b00: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x283b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_283b04:
    // 0x283b04: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x283b04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_283b08:
    // 0x283b08: 0xc0a0f02  jal         func_283C08
label_283b0c:
    if (ctx->pc == 0x283B0Cu) {
        ctx->pc = 0x283B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B08u;
        // 0x283b0c: 0x8e970000  lw          $s7, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B10u;
        goto label_283b10;
    }
    ctx->pc = 0x283B08u;
    SET_GPR_U32(ctx, 31, 0x283B10u);
    ctx->pc = 0x283B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B08u;
    // 0x283b0c: 0x8e970000  lw          $s7, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283C08u, 0x283B08u, 0x283B10u)) {
        return;
    }
    ctx->pc = 0x283B10u;
label_283b10:
    // 0x283b10: 0x2f61821  addu        $v1, $s7, $s6
    ctx->pc = 0x283b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
label_283b14:
    // 0x283b14: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x283b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_283b18:
    // 0x283b18: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x283b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_283b1c:
    // 0x283b1c: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x283b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_283b20:
    // 0x283b20: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x283b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_283b24:
    // 0x283b24: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x283b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_283b28:
    // 0x283b28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x283b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283b2c:
    // 0x283b2c: 0x40f809  jalr        $v0
label_283b30:
    if (ctx->pc == 0x283B30u) {
        ctx->pc = 0x283B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B2Cu;
        // 0x283b30: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B34u;
        goto label_283b34;
    }
    ctx->pc = 0x283B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283B34u);
        ctx->pc = 0x283B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B2Cu;
        // 0x283b30: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283B2Cu, 0x283B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283B34u;
label_283b34:
    // 0x283b34: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x283b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_283b38:
    // 0x283b38: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_283b3c:
    if (ctx->pc == 0x283B3Cu) {
        ctx->pc = 0x283B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B38u;
        // 0x283b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B40u;
        goto label_283b40;
    }
    ctx->pc = 0x283B38u;
    {
        const bool branch_taken_0x283b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B38u;
        // 0x283b3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b38) {
            ctx->pc = 0x283B78u;
            goto label_283b78;
        }
    }
    ctx->pc = 0x283B40u;
label_283b40:
    // 0x283b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x283b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283b44:
    // 0x283b44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x283b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283b48:
    // 0x283b48: 0xc0c493d  jal         func_3124F4
label_283b4c:
    if (ctx->pc == 0x283B4Cu) {
        ctx->pc = 0x283B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B48u;
        // 0x283b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B50u;
        goto label_283b50;
    }
    ctx->pc = 0x283B48u;
    SET_GPR_U32(ctx, 31, 0x283B50u);
    ctx->pc = 0x283B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B48u;
    // 0x283b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x283B48u, 0x283B50u)) {
        return;
    }
    ctx->pc = 0x283B50u;
label_283b50:
    // 0x283b50: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x283b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_283b54:
    // 0x283b54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x283b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_283b58:
    // 0x283b58: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x283b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_283b5c:
    // 0x283b5c: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x283b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
label_283b60:
    // 0x283b60: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x283b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_283b64:
    // 0x283b64: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x283b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_283b68:
    // 0x283b68: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x283b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_283b6c:
    // 0x283b6c: 0xae3e0008  sw          $fp, 0x8($s1)
    ctx->pc = 0x283b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 30));
label_283b70:
    // 0x283b70: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x283b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_283b74:
    // 0x283b74: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x283b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_283b78:
    // 0x283b78: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_283b7c:
    if (ctx->pc == 0x283B7Cu) {
        ctx->pc = 0x283B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B78u;
        // 0x283b7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283B80u;
        goto label_283b80;
    }
    ctx->pc = 0x283B78u;
    {
        const bool branch_taken_0x283b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B78u;
        // 0x283b7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b78) {
            ctx->pc = 0x283BC0u;
            goto label_283bc0;
        }
    }
    ctx->pc = 0x283B80u;
label_283b80:
    // 0x283b80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x283b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_283b84:
    // 0x283b84: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x283b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_283b88:
    // 0x283b88: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x283b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_283b8c:
    // 0x283b8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x283b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_283b90:
    // 0x283b90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x283b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_283b94:
    // 0x283b94: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x283b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_283b98:
    // 0x283b98: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x283b98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_283b9c:
    // 0x283b9c: 0xc093546  jal         func_24D518
label_283ba0:
    if (ctx->pc == 0x283BA0u) {
        ctx->pc = 0x283BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B9Cu;
        // 0x283ba0: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BA4u;
        goto label_283ba4;
    }
    ctx->pc = 0x283B9Cu;
    SET_GPR_U32(ctx, 31, 0x283BA4u);
    ctx->pc = 0x283BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B9Cu;
    // 0x283ba0: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x283B9Cu, 0x283BA4u)) {
        return;
    }
    ctx->pc = 0x283BA4u;
label_283ba4:
    // 0x283ba4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_283ba8:
    if (ctx->pc == 0x283BA8u) {
        ctx->pc = 0x283BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BA4u;
        // 0x283ba8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BACu;
        goto label_283bac;
    }
    ctx->pc = 0x283BA4u;
    {
        const bool branch_taken_0x283ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283ba4) {
            ctx->pc = 0x283BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283BA4u;
            // 0x283ba8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283BCCu;
            goto label_283bcc;
        }
    }
    ctx->pc = 0x283BACu;
label_283bac:
    // 0x283bac: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x283bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_283bb0:
    // 0x283bb0: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x283bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_283bb4:
    // 0x283bb4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x283bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_283bb8:
    // 0x283bb8: 0x40f809  jalr        $v0
label_283bbc:
    if (ctx->pc == 0x283BBCu) {
        ctx->pc = 0x283BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BB8u;
        // 0x283bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BC0u;
        goto label_283bc0;
    }
    ctx->pc = 0x283BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283BC0u);
        ctx->pc = 0x283BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BB8u;
        // 0x283bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283BB8u, 0x283BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283BC0u;
label_283bc0:
    // 0x283bc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_283bc4:
    if (ctx->pc == 0x283BC4u) {
        ctx->pc = 0x283BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BC0u;
        // 0x283bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BC8u;
        goto label_283bc8;
    }
    ctx->pc = 0x283BC0u;
    {
        const bool branch_taken_0x283bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BC0u;
        // 0x283bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bc0) {
            ctx->pc = 0x283BCCu;
            goto label_283bcc;
        }
    }
    ctx->pc = 0x283BC8u;
label_283bc8:
    // 0x283bc8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x283bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_283bcc:
    // 0x283bcc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x283bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_283bd0:
    // 0x283bd0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x283bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_283bd4:
    // 0x283bd4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x283bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_283bd8:
    // 0x283bd8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x283bd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_283bdc:
    // 0x283bdc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x283bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_283be0:
    // 0x283be0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x283be0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_283be4:
    // 0x283be4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x283be4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_283be8:
    // 0x283be8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x283be8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_283bec:
    // 0x283bec: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x283becu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_283bf0:
    // 0x283bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_283bf4:
    // 0x283bf4: 0x3e00008  jr          $ra
label_283bf8:
    if (ctx->pc == 0x283BF8u) {
        ctx->pc = 0x283BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BF4u;
        // 0x283bf8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283BFCu;
        goto label_283bfc;
    }
    ctx->pc = 0x283BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BF4u;
        // 0x283bf8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283BFCu;
label_283bfc:
    // 0x283bfc: 0x0  nop
    ctx->pc = 0x283bfcu;
    // NOP
label_283c00:
    // 0x283c00: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x283c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_283c04:
    // 0x283c04: 0x0  nop
    ctx->pc = 0x283c04u;
    // NOP
    ctx->pc = 0x283c08u;
}
