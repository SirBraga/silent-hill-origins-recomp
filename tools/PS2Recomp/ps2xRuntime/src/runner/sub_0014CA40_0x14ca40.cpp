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

// Function: sub_0014CA40
// Address: 0x14ca40 - 0x14cb50
void sub_0014CA40_0x14ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CA40_0x14ca40");
#endif

    switch (ctx->pc) {
        case 0x14ca70u: goto label_14ca70;
        case 0x14ca94u: goto label_14ca94;
        case 0x14caa8u: goto label_14caa8;
        case 0x14cad8u: goto label_14cad8;
        case 0x14caf4u: goto label_14caf4;
        case 0x14cb08u: goto label_14cb08;
        case 0x14cb38u: goto label_14cb38;
        default: break;
    }

    ctx->pc = 0x14ca40u;

    // 0x14ca40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14ca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14ca44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14ca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14ca48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14ca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14ca4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14ca4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14ca50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14ca54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ca58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14ca58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ca60: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14CA60u;
    {
        const bool branch_taken_0x14ca60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA60u;
        // 0x14ca64: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca60) {
            ctx->pc = 0x14CB38u;
            goto label_14cb38;
        }
    }
    ctx->pc = 0x14CA68u;
    // 0x14ca68: 0xc0979f6  jal         func_25E7D8
    ctx->pc = 0x14CA68u;
    SET_GPR_U32(ctx, 31, 0x14CA70u);
    ctx->pc = 0x25E7D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7D8u, 0x14CA68u, 0x14CA70u)) {
        return;
    }
    ctx->pc = 0x14CA70u;
label_14ca70:
    // 0x14ca70: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14CA70u;
    {
        const bool branch_taken_0x14ca70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA70u;
        // 0x14ca74: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca70) {
            ctx->pc = 0x14CAE0u;
            goto label_14cae0;
        }
    }
    ctx->pc = 0x14CA78u;
    // 0x14ca78: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x14CA78u;
    {
        const bool branch_taken_0x14ca78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ca78) {
            ctx->pc = 0x14CA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CA78u;
            // 0x14ca7c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB3Cu;
            goto label_14cb3c;
        }
    }
    ctx->pc = 0x14CA80u;
    // 0x14ca80: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14ca84: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14ca84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ca88: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x14ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x14ca8c: 0xc05ee90  jal         func_17BA40
    ctx->pc = 0x14CA8Cu;
    SET_GPR_U32(ctx, 31, 0x14CA94u);
    ctx->pc = 0x14CA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA8Cu;
    // 0x14ca90: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA40u, 0x14CA8Cu, 0x14CA94u)) {
        return;
    }
    ctx->pc = 0x14CA94u;
label_14ca94:
    // 0x14ca94: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14ca98: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CA98u;
    {
        const bool branch_taken_0x14ca98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA98u;
        // 0x14ca9c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca98) {
            ctx->pc = 0x14CAACu;
            goto label_14caac;
        }
    }
    ctx->pc = 0x14CAA0u;
    // 0x14caa0: 0xc041628  jal         func_1058A0
    ctx->pc = 0x14CAA0u;
    SET_GPR_U32(ctx, 31, 0x14CAA8u);
    ctx->pc = 0x14CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAA0u;
    // 0x14caa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1058A0u, 0x14CAA0u, 0x14CAA8u)) {
        return;
    }
    ctx->pc = 0x14CAA8u;
label_14caa8:
    // 0x14caa8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_14caac:
    // 0x14caac: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x14caacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x14cab0: 0x8c464778  lw          $a2, 0x4778($v0)
    ctx->pc = 0x14cab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
    // 0x14cab4: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x14cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x14cab8: 0x10c40007  beq         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CAB8u;
    {
        const bool branch_taken_0x14cab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x14CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAB8u;
        // 0x14cabc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cab8) {
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CAC0u;
    // 0x14cac0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14cac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CAC4u;
    {
        const bool branch_taken_0x14cac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAC4u;
        // 0x14cac8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cac4) {
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CACCu;
    // 0x14cacc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x14caccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x14cad0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14CAD0u;
    SET_GPR_U32(ctx, 31, 0x14CAD8u);
    ctx->pc = 0x14CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAD0u;
    // 0x14cad4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14CAD0u, 0x14CAD8u)) {
        return;
    }
    ctx->pc = 0x14CAD8u;
label_14cad8:
    // 0x14cad8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14CAD8u;
    {
        const bool branch_taken_0x14cad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAD8u;
        // 0x14cadc: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cad8) {
            ctx->pc = 0x14CB38u;
            goto label_14cb38;
        }
    }
    ctx->pc = 0x14CAE0u;
label_14cae0:
    // 0x14cae0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14CAE0u;
    {
        const bool branch_taken_0x14cae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAE0u;
        // 0x14cae4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cae0) {
            ctx->pc = 0x14CB38u;
            goto label_14cb38;
        }
    }
    ctx->pc = 0x14CAE8u;
    // 0x14cae8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14caec: 0xc05ee9a  jal         func_17BA68
    ctx->pc = 0x14CAECu;
    SET_GPR_U32(ctx, 31, 0x14CAF4u);
    ctx->pc = 0x14CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAECu;
    // 0x14caf0: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x14CAECu, 0x14CAF4u)) {
        return;
    }
    ctx->pc = 0x14CAF4u;
label_14caf4:
    // 0x14caf4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x14caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14caf8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CAF8u;
    {
        const bool branch_taken_0x14caf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAF8u;
        // 0x14cafc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14caf8) {
            ctx->pc = 0x14CB0Cu;
            goto label_14cb0c;
        }
    }
    ctx->pc = 0x14CB00u;
    // 0x14cb00: 0xc041628  jal         func_1058A0
    ctx->pc = 0x14CB00u;
    SET_GPR_U32(ctx, 31, 0x14CB08u);
    ctx->pc = 0x14CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB00u;
    // 0x14cb04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1058A0u, 0x14CB00u, 0x14CB08u)) {
        return;
    }
    ctx->pc = 0x14CB08u;
label_14cb08:
    // 0x14cb08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_14cb0c:
    // 0x14cb0c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x14cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x14cb10: 0x8c464780  lw          $a2, 0x4780($v0)
    ctx->pc = 0x14cb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18304)));
    // 0x14cb14: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x14cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x14cb18: 0x10c40007  beq         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CB18u;
    {
        const bool branch_taken_0x14cb18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x14CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB18u;
        // 0x14cb1c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb18) {
            ctx->pc = 0x14CB38u;
            goto label_14cb38;
        }
    }
    ctx->pc = 0x14CB20u;
    // 0x14cb20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14cb24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CB24u;
    {
        const bool branch_taken_0x14cb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB24u;
        // 0x14cb28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb24) {
            ctx->pc = 0x14CB38u;
            goto label_14cb38;
        }
    }
    ctx->pc = 0x14CB2Cu;
    // 0x14cb2c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x14cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x14cb30: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14CB30u;
    SET_GPR_U32(ctx, 31, 0x14CB38u);
    ctx->pc = 0x14CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB30u;
    // 0x14cb34: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14CB30u, 0x14CB38u)) {
        return;
    }
    ctx->pc = 0x14CB38u;
label_14cb38:
    // 0x14cb38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14cb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14cb3c:
    // 0x14cb3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14cb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14cb40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14cb40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14cb44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14cb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cb48: 0x3e00008  jr          $ra
    ctx->pc = 0x14CB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB48u;
        // 0x14cb4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CB50u;
}
