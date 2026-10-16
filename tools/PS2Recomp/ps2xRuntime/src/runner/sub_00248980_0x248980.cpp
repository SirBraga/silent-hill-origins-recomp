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

// Function: sub_00248980
// Address: 0x248980 - 0x248a40
void sub_00248980_0x248980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248980_0x248980");
#endif

    switch (ctx->pc) {
        case 0x2489e0u: goto label_2489e0;
        case 0x2489f4u: goto label_2489f4;
        case 0x248a08u: goto label_248a08;
        case 0x248a20u: goto label_248a20;
        default: break;
    }

    ctx->pc = 0x248980u;

    // 0x248980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x248984: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248988: 0x8c63418c  lw          $v1, 0x418C($v1)
    ctx->pc = 0x248988u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B418Cu));
    // 0x24898c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24898cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x248990: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x248990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x248994: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x248994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x248998: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x248998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24899c: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x24899cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2489a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2489a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2489a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2489a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2489a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2489a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2489ac: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2489acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2489b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2489b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2489b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2489b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489bc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2489bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2489c0: 0xac23418c  sw          $v1, 0x418C($at)
    ctx->pc = 0x2489c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B418Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B418Cu, _value); } while (0);
    // 0x2489c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2489c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2489c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2489cc: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x2489ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2489d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2489d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2489d4: 0xac304188  sw          $s0, 0x4188($at)
    ctx->pc = 0x2489d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6B4188u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4188u, _value); } while (0);
    // 0x2489d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2489D8u;
    SET_GPR_U32(ctx, 31, 0x2489E0u);
    ctx->pc = 0x2489DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489D8u;
    // 0x2489dc: 0xaf82850c  sw          $v0, -0x7AF4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935820), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2489D8u, 0x2489E0u)) {
        return;
    }
    ctx->pc = 0x2489E0u;
label_2489e0:
    // 0x2489e0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2489e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2489e4: 0x8c634188  lw          $v1, 0x4188($v1)
    ctx->pc = 0x2489e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4188u));
    // 0x2489e8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2489e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2489ec: 0xc092692  jal         func_249A48
    ctx->pc = 0x2489ECu;
    SET_GPR_U32(ctx, 31, 0x2489F4u);
    ctx->pc = 0x2489F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489ECu;
    // 0x2489f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249A48u, 0x2489ECu, 0x2489F4u)) {
        return;
    }
    ctx->pc = 0x2489F4u;
label_2489f4:
    // 0x2489f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2489F4u;
    {
        const bool branch_taken_0x2489f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2489F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489F4u;
        // 0x2489f8: 0x8f829118  lw          $v0, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2489f4) {
            ctx->pc = 0x248A10u;
            goto label_248a10;
        }
    }
    ctx->pc = 0x2489FCu;
    // 0x2489fc: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x2489fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x248a00: 0xc092696  jal         func_249A58
    ctx->pc = 0x248A00u;
    SET_GPR_U32(ctx, 31, 0x248A08u);
    ctx->pc = 0x248A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A00u;
    // 0x248a04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249A58u, 0x248A00u, 0x248A08u)) {
        return;
    }
    ctx->pc = 0x248A08u;
label_248a08:
    // 0x248a08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248A08u;
    {
        const bool branch_taken_0x248a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A08u;
        // 0x248a0c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a08) {
            ctx->pc = 0x248A24u;
            goto label_248a24;
        }
    }
    ctx->pc = 0x248A10u;
label_248a10:
    // 0x248a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x248a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a18: 0xc092244  jal         func_248910
    ctx->pc = 0x248A18u;
    SET_GPR_U32(ctx, 31, 0x248A20u);
    ctx->pc = 0x248A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A18u;
    // 0x248a1c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248910u, 0x248A18u, 0x248A20u)) {
        return;
    }
    ctx->pc = 0x248A20u;
label_248a20:
    // 0x248a20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248a24:
    // 0x248a24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x248a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248a28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x248a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248a2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x248a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248a30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x248a30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248a38: 0x3e00008  jr          $ra
    ctx->pc = 0x248A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A38u;
        // 0x248a3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248A40u;
}
