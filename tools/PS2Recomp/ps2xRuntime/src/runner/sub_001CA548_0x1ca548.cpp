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

// Function: sub_001CA548
// Address: 0x1ca548 - 0x1ca5e0
void sub_001CA548_0x1ca548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA548_0x1ca548");
#endif

    switch (ctx->pc) {
        case 0x1ca584u: goto label_1ca584;
        case 0x1ca590u: goto label_1ca590;
        case 0x1ca5a4u: goto label_1ca5a4;
        case 0x1ca5bcu: goto label_1ca5bc;
        default: break;
    }

    ctx->pc = 0x1ca548u;

    // 0x1ca548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ca548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ca54c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ca54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ca550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca554: 0x2442f838  addiu       $v0, $v0, -0x7C8
    ctx->pc = 0x1ca554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965304));
    // 0x1ca558: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ca558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ca55c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ca55cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca560: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ca560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ca564: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ca564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ca568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca56c: 0xae420258  sw          $v0, 0x258($s2)
    ctx->pc = 0x1ca56cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 2));
    // 0x1ca570: 0x8e440264  lw          $a0, 0x264($s2)
    ctx->pc = 0x1ca570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x1ca574: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA574u;
    {
        const bool branch_taken_0x1ca574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA574u;
        // 0x1ca578: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca574) {
            ctx->pc = 0x1CA588u;
            goto label_1ca588;
        }
    }
    ctx->pc = 0x1CA57Cu;
    // 0x1ca57c: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1CA57Cu;
    SET_GPR_U32(ctx, 31, 0x1CA584u);
    ctx->pc = 0x1CA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA57Cu;
    // 0x1ca580: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1CA57Cu, 0x1CA584u)) {
        return;
    }
    ctx->pc = 0x1CA584u;
label_1ca584:
    // 0x1ca584: 0xae400264  sw          $zero, 0x264($s2)
    ctx->pc = 0x1ca584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 0));
label_1ca588:
    // 0x1ca588: 0x26500400  addiu       $s0, $s2, 0x400
    ctx->pc = 0x1ca588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x1ca58c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1ca58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ca590:
    // 0x1ca590: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ca590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca594: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA594u;
    {
        const bool branch_taken_0x1ca594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA594u;
        // 0x1ca598: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca594) {
            ctx->pc = 0x1CA5A8u;
            goto label_1ca5a8;
        }
    }
    ctx->pc = 0x1CA59Cu;
    // 0x1ca59c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1CA59Cu;
    SET_GPR_U32(ctx, 31, 0x1CA5A4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1CA59Cu, 0x1CA5A4u)) {
        return;
    }
    ctx->pc = 0x1CA5A4u;
label_1ca5a4:
    // 0x1ca5a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ca5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ca5a8:
    // 0x1ca5a8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CA5A8u;
    {
        const bool branch_taken_0x1ca5a8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1CA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5A8u;
        // 0x1ca5ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5a8) {
            ctx->pc = 0x1CA590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca590;
        }
    }
    ctx->pc = 0x1CA5B0u;
    // 0x1ca5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca5b4: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1CA5B4u;
    SET_GPR_U32(ctx, 31, 0x1CA5BCu);
    ctx->pc = 0x1CA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5B4u;
    // 0x1ca5b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1CA5B4u, 0x1CA5BCu)) {
        return;
    }
    ctx->pc = 0x1CA5BCu;
label_1ca5bc:
    // 0x1ca5bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ca5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca5c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ca5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca5c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca5c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ca5c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5D0u;
        // 0x1ca5d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA5D8u;
    // 0x1ca5d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ca5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ca5dc: 0x0  nop
    ctx->pc = 0x1ca5dcu;
    // NOP
    ctx->pc = 0x1ca5e0u;
}
