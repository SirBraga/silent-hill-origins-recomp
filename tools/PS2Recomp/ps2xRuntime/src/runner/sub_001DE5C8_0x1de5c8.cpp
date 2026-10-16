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

// Function: sub_001DE5C8
// Address: 0x1de5c8 - 0x1de650
void sub_001DE5C8_0x1de5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE5C8_0x1de5c8");
#endif

    switch (ctx->pc) {
        case 0x1de5f0u: goto label_1de5f0;
        case 0x1de600u: goto label_1de600;
        case 0x1de608u: goto label_1de608;
        case 0x1de618u: goto label_1de618;
        case 0x1de62cu: goto label_1de62c;
        default: break;
    }

    ctx->pc = 0x1de5c8u;

    // 0x1de5c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1de5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1de5cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1de5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1de5d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1de5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1de5d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1de5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1de5dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1de5dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5e0: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DE5E0u;
    {
        const bool branch_taken_0x1de5e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5E0u;
        // 0x1de5e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5e0) {
            ctx->pc = 0x1DE630u;
            goto label_1de630;
        }
    }
    ctx->pc = 0x1DE5E8u;
    // 0x1de5e8: 0xc0bbe00  jal         func_2EF800
    ctx->pc = 0x1DE5E8u;
    SET_GPR_U32(ctx, 31, 0x1DE5F0u);
    ctx->pc = 0x2EF800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF800u, 0x1DE5E8u, 0x1DE5F0u)) {
        return;
    }
    ctx->pc = 0x1DE5F0u;
label_1de5f0:
    // 0x1de5f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DE5F0u;
    {
        const bool branch_taken_0x1de5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5f0) {
            ctx->pc = 0x1DE634u;
            goto label_1de634;
        }
    }
    ctx->pc = 0x1DE5F8u;
    // 0x1de5f8: 0xc092974  jal         func_24A5D0
    ctx->pc = 0x1DE5F8u;
    SET_GPR_U32(ctx, 31, 0x1DE600u);
    ctx->pc = 0x1DE5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5F8u;
    // 0x1de5fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D0u, 0x1DE5F8u, 0x1DE600u)) {
        return;
    }
    ctx->pc = 0x1DE600u;
label_1de600:
    // 0x1de600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE600u;
    {
        const bool branch_taken_0x1de600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE600u;
        // 0x1de604: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de600) {
            ctx->pc = 0x1DE610u;
            goto label_1de610;
        }
    }
    ctx->pc = 0x1DE608u;
label_1de608:
    // 0x1de608: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE608u;
    {
        const bool branch_taken_0x1de608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE608u;
        // 0x1de60c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de608) {
            ctx->pc = 0x1DE630u;
            goto label_1de630;
        }
    }
    ctx->pc = 0x1DE610u;
label_1de610:
    // 0x1de610: 0xc092976  jal         func_24A5D8
    ctx->pc = 0x1DE610u;
    SET_GPR_U32(ctx, 31, 0x1DE618u);
    ctx->pc = 0x1DE614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE610u;
    // 0x1de614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D8u, 0x1DE610u, 0x1DE618u)) {
        return;
    }
    ctx->pc = 0x1DE618u;
label_1de618:
    // 0x1de618: 0x5602fffb  bnel        $s0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DE618u;
    {
        const bool branch_taken_0x1de618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de618) {
            ctx->pc = 0x1DE61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE618u;
            // 0x1de61c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de608;
        }
    }
    ctx->pc = 0x1DE620u;
    // 0x1de620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de624: 0xc09289c  jal         func_24A270
    ctx->pc = 0x1DE624u;
    SET_GPR_U32(ctx, 31, 0x1DE62Cu);
    ctx->pc = 0x1DE628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE624u;
    // 0x1de628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x1DE624u, 0x1DE62Cu)) {
        return;
    }
    ctx->pc = 0x1DE62Cu;
label_1de62c:
    // 0x1de62c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1de62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1de630:
    // 0x1de630: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1de630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1de634:
    // 0x1de634: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1de634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de638: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1de638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de63c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1de63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de644: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE644u;
        // 0x1de648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE64Cu;
    // 0x1de64c: 0x0  nop
    ctx->pc = 0x1de64cu;
    // NOP
    ctx->pc = 0x1de650u;
}
