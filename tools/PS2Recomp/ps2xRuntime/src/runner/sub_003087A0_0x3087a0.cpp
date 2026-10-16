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

// Function: sub_003087A0
// Address: 0x3087a0 - 0x308858
void sub_003087A0_0x3087a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003087A0_0x3087a0");
#endif

    switch (ctx->pc) {
        case 0x3087dcu: goto label_3087dc;
        case 0x308808u: goto label_308808;
        case 0x308818u: goto label_308818;
        default: break;
    }

    ctx->pc = 0x3087a0u;

    // 0x3087a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3087a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3087a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3087a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3087a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3087a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3087ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3087acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3087b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3087b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3087b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3087b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3087bc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3087BCu;
    {
        const bool branch_taken_0x3087bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3087C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087BCu;
        // 0x3087c0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087bc) {
            ctx->pc = 0x3087F8u;
            goto label_3087f8;
        }
    }
    ctx->pc = 0x3087C4u;
    // 0x3087c4: 0x1a20001b  blez        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3087C4u;
    {
        const bool branch_taken_0x3087c4 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x3087C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087C4u;
        // 0x3087c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087c4) {
            ctx->pc = 0x308834u;
            goto label_308834;
        }
    }
    ctx->pc = 0x3087CCu;
    // 0x3087cc: 0x5a40001a  blezl       $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x3087CCu;
    {
        const bool branch_taken_0x3087cc = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x3087cc) {
            ctx->pc = 0x3087D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3087CCu;
            // 0x3087d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308838u;
            goto label_308838;
        }
    }
    ctx->pc = 0x3087D4u;
    // 0x3087d4: 0xc0c10d6  jal         func_304358
    ctx->pc = 0x3087D4u;
    SET_GPR_U32(ctx, 31, 0x3087DCu);
    ctx->pc = 0x3087D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3087D4u;
    // 0x3087d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304358u, 0x3087D4u, 0x3087DCu)) {
        return;
    }
    ctx->pc = 0x3087DCu;
label_3087dc:
    // 0x3087dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3087dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087e0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3087E0u;
    {
        const bool branch_taken_0x3087e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3087e0) {
            ctx->pc = 0x308800u;
            goto label_308800;
        }
    }
    ctx->pc = 0x3087E8u;
    // 0x3087e8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3087e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3087ec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3087ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3087f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3087F0u;
    {
        const bool branch_taken_0x3087f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3087F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087F0u;
        // 0x3087f4: 0x2511818  mult        $v1, $s2, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087f0) {
            ctx->pc = 0x308820u;
            goto label_308820;
        }
    }
    ctx->pc = 0x3087F8u;
label_3087f8:
    // 0x3087f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3087F8u;
    {
        const bool branch_taken_0x3087f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3087FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087F8u;
        // 0x3087fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087f8) {
            ctx->pc = 0x308834u;
            goto label_308834;
        }
    }
    ctx->pc = 0x308800u;
label_308800:
    // 0x308800: 0xc0c20da  jal         func_308368
    ctx->pc = 0x308800u;
    SET_GPR_U32(ctx, 31, 0x308808u);
    ctx->pc = 0x308804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308800u;
    // 0x308804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308368u, 0x308800u, 0x308808u)) {
        return;
    }
    ctx->pc = 0x308808u;
label_308808:
    // 0x308808: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308808u;
    {
        const bool branch_taken_0x308808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308808u;
        // 0x30880c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308808) {
            ctx->pc = 0x308834u;
            goto label_308834;
        }
    }
    ctx->pc = 0x308810u;
    // 0x308810: 0xc0c10d6  jal         func_304358
    ctx->pc = 0x308810u;
    SET_GPR_U32(ctx, 31, 0x308818u);
    ctx->pc = 0x308814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308810u;
    // 0x308814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304358u, 0x308810u, 0x308818u)) {
        return;
    }
    ctx->pc = 0x308818u;
label_308818:
    // 0x308818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30881c: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x30881cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_308820:
    // 0x308820: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x308820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308824: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x308824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x308828: 0xac910038  sw          $s1, 0x38($a0)
    ctx->pc = 0x308828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 17));
    // 0x30882c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30882cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308830: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x308830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_308834:
    // 0x308834: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x308834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_308838:
    // 0x308838: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x308838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30883c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30883cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308844: 0x3e00008  jr          $ra
    ctx->pc = 0x308844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308844u;
        // 0x308848: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30884Cu;
    // 0x30884c: 0x0  nop
    ctx->pc = 0x30884cu;
    // NOP
    // 0x308850: 0x8c4201f8  lw          $v0, 0x1F8($v0)
    ctx->pc = 0x308850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x308854: 0x0  nop
    ctx->pc = 0x308854u;
    // NOP
    ctx->pc = 0x308858u;
}
