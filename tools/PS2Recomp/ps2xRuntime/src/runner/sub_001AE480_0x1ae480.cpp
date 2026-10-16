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

// Function: sub_001AE480
// Address: 0x1ae480 - 0x1ae560
void sub_001AE480_0x1ae480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE480_0x1ae480");
#endif

    switch (ctx->pc) {
        case 0x1ae4a8u: goto label_1ae4a8;
        case 0x1ae4c8u: goto label_1ae4c8;
        case 0x1ae4f0u: goto label_1ae4f0;
        case 0x1ae554u: goto label_1ae554;
        default: break;
    }

    ctx->pc = 0x1ae480u;

    // 0x1ae480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae484: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ae484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ae488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae48c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ae490: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ae490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae494: 0x8c438610  lw          $v1, -0x79F0($v0)
    ctx->pc = 0x1ae494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8610u));
    // 0x1ae498: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1ae498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae49c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae4a0: 0xc074874  jal         func_1D21D0
    ctx->pc = 0x1AE4A0u;
    SET_GPR_U32(ctx, 31, 0x1AE4A8u);
    ctx->pc = 0x1AE4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE4A0u;
    // 0x1ae4a4: 0x3800a  movz        $s0, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D21D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D21D0u, 0x1AE4A0u, 0x1AE4A8u)) {
        return;
    }
    ctx->pc = 0x1AE4A8u;
label_1ae4a8:
    // 0x1ae4a8: 0x202880a  movz        $s1, $s0, $v0
    ctx->pc = 0x1ae4a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16));
    // 0x1ae4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae4b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ae4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae4b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ae4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae4b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4BCu;
        // 0x1ae4c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE4C4u;
    // 0x1ae4c4: 0x0  nop
    ctx->pc = 0x1ae4c4u;
    // NOP
label_1ae4c8:
    // 0x1ae4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae4cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ae4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ae4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae4d4: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x1ae4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x1ae4d8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1ae4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1ae4dc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ae4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ae4e0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AE4E0u;
    {
        const bool branch_taken_0x1ae4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4E0u;
        // 0x1ae4e4: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4e0) {
            ctx->pc = 0x1AE544u;
            goto label_1ae544;
        }
    }
    ctx->pc = 0x1AE4E8u;
    // 0x1ae4e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ae4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ae4ec: 0x0  nop
    ctx->pc = 0x1ae4ecu;
    // NOP
label_1ae4f0:
    // 0x1ae4f0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AE4F0u;
    {
        const bool branch_taken_0x1ae4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae4f0) {
            ctx->pc = 0x1AE4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE4F0u;
            // 0x1ae4f4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE538u;
            goto label_1ae538;
        }
    }
    ctx->pc = 0x1AE4F8u;
    // 0x1ae4f8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1ae4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ae4fc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE4FCu;
    {
        const bool branch_taken_0x1ae4fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4FCu;
        // 0x1ae500: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4fc) {
            ctx->pc = 0x1AE50Cu;
            goto label_1ae50c;
        }
    }
    ctx->pc = 0x1AE504u;
    // 0x1ae504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE504u;
    {
        const bool branch_taken_0x1ae504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE504u;
        // 0x1ae508: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae504) {
            ctx->pc = 0x1AE510u;
            goto label_1ae510;
        }
    }
    ctx->pc = 0x1AE50Cu;
label_1ae50c:
    // 0x1ae50c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1ae50cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1ae510:
    // 0x1ae510: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae514: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE514u;
    {
        const bool branch_taken_0x1ae514 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE514u;
        // 0x1ae518: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae514) {
            ctx->pc = 0x1AE524u;
            goto label_1ae524;
        }
    }
    ctx->pc = 0x1AE51Cu;
    // 0x1ae51c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE51Cu;
    {
        const bool branch_taken_0x1ae51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE51Cu;
        // 0x1ae520: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae51c) {
            ctx->pc = 0x1AE528u;
            goto label_1ae528;
        }
    }
    ctx->pc = 0x1AE524u;
label_1ae524:
    // 0x1ae524: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1ae524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1ae528:
    // 0x1ae528: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae52c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae530: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ae530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ae534: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ae534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ae538:
    // 0x1ae538: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1AE538u;
    {
        const bool branch_taken_0x1ae538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae538) {
            ctx->pc = 0x1AE53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE538u;
            // 0x1ae53c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae4f0;
        }
    }
    ctx->pc = 0x1AE540u;
    // 0x1ae540: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1ae540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1ae544:
    // 0x1ae544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE544u;
    {
        const bool branch_taken_0x1ae544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE544u;
        // 0x1ae548: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae544) {
            ctx->pc = 0x1AE558u;
            goto label_1ae558;
        }
    }
    ctx->pc = 0x1AE54Cu;
    // 0x1ae54c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AE54Cu;
    SET_GPR_U32(ctx, 31, 0x1AE554u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AE54Cu, 0x1AE554u)) {
        return;
    }
    ctx->pc = 0x1AE554u;
label_1ae554:
    // 0x1ae554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae558:
    // 0x1ae558: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE558u;
        // 0x1ae55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE560u;
}
