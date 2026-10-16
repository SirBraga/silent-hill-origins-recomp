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

// Function: sub_0024CE90
// Address: 0x24ce90 - 0x24d038
void sub_0024CE90_0x24ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CE90_0x24ce90");
#endif

    switch (ctx->pc) {
        case 0x24cee0u: goto label_24cee0;
        case 0x24cef0u: goto label_24cef0;
        case 0x24cfa0u: goto label_24cfa0;
        case 0x24cfc8u: goto label_24cfc8;
        case 0x24cff8u: goto label_24cff8;
        case 0x24d004u: goto label_24d004;
        default: break;
    }

    ctx->pc = 0x24ce90u;

    // 0x24ce90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24ce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24ce94: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24ce98: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x24ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x24ce9c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x24ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x24cea0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24cea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cea4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x24cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x24cea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24cea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ceac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x24ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x24ceb0: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x24ceb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24ceb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24ceb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24ceb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cebc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x24cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x24cec0: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x24cec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x24cec4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x24cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x24cec8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x24cec8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cecc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24ced0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24ced0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ced4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24ced8: 0x8c424198  lw          $v0, 0x4198($v0)
    ctx->pc = 0x24ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4198u));
    // 0x24cedc: 0x0  nop
    ctx->pc = 0x24cedcu;
    // NOP
label_24cee0:
    // 0x24cee0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24cee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cee4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24cee8: 0xc093bb0  jal         func_24EEC0
    ctx->pc = 0x24CEE8u;
    SET_GPR_U32(ctx, 31, 0x24CEF0u);
    ctx->pc = 0x24CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CEE8u;
    // 0x24ceec: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EEC0u, 0x24CEE8u, 0x24CEF0u)) {
        return;
    }
    ctx->pc = 0x24CEF0u;
label_24cef0:
    // 0x24cef0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24cef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cef4: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x24CEF4u;
    {
        const bool branch_taken_0x24cef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEF4u;
        // 0x24cef8: 0x8f829128  lw          $v0, -0x6ED8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cef4) {
            ctx->pc = 0x24CF84u;
            goto label_24cf84;
        }
    }
    ctx->pc = 0x24CEFCu;
    // 0x24cefc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24cf00: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x24cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x24cf04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24cf08: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x24cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x24cf0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24cf10: 0x8c424198  lw          $v0, 0x4198($v0)
    ctx->pc = 0x24cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4198u));
    // 0x24cf14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24cf18: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x24cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x24cf1c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x24cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x24cf20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24cf24: 0x8c424198  lw          $v0, 0x4198($v0)
    ctx->pc = 0x24cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4198u));
    // 0x24cf28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24cf2c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x24cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x24cf30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24cf34: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x24cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x24cf38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24cf3c: 0x8c424198  lw          $v0, 0x4198($v0)
    ctx->pc = 0x24cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4198u));
    // 0x24cf40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24cf44: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x24cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x24cf48: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x24cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x24cf4c: 0xacb6000c  sw          $s6, 0xC($a1)
    ctx->pc = 0x24cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 22));
    // 0x24cf50: 0xacb50014  sw          $s5, 0x14($a1)
    ctx->pc = 0x24cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 21));
    // 0x24cf54: 0xacb20008  sw          $s2, 0x8($a1)
    ctx->pc = 0x24cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 18));
    // 0x24cf58: 0xacb00010  sw          $s0, 0x10($a1)
    ctx->pc = 0x24cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 16));
    // 0x24cf5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24cf60: 0x8c634198  lw          $v1, 0x4198($v1)
    ctx->pc = 0x24cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4198u));
    // 0x24cf64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24cf68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24cf6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24cf70: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24CF70u;
    {
        const bool branch_taken_0x24cf70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF70u;
        // 0x24cf74: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf70) {
            ctx->pc = 0x24CF7Cu;
            goto label_24cf7c;
        }
    }
    ctx->pc = 0x24CF78u;
    // 0x24cf78: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x24cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_24cf7c:
    // 0x24cf7c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x24CF7Cu;
    {
        const bool branch_taken_0x24cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF7Cu;
        // 0x24cf80: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf7c) {
            ctx->pc = 0x24D008u;
            goto label_24d008;
        }
    }
    ctx->pc = 0x24CF84u;
label_24cf84:
    // 0x24cf84: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x24cf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24cf88: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x24cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x24cf8c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x24cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24cf90: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CF90u;
    {
        const bool branch_taken_0x24cf90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24cf90) {
            ctx->pc = 0x24CF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CF90u;
            // 0x24cf94: 0x8cc20024  lw          $v0, 0x24($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CFA8u;
            goto label_24cfa8;
        }
    }
    ctx->pc = 0x24CF98u;
    // 0x24cf98: 0xc093356  jal         func_24CD58
    ctx->pc = 0x24CF98u;
    SET_GPR_U32(ctx, 31, 0x24CFA0u);
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x24CF98u, 0x24CFA0u)) {
        return;
    }
    ctx->pc = 0x24CFA0u;
label_24cfa0:
    // 0x24cfa0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24CFA0u;
    {
        const bool branch_taken_0x24cfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cfa0) {
            ctx->pc = 0x24CFD4u;
            goto label_24cfd4;
        }
    }
    ctx->pc = 0x24CFA8u;
label_24cfa8:
    // 0x24cfa8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x24cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24cfac: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CFACu;
    {
        const bool branch_taken_0x24cfac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFACu;
        // 0x24cfb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfac) {
            ctx->pc = 0x24CFD0u;
            goto label_24cfd0;
        }
    }
    ctx->pc = 0x24CFB4u;
    // 0x24cfb4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x24cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x24cfb8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x24cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x24cfbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24cfc0: 0xc093356  jal         func_24CD58
    ctx->pc = 0x24CFC0u;
    SET_GPR_U32(ctx, 31, 0x24CFC8u);
    ctx->pc = 0x24CFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFC0u;
    // 0x24cfc4: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x24CFC0u, 0x24CFC8u)) {
        return;
    }
    ctx->pc = 0x24CFC8u;
label_24cfc8:
    // 0x24cfc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24CFC8u;
    {
        const bool branch_taken_0x24cfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cfc8) {
            ctx->pc = 0x24CFD4u;
            goto label_24cfd4;
        }
    }
    ctx->pc = 0x24CFD0u;
label_24cfd0:
    // 0x24cfd0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24cfd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cfd4:
    // 0x24cfd4: 0x1260ffc2  beqz        $s3, . + 4 + (-0x3E << 2)
    ctx->pc = 0x24CFD4u;
    {
        const bool branch_taken_0x24cfd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFD4u;
        // 0x24cfd8: 0x8f829128  lw          $v0, -0x6ED8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfd4) {
            ctx->pc = 0x24CEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24cee0;
        }
    }
    ctx->pc = 0x24CFDCu;
    // 0x24cfdc: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24CFDCu;
    {
        const bool branch_taken_0x24cfdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cfdc) {
            ctx->pc = 0x24CFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CFDCu;
            // 0x24cfe0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CFE4u;
            goto label_24cfe4;
        }
    }
    ctx->pc = 0x24CFE4u;
label_24cfe4:
    // 0x24cfe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cfe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24cfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cfec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24cff0: 0xc092848  jal         func_24A120
    ctx->pc = 0x24CFF0u;
    SET_GPR_U32(ctx, 31, 0x24CFF8u);
    ctx->pc = 0x24CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFF0u;
    // 0x24cff4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24CFF0u, 0x24CFF8u)) {
        return;
    }
    ctx->pc = 0x24CFF8u;
label_24cff8:
    // 0x24cff8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cffc: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24CFFCu;
    SET_GPR_U32(ctx, 31, 0x24D004u);
    ctx->pc = 0x24D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFFCu;
    // 0x24d000: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24CFFCu, 0x24D004u)) {
        return;
    }
    ctx->pc = 0x24D004u;
label_24d004:
    // 0x24d004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d008:
    // 0x24d008: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x24d008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24d00c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x24d00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24d010: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x24d010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24d014: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x24d014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24d018: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24d018u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d01c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x24d01cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d020: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x24d020u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d028: 0x3e00008  jr          $ra
    ctx->pc = 0x24D028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D028u;
        // 0x24d02c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D030u;
    // 0x24d030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d034: 0x0  nop
    ctx->pc = 0x24d034u;
    // NOP
    ctx->pc = 0x24d038u;
}
