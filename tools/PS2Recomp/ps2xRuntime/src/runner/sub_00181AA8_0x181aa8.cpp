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

// Function: sub_00181AA8
// Address: 0x181aa8 - 0x181d20
void sub_00181AA8_0x181aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181AA8_0x181aa8");
#endif

    switch (ctx->pc) {
        case 0x181b24u: goto label_181b24;
        case 0x181b4cu: goto label_181b4c;
        case 0x181b88u: goto label_181b88;
        case 0x181ba0u: goto label_181ba0;
        case 0x181bb8u: goto label_181bb8;
        case 0x181bd8u: goto label_181bd8;
        case 0x181c0cu: goto label_181c0c;
        case 0x181c30u: goto label_181c30;
        case 0x181c48u: goto label_181c48;
        case 0x181c58u: goto label_181c58;
        case 0x181c80u: goto label_181c80;
        case 0x181ca8u: goto label_181ca8;
        case 0x181cf0u: goto label_181cf0;
        default: break;
    }

    ctx->pc = 0x181aa8u;

    // 0x181aa8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x181aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x181aac: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x181aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x181ab0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x181ab4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x181ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x181ab8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x181ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x181abc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x181abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x181ac0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x181ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x181ac4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x181ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x181ac8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x181ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x181acc: 0x84103  sra         $t0, $t0, 4
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 4));
    // 0x181ad0: 0xa38825  or          $s1, $a1, $v1
    ctx->pc = 0x181ad0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x181ad4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x181ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x181ad8: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x181ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x181adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ae0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x181ae0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ae4: 0x9b103  sra         $s6, $t1, 4
    ctx->pc = 0x181ae4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 9), 4));
    // 0x181ae8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x181ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x181aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181af0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x181af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x181af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181af8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x181af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x181afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b00: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x181b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x181b04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b08: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x181b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x181b0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x181b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181b10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181b14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181b14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b18: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x181b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181b1c: 0xc060752  jal         func_181D48
    ctx->pc = 0x181B1Cu;
    SET_GPR_U32(ctx, 31, 0x181B24u);
    ctx->pc = 0x181B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B1Cu;
    // 0x181b20: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181D48u, 0x181B1Cu, 0x181B24u)) {
        return;
    }
    ctx->pc = 0x181B24u;
label_181b24:
    // 0x181b24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x181b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181b2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181b30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x181b34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b38: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181b3c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x181b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x181b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b44: 0xc060766  jal         func_181D98
    ctx->pc = 0x181B44u;
    SET_GPR_U32(ctx, 31, 0x181B4Cu);
    ctx->pc = 0x181B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B44u;
    // 0x181b48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181D98u, 0x181B44u, 0x181B4Cu)) {
        return;
    }
    ctx->pc = 0x181B4Cu;
label_181b4c:
    // 0x181b4c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x181b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x181b50: 0x103e3b  dsra        $a3, $s0, 24
    ctx->pc = 0x181b50u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 16) >> 24);
    // 0x181b54: 0x320501ff  andi        $a1, $s0, 0x1FF
    ctx->pc = 0x181b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)511);
    // 0x181b58: 0x10843b  dsra        $s0, $s0, 16
    ctx->pc = 0x181b58u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> 16);
    // 0x181b5c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x181b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x181b60: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x181b60u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x181b64: 0x3210003f  andi        $s0, $s0, 0x3F
    ctx->pc = 0x181b64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x181b68: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x181b68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x181b6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b70: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x181b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x181b74: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x181b74u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x181b78: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x181b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x181b7c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x181b7cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x181b80: 0xc06077a  jal         func_181DE8
    ctx->pc = 0x181B80u;
    SET_GPR_U32(ctx, 31, 0x181B88u);
    ctx->pc = 0x181B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B80u;
    // 0x181b84: 0x52940  sll         $a1, $a1, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181DE8u, 0x181B80u, 0x181B88u)) {
        return;
    }
    ctx->pc = 0x181B88u;
label_181b88:
    // 0x181b88: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x181b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x181b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x181b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x181b94: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x181b98: 0xc060792  jal         func_181E48
    ctx->pc = 0x181B98u;
    SET_GPR_U32(ctx, 31, 0x181BA0u);
    ctx->pc = 0x181B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181B98u;
    // 0x181b9c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181E48u, 0x181B98u, 0x181BA0u)) {
        return;
    }
    ctx->pc = 0x181BA0u;
label_181ba0:
    // 0x181ba0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x181ba4: 0x1840004a  blez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x181BA4u;
    {
        const bool branch_taken_0x181ba4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x181BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BA4u;
        // 0x181ba8: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ba4) {
            ctx->pc = 0x181CD0u;
            goto label_181cd0;
        }
    }
    ctx->pc = 0x181BACu;
    // 0x181bac: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x181bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x181bb0: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x181bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x181bb4: 0x0  nop
    ctx->pc = 0x181bb4u;
    // NOP
label_181bb8:
    // 0x181bb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x181bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bbc: 0x1ac0003f  blez        $s6, . + 4 + (0x3F << 2)
    ctx->pc = 0x181BBCu;
    {
        const bool branch_taken_0x181bbc = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x181BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BBCu;
        // 0x181bc0: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bbc) {
            ctx->pc = 0x181CBCu;
            goto label_181cbc;
        }
    }
    ctx->pc = 0x181BC4u;
    // 0x181bc4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x181bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181bc8: 0x3c130fff  lui         $s3, 0xFFF
    ctx->pc = 0x181bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4095 << 16));
    // 0x181bcc: 0x26deffff  addiu       $fp, $s6, -0x1
    ctx->pc = 0x181bccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x181bd0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x181bd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x181bd4: 0x283b826  xor         $s7, $s4, $v1
    ctx->pc = 0x181bd4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 3));
label_181bd8:
    // 0x181bd8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x181bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181bdc: 0x25e1026  xor         $v0, $s2, $fp
    ctx->pc = 0x181bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 30));
    // 0x181be0: 0x17800b  movn        $s0, $zero, $s7
    ctx->pc = 0x181be0u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x181be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181be8: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x181be8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x181bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bf8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x181bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181bfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181bfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c00: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x181c00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x181c04: 0xc060752  jal         func_181D48
    ctx->pc = 0x181C04u;
    SET_GPR_U32(ctx, 31, 0x181C0Cu);
    ctx->pc = 0x181C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C04u;
    // 0x181c08: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181D48u, 0x181C04u, 0x181C0Cu)) {
        return;
    }
    ctx->pc = 0x181C0Cu;
label_181c0c:
    // 0x181c0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181c0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181c10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x181c14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c18: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x181c18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181c1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c20: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x181c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x181c24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181c28: 0xc060766  jal         func_181D98
    ctx->pc = 0x181C28u;
    SET_GPR_U32(ctx, 31, 0x181C30u);
    ctx->pc = 0x181C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C28u;
    // 0x181c2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181D98u, 0x181C28u, 0x181C30u)) {
        return;
    }
    ctx->pc = 0x181C30u;
label_181c30:
    // 0x181c30: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x181c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x181c34: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x181c34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x181c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c3c: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x181c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x181c40: 0xc060786  jal         func_181E18
    ctx->pc = 0x181C40u;
    SET_GPR_U32(ctx, 31, 0x181C48u);
    ctx->pc = 0x181C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C40u;
    // 0x181c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181E18u, 0x181C40u, 0x181C48u)) {
        return;
    }
    ctx->pc = 0x181C48u;
label_181c48:
    // 0x181c48: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x181c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x181c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c50: 0xc0607a0  jal         func_181E80
    ctx->pc = 0x181C50u;
    SET_GPR_U32(ctx, 31, 0x181C58u);
    ctx->pc = 0x181C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C50u;
    // 0x181c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181E80u, 0x181C50u, 0x181C58u)) {
        return;
    }
    ctx->pc = 0x181C58u;
label_181c58:
    // 0x181c58: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x181c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x181c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c60: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x181c60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x181c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181c70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181c74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c78: 0xc060766  jal         func_181D98
    ctx->pc = 0x181C78u;
    SET_GPR_U32(ctx, 31, 0x181C80u);
    ctx->pc = 0x181C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181C78u;
    // 0x181c7c: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181D98u, 0x181C78u, 0x181C80u)) {
        return;
    }
    ctx->pc = 0x181C80u;
label_181c80:
    // 0x181c80: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x181c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x181c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c88: 0x2b33024  and         $a2, $s5, $s3
    ctx->pc = 0x181c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & GPR_U64(ctx, 19));
    // 0x181c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c94: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x181c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181c98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181c98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c9c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x181c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x181ca0: 0xc060752  jal         func_181D48
    ctx->pc = 0x181CA0u;
    SET_GPR_U32(ctx, 31, 0x181CA8u);
    ctx->pc = 0x181CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CA0u;
    // 0x181ca4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181D48u, 0x181CA0u, 0x181CA8u)) {
        return;
    }
    ctx->pc = 0x181CA8u;
label_181ca8:
    // 0x181ca8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x181ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181cac: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x181cacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x181cb0: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x181cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x181cb4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x181CB4u;
    {
        const bool branch_taken_0x181cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CB4u;
        // 0x181cb8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cb4) {
            ctx->pc = 0x181BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181bd8;
        }
    }
    ctx->pc = 0x181CBCu;
label_181cbc:
    // 0x181cbc: 0x8fb4000c  lw          $s4, 0xC($sp)
    ctx->pc = 0x181cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x181cc0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x181cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x181cc4: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x181cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x181cc8: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x181CC8u;
    {
        const bool branch_taken_0x181cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181CC8u;
        // 0x181ccc: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181cc8) {
            ctx->pc = 0x181BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181bb8;
        }
    }
    ctx->pc = 0x181CD0u;
label_181cd0:
    // 0x181cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x181cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181ce0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x181ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x181ce4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ce8: 0xc060752  jal         func_181D48
    ctx->pc = 0x181CE8u;
    SET_GPR_U32(ctx, 31, 0x181CF0u);
    ctx->pc = 0x181CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181CE8u;
    // 0x181cec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181D48u, 0x181CE8u, 0x181CF0u)) {
        return;
    }
    ctx->pc = 0x181CF0u;
label_181cf0:
    // 0x181cf0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x181cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x181cf4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x181cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x181cf8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x181cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x181cfc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x181cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181d00: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x181d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181d04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x181d04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181d08: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x181d08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181d0c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x181d0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181d10: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x181d10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181d18: 0x3e00008  jr          $ra
    ctx->pc = 0x181D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D18u;
        // 0x181d1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181D20u;
}
