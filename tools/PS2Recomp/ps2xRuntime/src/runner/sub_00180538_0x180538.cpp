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

// Function: sub_00180538
// Address: 0x180538 - 0x1805d0
void sub_00180538_0x180538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180538_0x180538");
#endif

    switch (ctx->pc) {
        case 0x180568u: goto label_180568;
        case 0x18059cu: goto label_18059c;
        default: break;
    }

    ctx->pc = 0x180538u;

    // 0x180538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18053c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x180540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x180540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x180544: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x180544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180548: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x180548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18054c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18054cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x180550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x180550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180554: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x180554u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3389E8u));
    // 0x180558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x180558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18055c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18055Cu;
    {
        const bool branch_taken_0x18055c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x180560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18055Cu;
        // 0x180560: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18055c) {
            ctx->pc = 0x1805B0u;
            goto label_1805b0;
        }
    }
    ctx->pc = 0x180564u;
    // 0x180564: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x180564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_180568:
    // 0x180568: 0x5452000e  bnel        $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x180568u;
    {
        const bool branch_taken_0x180568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x180568) {
            ctx->pc = 0x18056Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180568u;
            // 0x18056c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1805A4u;
            goto label_1805a4;
        }
    }
    ctx->pc = 0x180570u;
    // 0x180570: 0x8e2289e8  lw          $v0, -0x7618($s1)
    ctx->pc = 0x180570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937064)));
    // 0x180574: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180574u;
    {
        const bool branch_taken_0x180574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x180574) {
            ctx->pc = 0x180584u;
            goto label_180584;
        }
    }
    ctx->pc = 0x18057Cu;
    // 0x18057c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x180580: 0xae2289e8  sw          $v0, -0x7618($s1)
    ctx->pc = 0x180580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294937064), GPR_U32(ctx, 2));
label_180584:
    // 0x180584: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180584u;
    {
        const bool branch_taken_0x180584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x180584) {
            ctx->pc = 0x180594u;
            goto label_180594;
        }
    }
    ctx->pc = 0x18058Cu;
    // 0x18058c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x180590: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x180590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_180594:
    // 0x180594: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x180594u;
    SET_GPR_U32(ctx, 31, 0x18059Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x180594u, 0x18059Cu)) {
        return;
    }
    ctx->pc = 0x18059Cu;
label_18059c:
    // 0x18059c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18059Cu;
    {
        const bool branch_taken_0x18059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1805A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18059Cu;
        // 0x1805a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18059c) {
            ctx->pc = 0x1805A8u;
            goto label_1805a8;
        }
    }
    ctx->pc = 0x1805A4u;
label_1805a4:
    // 0x1805a4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1805a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1805a8:
    // 0x1805a8: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1805A8u;
    {
        const bool branch_taken_0x1805a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1805a8) {
            ctx->pc = 0x1805ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1805A8u;
            // 0x1805ac: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180568;
        }
    }
    ctx->pc = 0x1805B0u;
label_1805b0:
    // 0x1805b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1805b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1805b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1805b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1805b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1805b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1805bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1805bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1805c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1805C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1805C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805C0u;
        // 0x1805c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1805C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1805C8u;
    // 0x1805c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1805c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805cc: 0x0  nop
    ctx->pc = 0x1805ccu;
    // NOP
    ctx->pc = 0x1805d0u;
}
