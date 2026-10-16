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

// Function: sub_0018E9F8
// Address: 0x18e9f8 - 0x18eee0
void sub_0018E9F8_0x18e9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E9F8_0x18e9f8");
#endif

    switch (ctx->pc) {
        case 0x18ea2cu: goto label_18ea2c;
        case 0x18ea34u: goto label_18ea34;
        case 0x18ea44u: goto label_18ea44;
        case 0x18ea5cu: goto label_18ea5c;
        case 0x18ea7cu: goto label_18ea7c;
        case 0x18ea9cu: goto label_18ea9c;
        case 0x18eaa4u: goto label_18eaa4;
        case 0x18eab4u: goto label_18eab4;
        case 0x18eaccu: goto label_18eacc;
        case 0x18eaecu: goto label_18eaec;
        case 0x18eb0cu: goto label_18eb0c;
        case 0x18eb14u: goto label_18eb14;
        case 0x18eb24u: goto label_18eb24;
        case 0x18eb3cu: goto label_18eb3c;
        case 0x18eb5cu: goto label_18eb5c;
        case 0x18eb7cu: goto label_18eb7c;
        case 0x18eb84u: goto label_18eb84;
        case 0x18eb94u: goto label_18eb94;
        case 0x18ebacu: goto label_18ebac;
        case 0x18ebccu: goto label_18ebcc;
        case 0x18ebecu: goto label_18ebec;
        case 0x18ebf4u: goto label_18ebf4;
        case 0x18ec04u: goto label_18ec04;
        case 0x18ec1cu: goto label_18ec1c;
        case 0x18ec3cu: goto label_18ec3c;
        case 0x18ec5cu: goto label_18ec5c;
        case 0x18ec64u: goto label_18ec64;
        case 0x18ec74u: goto label_18ec74;
        case 0x18ec8cu: goto label_18ec8c;
        case 0x18ecacu: goto label_18ecac;
        case 0x18ecc8u: goto label_18ecc8;
        case 0x18ecd0u: goto label_18ecd0;
        case 0x18ece0u: goto label_18ece0;
        case 0x18ecf0u: goto label_18ecf0;
        case 0x18ed04u: goto label_18ed04;
        case 0x18ed24u: goto label_18ed24;
        case 0x18ed30u: goto label_18ed30;
        case 0x18ed50u: goto label_18ed50;
        case 0x18ed70u: goto label_18ed70;
        case 0x18ed8cu: goto label_18ed8c;
        case 0x18edacu: goto label_18edac;
        case 0x18edc8u: goto label_18edc8;
        case 0x18ede8u: goto label_18ede8;
        case 0x18ee04u: goto label_18ee04;
        case 0x18ee20u: goto label_18ee20;
        case 0x18ee38u: goto label_18ee38;
        case 0x18ee68u: goto label_18ee68;
        case 0x18ee88u: goto label_18ee88;
        case 0x18eea0u: goto label_18eea0;
        default: break;
    }

    ctx->pc = 0x18e9f8u;

    // 0x18e9f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18e9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18e9fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18ea00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18ea00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea04: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18ea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18ea08: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18ea0c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18ea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18ea10: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x18ea10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x18ea14: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18ea14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x18ea18: 0x2671000c  addiu       $s1, $s3, 0xC
    ctx->pc = 0x18ea18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x18ea1c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x18ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x18ea20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ea24: 0xc063822  jal         func_18E088
    ctx->pc = 0x18EA24u;
    SET_GPR_U32(ctx, 31, 0x18EA2Cu);
    ctx->pc = 0x18EA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA24u;
    // 0x18ea28: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18E088u, 0x18EA24u, 0x18EA2Cu)) {
        return;
    }
    ctx->pc = 0x18EA2Cu;
label_18ea2c:
    // 0x18ea2c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18EA2Cu;
    SET_GPR_U32(ctx, 31, 0x18EA34u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18EA2Cu, 0x18EA34u)) {
        return;
    }
    ctx->pc = 0x18EA34u;
label_18ea34:
    // 0x18ea34: 0x8e058ae4  lw          $a1, -0x751C($s0)
    ctx->pc = 0x18ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937316)));
    // 0x18ea38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea3c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EA3Cu;
    SET_GPR_U32(ctx, 31, 0x18EA44u);
    ctx->pc = 0x18EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA3Cu;
    // 0x18ea40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EA3Cu, 0x18EA44u)) {
        return;
    }
    ctx->pc = 0x18EA44u;
label_18ea44:
    // 0x18ea44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ea44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea48: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EA48u;
    {
        const bool branch_taken_0x18ea48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA48u;
        // 0x18ea4c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea48) {
            ctx->pc = 0x18EA64u;
            goto label_18ea64;
        }
    }
    ctx->pc = 0x18EA50u;
    // 0x18ea50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ea54: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EA54u;
    SET_GPR_U32(ctx, 31, 0x18EA5Cu);
    ctx->pc = 0x18EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA54u;
    // 0x18ea58: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EA54u, 0x18EA5Cu)) {
        return;
    }
    ctx->pc = 0x18EA5Cu;
label_18ea5c:
    // 0x18ea5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18EA5Cu;
    {
        const bool branch_taken_0x18ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA5Cu;
        // 0x18ea60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea5c) {
            ctx->pc = 0x18EA68u;
            goto label_18ea68;
        }
    }
    ctx->pc = 0x18EA64u;
label_18ea64:
    // 0x18ea64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ea64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ea68:
    // 0x18ea68: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EA68u;
    {
        const bool branch_taken_0x18ea68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA68u;
        // 0x18ea6c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea68) {
            ctx->pc = 0x18EA84u;
            goto label_18ea84;
        }
    }
    ctx->pc = 0x18EA70u;
    // 0x18ea70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ea70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ea74: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EA74u;
    SET_GPR_U32(ctx, 31, 0x18EA7Cu);
    ctx->pc = 0x18EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA74u;
    // 0x18ea78: 0x8c458aec  lw          $a1, -0x7514($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EA74u, 0x18EA7Cu)) {
        return;
    }
    ctx->pc = 0x18EA7Cu;
label_18ea7c:
    // 0x18ea7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18EA7Cu;
    {
        const bool branch_taken_0x18ea7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA7Cu;
        // 0x18ea80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea7c) {
            ctx->pc = 0x18EA8Cu;
            goto label_18ea8c;
        }
    }
    ctx->pc = 0x18EA84u;
label_18ea84:
    // 0x18ea84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ea84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18ea88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18ea8c:
    // 0x18ea8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18ea8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18ea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea94: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x18EA94u;
    SET_GPR_U32(ctx, 31, 0x18EA9Cu);
    ctx->pc = 0x18EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA94u;
    // 0x18ea98: 0x2670001c  addiu       $s0, $s3, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DF60u, 0x18EA94u, 0x18EA9Cu)) {
        return;
    }
    ctx->pc = 0x18EA9Cu;
label_18ea9c:
    // 0x18ea9c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18EA9Cu;
    SET_GPR_U32(ctx, 31, 0x18EAA4u);
    ctx->pc = 0x18EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA9Cu;
    // 0x18eaa0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18EA9Cu, 0x18EAA4u)) {
        return;
    }
    ctx->pc = 0x18EAA4u;
label_18eaa4:
    // 0x18eaa4: 0x8e458ae4  lw          $a1, -0x751C($s2)
    ctx->pc = 0x18eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937316)));
    // 0x18eaa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eaac: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EAACu;
    SET_GPR_U32(ctx, 31, 0x18EAB4u);
    ctx->pc = 0x18EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAACu;
    // 0x18eab0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EAACu, 0x18EAB4u)) {
        return;
    }
    ctx->pc = 0x18EAB4u;
label_18eab4:
    // 0x18eab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eab8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EAB8u;
    {
        const bool branch_taken_0x18eab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAB8u;
        // 0x18eabc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eab8) {
            ctx->pc = 0x18EAD4u;
            goto label_18ead4;
        }
    }
    ctx->pc = 0x18EAC0u;
    // 0x18eac0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18eac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eac4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EAC4u;
    SET_GPR_U32(ctx, 31, 0x18EACCu);
    ctx->pc = 0x18EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAC4u;
    // 0x18eac8: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EAC4u, 0x18EACCu)) {
        return;
    }
    ctx->pc = 0x18EACCu;
label_18eacc:
    // 0x18eacc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18EACCu;
    {
        const bool branch_taken_0x18eacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EACCu;
        // 0x18ead0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eacc) {
            ctx->pc = 0x18EAD8u;
            goto label_18ead8;
        }
    }
    ctx->pc = 0x18EAD4u;
label_18ead4:
    // 0x18ead4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ead4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ead8:
    // 0x18ead8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EAD8u;
    {
        const bool branch_taken_0x18ead8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAD8u;
        // 0x18eadc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ead8) {
            ctx->pc = 0x18EAF4u;
            goto label_18eaf4;
        }
    }
    ctx->pc = 0x18EAE0u;
    // 0x18eae0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18eae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eae4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EAE4u;
    SET_GPR_U32(ctx, 31, 0x18EAECu);
    ctx->pc = 0x18EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAE4u;
    // 0x18eae8: 0x8c458af0  lw          $a1, -0x7510($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EAE4u, 0x18EAECu)) {
        return;
    }
    ctx->pc = 0x18EAECu;
label_18eaec:
    // 0x18eaec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18EAECu;
    {
        const bool branch_taken_0x18eaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAECu;
        // 0x18eaf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eaec) {
            ctx->pc = 0x18EAFCu;
            goto label_18eafc;
        }
    }
    ctx->pc = 0x18EAF4u;
label_18eaf4:
    // 0x18eaf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18eaf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eaf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18eaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18eafc:
    // 0x18eafc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18eafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb04: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x18EB04u;
    SET_GPR_U32(ctx, 31, 0x18EB0Cu);
    ctx->pc = 0x18EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB04u;
    // 0x18eb08: 0x2670002c  addiu       $s0, $s3, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DF60u, 0x18EB04u, 0x18EB0Cu)) {
        return;
    }
    ctx->pc = 0x18EB0Cu;
label_18eb0c:
    // 0x18eb0c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18EB0Cu;
    SET_GPR_U32(ctx, 31, 0x18EB14u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18EB0Cu, 0x18EB14u)) {
        return;
    }
    ctx->pc = 0x18EB14u;
label_18eb14:
    // 0x18eb14: 0x8e458ae4  lw          $a1, -0x751C($s2)
    ctx->pc = 0x18eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937316)));
    // 0x18eb18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb1c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EB1Cu;
    SET_GPR_U32(ctx, 31, 0x18EB24u);
    ctx->pc = 0x18EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB1Cu;
    // 0x18eb20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EB1Cu, 0x18EB24u)) {
        return;
    }
    ctx->pc = 0x18EB24u;
label_18eb24:
    // 0x18eb24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb28: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB28u;
    {
        const bool branch_taken_0x18eb28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB28u;
        // 0x18eb2c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb28) {
            ctx->pc = 0x18EB44u;
            goto label_18eb44;
        }
    }
    ctx->pc = 0x18EB30u;
    // 0x18eb30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18eb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eb34: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EB34u;
    SET_GPR_U32(ctx, 31, 0x18EB3Cu);
    ctx->pc = 0x18EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB34u;
    // 0x18eb38: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EB34u, 0x18EB3Cu)) {
        return;
    }
    ctx->pc = 0x18EB3Cu;
label_18eb3c:
    // 0x18eb3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18EB3Cu;
    {
        const bool branch_taken_0x18eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB3Cu;
        // 0x18eb40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb3c) {
            ctx->pc = 0x18EB48u;
            goto label_18eb48;
        }
    }
    ctx->pc = 0x18EB44u;
label_18eb44:
    // 0x18eb44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18eb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18eb48:
    // 0x18eb48: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB48u;
    {
        const bool branch_taken_0x18eb48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB48u;
        // 0x18eb4c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb48) {
            ctx->pc = 0x18EB64u;
            goto label_18eb64;
        }
    }
    ctx->pc = 0x18EB50u;
    // 0x18eb50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18eb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eb54: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EB54u;
    SET_GPR_U32(ctx, 31, 0x18EB5Cu);
    ctx->pc = 0x18EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB54u;
    // 0x18eb58: 0x8c458af4  lw          $a1, -0x750C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EB54u, 0x18EB5Cu)) {
        return;
    }
    ctx->pc = 0x18EB5Cu;
label_18eb5c:
    // 0x18eb5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18EB5Cu;
    {
        const bool branch_taken_0x18eb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB5Cu;
        // 0x18eb60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb5c) {
            ctx->pc = 0x18EB6Cu;
            goto label_18eb6c;
        }
    }
    ctx->pc = 0x18EB64u;
label_18eb64:
    // 0x18eb64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18eb64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18eb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18eb6c:
    // 0x18eb6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18eb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18eb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb74: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x18EB74u;
    SET_GPR_U32(ctx, 31, 0x18EB7Cu);
    ctx->pc = 0x18EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB74u;
    // 0x18eb78: 0x2670003c  addiu       $s0, $s3, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DF60u, 0x18EB74u, 0x18EB7Cu)) {
        return;
    }
    ctx->pc = 0x18EB7Cu;
label_18eb7c:
    // 0x18eb7c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18EB7Cu;
    SET_GPR_U32(ctx, 31, 0x18EB84u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18EB7Cu, 0x18EB84u)) {
        return;
    }
    ctx->pc = 0x18EB84u;
label_18eb84:
    // 0x18eb84: 0x8e458ae4  lw          $a1, -0x751C($s2)
    ctx->pc = 0x18eb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937316)));
    // 0x18eb88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb8c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EB8Cu;
    SET_GPR_U32(ctx, 31, 0x18EB94u);
    ctx->pc = 0x18EB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB8Cu;
    // 0x18eb90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EB8Cu, 0x18EB94u)) {
        return;
    }
    ctx->pc = 0x18EB94u;
label_18eb94:
    // 0x18eb94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb98: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EB98u;
    {
        const bool branch_taken_0x18eb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB98u;
        // 0x18eb9c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb98) {
            ctx->pc = 0x18EBB4u;
            goto label_18ebb4;
        }
    }
    ctx->pc = 0x18EBA0u;
    // 0x18eba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18eba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eba4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EBA4u;
    SET_GPR_U32(ctx, 31, 0x18EBACu);
    ctx->pc = 0x18EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBA4u;
    // 0x18eba8: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EBA4u, 0x18EBACu)) {
        return;
    }
    ctx->pc = 0x18EBACu;
label_18ebac:
    // 0x18ebac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18EBACu;
    {
        const bool branch_taken_0x18ebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBACu;
        // 0x18ebb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebac) {
            ctx->pc = 0x18EBB8u;
            goto label_18ebb8;
        }
    }
    ctx->pc = 0x18EBB4u;
label_18ebb4:
    // 0x18ebb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ebb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ebb8:
    // 0x18ebb8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EBB8u;
    {
        const bool branch_taken_0x18ebb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBB8u;
        // 0x18ebbc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebb8) {
            ctx->pc = 0x18EBD4u;
            goto label_18ebd4;
        }
    }
    ctx->pc = 0x18EBC0u;
    // 0x18ebc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ebc4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EBC4u;
    SET_GPR_U32(ctx, 31, 0x18EBCCu);
    ctx->pc = 0x18EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBC4u;
    // 0x18ebc8: 0x8c458af8  lw          $a1, -0x7508($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EBC4u, 0x18EBCCu)) {
        return;
    }
    ctx->pc = 0x18EBCCu;
label_18ebcc:
    // 0x18ebcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18EBCCu;
    {
        const bool branch_taken_0x18ebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBCCu;
        // 0x18ebd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebcc) {
            ctx->pc = 0x18EBDCu;
            goto label_18ebdc;
        }
    }
    ctx->pc = 0x18EBD4u;
label_18ebd4:
    // 0x18ebd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ebd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ebd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ebdc:
    // 0x18ebdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18ebdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebe4: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x18EBE4u;
    SET_GPR_U32(ctx, 31, 0x18EBECu);
    ctx->pc = 0x18EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBE4u;
    // 0x18ebe8: 0x2670004c  addiu       $s0, $s3, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DF60u, 0x18EBE4u, 0x18EBECu)) {
        return;
    }
    ctx->pc = 0x18EBECu;
label_18ebec:
    // 0x18ebec: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18EBECu;
    SET_GPR_U32(ctx, 31, 0x18EBF4u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18EBECu, 0x18EBF4u)) {
        return;
    }
    ctx->pc = 0x18EBF4u;
label_18ebf4:
    // 0x18ebf4: 0x8e458ae4  lw          $a1, -0x751C($s2)
    ctx->pc = 0x18ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937316)));
    // 0x18ebf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ebf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebfc: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EBFCu;
    SET_GPR_U32(ctx, 31, 0x18EC04u);
    ctx->pc = 0x18EC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBFCu;
    // 0x18ec00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EBFCu, 0x18EC04u)) {
        return;
    }
    ctx->pc = 0x18EC04u;
label_18ec04:
    // 0x18ec04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec08: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EC08u;
    {
        const bool branch_taken_0x18ec08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC08u;
        // 0x18ec0c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec08) {
            ctx->pc = 0x18EC24u;
            goto label_18ec24;
        }
    }
    ctx->pc = 0x18EC10u;
    // 0x18ec10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ec10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ec14: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EC14u;
    SET_GPR_U32(ctx, 31, 0x18EC1Cu);
    ctx->pc = 0x18EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC14u;
    // 0x18ec18: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EC14u, 0x18EC1Cu)) {
        return;
    }
    ctx->pc = 0x18EC1Cu;
label_18ec1c:
    // 0x18ec1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18EC1Cu;
    {
        const bool branch_taken_0x18ec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC1Cu;
        // 0x18ec20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec1c) {
            ctx->pc = 0x18EC28u;
            goto label_18ec28;
        }
    }
    ctx->pc = 0x18EC24u;
label_18ec24:
    // 0x18ec24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ec28:
    // 0x18ec28: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EC28u;
    {
        const bool branch_taken_0x18ec28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC28u;
        // 0x18ec2c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec28) {
            ctx->pc = 0x18EC44u;
            goto label_18ec44;
        }
    }
    ctx->pc = 0x18EC30u;
    // 0x18ec30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ec30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ec34: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EC34u;
    SET_GPR_U32(ctx, 31, 0x18EC3Cu);
    ctx->pc = 0x18EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC34u;
    // 0x18ec38: 0x8c458afc  lw          $a1, -0x7504($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EC34u, 0x18EC3Cu)) {
        return;
    }
    ctx->pc = 0x18EC3Cu;
label_18ec3c:
    // 0x18ec3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18EC3Cu;
    {
        const bool branch_taken_0x18ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC3Cu;
        // 0x18ec40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec3c) {
            ctx->pc = 0x18EC4Cu;
            goto label_18ec4c;
        }
    }
    ctx->pc = 0x18EC44u;
label_18ec44:
    // 0x18ec44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ec44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ec48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ec4c:
    // 0x18ec4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18ec4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18ec50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec54: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x18EC54u;
    SET_GPR_U32(ctx, 31, 0x18EC5Cu);
    ctx->pc = 0x18EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC54u;
    // 0x18ec58: 0x2670005c  addiu       $s0, $s3, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DF60u, 0x18EC54u, 0x18EC5Cu)) {
        return;
    }
    ctx->pc = 0x18EC5Cu;
label_18ec5c:
    // 0x18ec5c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18EC5Cu;
    SET_GPR_U32(ctx, 31, 0x18EC64u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18EC5Cu, 0x18EC64u)) {
        return;
    }
    ctx->pc = 0x18EC64u;
label_18ec64:
    // 0x18ec64: 0x8e458ae4  lw          $a1, -0x751C($s2)
    ctx->pc = 0x18ec64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937316)));
    // 0x18ec68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec6c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EC6Cu;
    SET_GPR_U32(ctx, 31, 0x18EC74u);
    ctx->pc = 0x18EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC6Cu;
    // 0x18ec70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EC6Cu, 0x18EC74u)) {
        return;
    }
    ctx->pc = 0x18EC74u;
label_18ec74:
    // 0x18ec74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec78: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EC78u;
    {
        const bool branch_taken_0x18ec78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC78u;
        // 0x18ec7c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec78) {
            ctx->pc = 0x18EC94u;
            goto label_18ec94;
        }
    }
    ctx->pc = 0x18EC80u;
    // 0x18ec80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ec80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ec84: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18EC84u;
    SET_GPR_U32(ctx, 31, 0x18EC8Cu);
    ctx->pc = 0x18EC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC84u;
    // 0x18ec88: 0x8c458ae8  lw          $a1, -0x7518($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18EC84u, 0x18EC8Cu)) {
        return;
    }
    ctx->pc = 0x18EC8Cu;
label_18ec8c:
    // 0x18ec8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18EC8Cu;
    {
        const bool branch_taken_0x18ec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC8Cu;
        // 0x18ec90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec8c) {
            ctx->pc = 0x18EC98u;
            goto label_18ec98;
        }
    }
    ctx->pc = 0x18EC94u;
label_18ec94:
    // 0x18ec94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ec94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ec98:
    // 0x18ec98: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EC98u;
    {
        const bool branch_taken_0x18ec98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC98u;
        // 0x18ec9c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec98) {
            ctx->pc = 0x18ECB4u;
            goto label_18ecb4;
        }
    }
    ctx->pc = 0x18ECA0u;
    // 0x18eca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eca4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18ECA4u;
    SET_GPR_U32(ctx, 31, 0x18ECACu);
    ctx->pc = 0x18ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECA4u;
    // 0x18eca8: 0x8c458b00  lw          $a1, -0x7500($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18ECA4u, 0x18ECACu)) {
        return;
    }
    ctx->pc = 0x18ECACu;
label_18ecac:
    // 0x18ecac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18ECACu;
    {
        const bool branch_taken_0x18ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECACu;
        // 0x18ecb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ecac) {
            ctx->pc = 0x18ECBCu;
            goto label_18ecbc;
        }
    }
    ctx->pc = 0x18ECB4u;
label_18ecb4:
    // 0x18ecb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ecb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ecb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ecbc:
    // 0x18ecbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18ecbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecc0: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x18ECC0u;
    SET_GPR_U32(ctx, 31, 0x18ECC8u);
    ctx->pc = 0x18ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECC0u;
    // 0x18ecc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DF60u, 0x18ECC0u, 0x18ECC8u)) {
        return;
    }
    ctx->pc = 0x18ECC8u;
label_18ecc8:
    // 0x18ecc8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18ECC8u;
    SET_GPR_U32(ctx, 31, 0x18ECD0u);
    ctx->pc = 0x18ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECC8u;
    // 0x18eccc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18ECC8u, 0x18ECD0u)) {
        return;
    }
    ctx->pc = 0x18ECD0u;
label_18ecd0:
    // 0x18ecd0: 0x8e458ae4  lw          $a1, -0x751C($s2)
    ctx->pc = 0x18ecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937316)));
    // 0x18ecd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18ecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ecd8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18ECD8u;
    SET_GPR_U32(ctx, 31, 0x18ECE0u);
    ctx->pc = 0x18ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECD8u;
    // 0x18ecdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18ECD8u, 0x18ECE0u)) {
        return;
    }
    ctx->pc = 0x18ECE0u;
label_18ece0:
    // 0x18ece0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ece0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ece4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ece8: 0xc063d48  jal         func_18F520
    ctx->pc = 0x18ECE8u;
    SET_GPR_U32(ctx, 31, 0x18ECF0u);
    ctx->pc = 0x18ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECE8u;
    // 0x18ecec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F520u, 0x18ECE8u, 0x18ECF0u)) {
        return;
    }
    ctx->pc = 0x18ECF0u;
label_18ecf0:
    // 0x18ecf0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x18ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x18ecf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecf8: 0x8c658b04  lw          $a1, -0x74FC($v1)
    ctx->pc = 0x18ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338B04u));
    // 0x18ecfc: 0xc07d37e  jal         func_1F4DF8
    ctx->pc = 0x18ECFCu;
    SET_GPR_U32(ctx, 31, 0x18ED04u);
    ctx->pc = 0x18ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECFCu;
    // 0x18ed00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DF8u, 0x18ECFCu, 0x18ED04u)) {
        return;
    }
    ctx->pc = 0x18ED04u;
label_18ed04:
    // 0x18ed04: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ed08: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18ED08u;
    {
        const bool branch_taken_0x18ed08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed08) {
            ctx->pc = 0x18ED0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ED08u;
            // 0x18ed0c: 0xae60006c  sw          $zero, 0x6C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ED38u;
            goto label_18ed38;
        }
    }
    ctx->pc = 0x18ED10u;
    // 0x18ed10: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x18ed10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ed14: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18ED14u;
    {
        const bool branch_taken_0x18ed14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed14) {
            ctx->pc = 0x18ED18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ED14u;
            // 0x18ed18: 0xae60006c  sw          $zero, 0x6C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ED38u;
            goto label_18ed38;
        }
    }
    ctx->pc = 0x18ED1Cu;
    // 0x18ed1c: 0xc0636b0  jal         func_18DAC0
    ctx->pc = 0x18ED1Cu;
    SET_GPR_U32(ctx, 31, 0x18ED24u);
    ctx->pc = 0x18ED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED1Cu;
    // 0x18ed20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DAC0u, 0x18ED1Cu, 0x18ED24u)) {
        return;
    }
    ctx->pc = 0x18ED24u;
label_18ed24:
    // 0x18ed24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ed24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed28: 0xc063d48  jal         func_18F520
    ctx->pc = 0x18ED28u;
    SET_GPR_U32(ctx, 31, 0x18ED30u);
    ctx->pc = 0x18ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED28u;
    // 0x18ed2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F520u, 0x18ED28u, 0x18ED30u)) {
        return;
    }
    ctx->pc = 0x18ED30u;
label_18ed30:
    // 0x18ed30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18ED30u;
    {
        const bool branch_taken_0x18ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED30u;
        // 0x18ed34: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed30) {
            ctx->pc = 0x18ED3Cu;
            goto label_18ed3c;
        }
    }
    ctx->pc = 0x18ED38u;
label_18ed38:
    // 0x18ed38: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_18ed3c:
    // 0x18ed3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x18ed40: 0x8c458b08  lw          $a1, -0x74F8($v0)
    ctx->pc = 0x18ed40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937352)));
    // 0x18ed44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed48: 0xc07d37e  jal         func_1F4DF8
    ctx->pc = 0x18ED48u;
    SET_GPR_U32(ctx, 31, 0x18ED50u);
    ctx->pc = 0x18ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED48u;
    // 0x18ed4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DF8u, 0x18ED48u, 0x18ED50u)) {
        return;
    }
    ctx->pc = 0x18ED50u;
label_18ed50:
    // 0x18ed50: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18ed50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ed54: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ED54u;
    {
        const bool branch_taken_0x18ed54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed54) {
            ctx->pc = 0x18ED58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ED54u;
            // 0x18ed58: 0xae600070  sw          $zero, 0x70($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ED74u;
            goto label_18ed74;
        }
    }
    ctx->pc = 0x18ED5Cu;
    // 0x18ed5c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x18ed5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ed60: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18ED60u;
    {
        const bool branch_taken_0x18ed60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed60) {
            ctx->pc = 0x18ED64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ED60u;
            // 0x18ed64: 0xae600070  sw          $zero, 0x70($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ED74u;
            goto label_18ed74;
        }
    }
    ctx->pc = 0x18ED68u;
    // 0x18ed68: 0xc0636b0  jal         func_18DAC0
    ctx->pc = 0x18ED68u;
    SET_GPR_U32(ctx, 31, 0x18ED70u);
    ctx->pc = 0x18ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED68u;
    // 0x18ed6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DAC0u, 0x18ED68u, 0x18ED70u)) {
        return;
    }
    ctx->pc = 0x18ED70u;
label_18ed70:
    // 0x18ed70: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x18ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_18ed74:
    // 0x18ed74: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18ed78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x18ed7c: 0x8c458b0c  lw          $a1, -0x74F4($v0)
    ctx->pc = 0x18ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338B0Cu));
    // 0x18ed80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ed80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed84: 0xc07d37e  jal         func_1F4DF8
    ctx->pc = 0x18ED84u;
    SET_GPR_U32(ctx, 31, 0x18ED8Cu);
    ctx->pc = 0x18ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED84u;
    // 0x18ed88: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DF8u, 0x18ED84u, 0x18ED8Cu)) {
        return;
    }
    ctx->pc = 0x18ED8Cu;
label_18ed8c:
    // 0x18ed8c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ed90: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ED90u;
    {
        const bool branch_taken_0x18ed90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed90) {
            ctx->pc = 0x18ED94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ED90u;
            // 0x18ed94: 0xae600074  sw          $zero, 0x74($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EDB0u;
            goto label_18edb0;
        }
    }
    ctx->pc = 0x18ED98u;
    // 0x18ed98: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x18ed98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ed9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18ED9Cu;
    {
        const bool branch_taken_0x18ed9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed9c) {
            ctx->pc = 0x18EDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ED9Cu;
            // 0x18eda0: 0xae600074  sw          $zero, 0x74($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EDB0u;
            goto label_18edb0;
        }
    }
    ctx->pc = 0x18EDA4u;
    // 0x18eda4: 0xc0636b0  jal         func_18DAC0
    ctx->pc = 0x18EDA4u;
    SET_GPR_U32(ctx, 31, 0x18EDACu);
    ctx->pc = 0x18EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EDA4u;
    // 0x18eda8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DAC0u, 0x18EDA4u, 0x18EDACu)) {
        return;
    }
    ctx->pc = 0x18EDACu;
label_18edac:
    // 0x18edac: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x18edacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_18edb0:
    // 0x18edb0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18edb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18edb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18edb8: 0x8c458b10  lw          $a1, -0x74F0($v0)
    ctx->pc = 0x18edb8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338B10u));
    // 0x18edbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18edbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18edc0: 0xc07d37e  jal         func_1F4DF8
    ctx->pc = 0x18EDC0u;
    SET_GPR_U32(ctx, 31, 0x18EDC8u);
    ctx->pc = 0x18EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EDC0u;
    // 0x18edc4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DF8u, 0x18EDC0u, 0x18EDC8u)) {
        return;
    }
    ctx->pc = 0x18EDC8u;
label_18edc8:
    // 0x18edc8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18edcc: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EDCCu;
    {
        const bool branch_taken_0x18edcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18edcc) {
            ctx->pc = 0x18EDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EDCCu;
            // 0x18edd0: 0xae600078  sw          $zero, 0x78($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EDECu;
            goto label_18edec;
        }
    }
    ctx->pc = 0x18EDD4u;
    // 0x18edd4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x18edd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18edd8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EDD8u;
    {
        const bool branch_taken_0x18edd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18edd8) {
            ctx->pc = 0x18EDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EDD8u;
            // 0x18eddc: 0xae600078  sw          $zero, 0x78($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EDECu;
            goto label_18edec;
        }
    }
    ctx->pc = 0x18EDE0u;
    // 0x18ede0: 0xc0636b0  jal         func_18DAC0
    ctx->pc = 0x18EDE0u;
    SET_GPR_U32(ctx, 31, 0x18EDE8u);
    ctx->pc = 0x18EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EDE0u;
    // 0x18ede4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DAC0u, 0x18EDE0u, 0x18EDE8u)) {
        return;
    }
    ctx->pc = 0x18EDE8u;
label_18ede8:
    // 0x18ede8: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x18ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
label_18edec:
    // 0x18edec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18edf0: 0x8c528b14  lw          $s2, -0x74EC($v0)
    ctx->pc = 0x18edf0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338B14u));
    // 0x18edf4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EDF4u;
    {
        const bool branch_taken_0x18edf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDF4u;
        // 0x18edf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edf4) {
            ctx->pc = 0x18EE0Cu;
            goto label_18ee0c;
        }
    }
    ctx->pc = 0x18EDFCu;
    // 0x18edfc: 0xc065c40  jal         func_197100
    ctx->pc = 0x18EDFCu;
    SET_GPR_U32(ctx, 31, 0x18EE04u);
    ctx->pc = 0x18EE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EDFCu;
    // 0x18ee00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18EDFCu, 0x18EE04u)) {
        return;
    }
    ctx->pc = 0x18EE04u;
label_18ee04:
    // 0x18ee04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18EE04u;
    {
        const bool branch_taken_0x18ee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE04u;
        // 0x18ee08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee04) {
            ctx->pc = 0x18EE10u;
            goto label_18ee10;
        }
    }
    ctx->pc = 0x18EE0Cu;
label_18ee0c:
    // 0x18ee0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18ee0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ee10:
    // 0x18ee10: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x18ee10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x18ee14: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18EE14u;
    {
        const bool branch_taken_0x18ee14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE14u;
        // 0x18ee18: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee14) {
            ctx->pc = 0x18EE4Cu;
            goto label_18ee4c;
        }
    }
    ctx->pc = 0x18EE1Cu;
    // 0x18ee1c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ee20:
    // 0x18ee20: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x18ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x18ee24: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EE24u;
    {
        const bool branch_taken_0x18ee24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ee24) {
            ctx->pc = 0x18EE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EE24u;
            // 0x18ee28: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE44u;
            goto label_18ee44;
        }
    }
    ctx->pc = 0x18EE2Cu;
    // 0x18ee2c: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x18ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x18ee30: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18EE30u;
    SET_GPR_U32(ctx, 31, 0x18EE38u);
    ctx->pc = 0x18EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE30u;
    // 0x18ee34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18EE30u, 0x18EE38u)) {
        return;
    }
    ctx->pc = 0x18EE38u;
label_18ee38:
    // 0x18ee38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EE38u;
    {
        const bool branch_taken_0x18ee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee38) {
            ctx->pc = 0x18EE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EE38u;
            // 0x18ee3c: 0x8e140000  lw          $s4, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE4Cu;
            goto label_18ee4c;
        }
    }
    ctx->pc = 0x18EE40u;
    // 0x18ee40: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18ee40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18ee44:
    // 0x18ee44: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x18EE44u;
    {
        const bool branch_taken_0x18ee44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee44) {
            ctx->pc = 0x18EE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EE44u;
            // 0x18ee48: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ee20;
        }
    }
    ctx->pc = 0x18EE4Cu;
label_18ee4c:
    // 0x18ee4c: 0xae7400d4  sw          $s4, 0xD4($s3)
    ctx->pc = 0x18ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 20));
    // 0x18ee50: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18ee54: 0x8c528b18  lw          $s2, -0x74E8($v0)
    ctx->pc = 0x18ee54u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338B18u));
    // 0x18ee58: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EE58u;
    {
        const bool branch_taken_0x18ee58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE58u;
        // 0x18ee5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee58) {
            ctx->pc = 0x18EE70u;
            goto label_18ee70;
        }
    }
    ctx->pc = 0x18EE60u;
    // 0x18ee60: 0xc065c40  jal         func_197100
    ctx->pc = 0x18EE60u;
    SET_GPR_U32(ctx, 31, 0x18EE68u);
    ctx->pc = 0x18EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE60u;
    // 0x18ee64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18EE60u, 0x18EE68u)) {
        return;
    }
    ctx->pc = 0x18EE68u;
label_18ee68:
    // 0x18ee68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18EE68u;
    {
        const bool branch_taken_0x18ee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE68u;
        // 0x18ee6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee68) {
            ctx->pc = 0x18EE74u;
            goto label_18ee74;
        }
    }
    ctx->pc = 0x18EE70u;
label_18ee70:
    // 0x18ee70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18ee70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ee74:
    // 0x18ee74: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x18ee74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x18ee78: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x18EE78u;
    {
        const bool branch_taken_0x18ee78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE78u;
        // 0x18ee7c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee78) {
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EE80u;
    // 0x18ee80: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18ee80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ee84: 0x0  nop
    ctx->pc = 0x18ee84u;
    // NOP
label_18ee88:
    // 0x18ee88: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x18ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x18ee8c: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EE8Cu;
    {
        const bool branch_taken_0x18ee8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ee8c) {
            ctx->pc = 0x18EE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EE8Cu;
            // 0x18ee90: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EEACu;
            goto label_18eeac;
        }
    }
    ctx->pc = 0x18EE94u;
    // 0x18ee94: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x18ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x18ee98: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18EE98u;
    SET_GPR_U32(ctx, 31, 0x18EEA0u);
    ctx->pc = 0x18EE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE98u;
    // 0x18ee9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18EE98u, 0x18EEA0u)) {
        return;
    }
    ctx->pc = 0x18EEA0u;
label_18eea0:
    // 0x18eea0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EEA0u;
    {
        const bool branch_taken_0x18eea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eea0) {
            ctx->pc = 0x18EEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EEA0u;
            // 0x18eea4: 0x8e140000  lw          $s4, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EEB4u;
            goto label_18eeb4;
        }
    }
    ctx->pc = 0x18EEA8u;
    // 0x18eea8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x18eea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18eeac:
    // 0x18eeac: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x18EEACu;
    {
        const bool branch_taken_0x18eeac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eeac) {
            ctx->pc = 0x18EEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EEACu;
            // 0x18eeb0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ee88;
        }
    }
    ctx->pc = 0x18EEB4u;
label_18eeb4:
    // 0x18eeb4: 0xae7400d8  sw          $s4, 0xD8($s3)
    ctx->pc = 0x18eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 20));
    // 0x18eeb8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18eeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18eebc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18eebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18eec0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18eec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18eec4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18eec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18eec8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18eec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18eecc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x18eeccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18eed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18eed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18eed4: 0x3e00008  jr          $ra
    ctx->pc = 0x18EED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EED4u;
        // 0x18eed8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EEDCu;
    // 0x18eedc: 0x0  nop
    ctx->pc = 0x18eedcu;
    // NOP
    ctx->pc = 0x18eee0u;
}
