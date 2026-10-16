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

// Function: sub_00204530
// Address: 0x204530 - 0x2045f0
void sub_00204530_0x204530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204530_0x204530");
#endif

    switch (ctx->pc) {
        case 0x20458cu: goto label_20458c;
        case 0x2045a0u: goto label_2045a0;
        case 0x2045b4u: goto label_2045b4;
        default: break;
    }

    ctx->pc = 0x204530u;

    // 0x204530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x204530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x204534: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x204534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x204538: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x204538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20453c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x204540: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x204540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x204544: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x204544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x204548: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x204548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20454c: 0x8cc22cf0  lw          $v0, 0x2CF0($a2)
    ctx->pc = 0x20454cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702CF0u));
    // 0x204550: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x204550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204554: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x204554u;
    {
        const bool branch_taken_0x204554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204554u;
        // 0x204558: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204554) {
            ctx->pc = 0x20458Cu;
            goto label_20458c;
        }
    }
    ctx->pc = 0x20455Cu;
    // 0x20455c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x20455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x204560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204564: 0x26052ce0  addiu       $a1, $s0, 0x2CE0
    ctx->pc = 0x204564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11488));
    // 0x204568: 0xacc32cf0  sw          $v1, 0x2CF0($a2)
    ctx->pc = 0x204568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11504), GPR_U32(ctx, 3));
    // 0x20456c: 0x24426a30  addiu       $v0, $v0, 0x6A30
    ctx->pc = 0x20456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
    // 0x204570: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x204570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x204574: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x204574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x204578: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x204578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x20457c: 0xae002ce0  sw          $zero, 0x2CE0($s0)
    ctx->pc = 0x20457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11488), GPR_U32(ctx, 0));
    // 0x204580: 0x248447d0  addiu       $a0, $a0, 0x47D0
    ctx->pc = 0x204580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
    // 0x204584: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x204584u;
    SET_GPR_U32(ctx, 31, 0x20458Cu);
    ctx->pc = 0x204588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204584u;
    // 0x204588: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x204584u, 0x20458Cu)) {
        return;
    }
    ctx->pc = 0x20458Cu;
label_20458c:
    // 0x20458c: 0x26022ce0  addiu       $v0, $s0, 0x2CE0
    ctx->pc = 0x20458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11488));
    // 0x204590: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x204594: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x204594u;
    {
        const bool branch_taken_0x204594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x204598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204594u;
        // 0x204598: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204594) {
            ctx->pc = 0x2045D4u;
            goto label_2045d4;
        }
    }
    ctx->pc = 0x20459Cu;
    // 0x20459c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2045a0:
    // 0x2045a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2045a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2045a4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2045A4u;
    {
        const bool branch_taken_0x2045a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2045a4) {
            ctx->pc = 0x2045A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2045A4u;
            // 0x2045a8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2045C0u;
            goto label_2045c0;
        }
    }
    ctx->pc = 0x2045ACu;
    // 0x2045ac: 0xc0c5c96  jal         func_317258
    ctx->pc = 0x2045ACu;
    SET_GPR_U32(ctx, 31, 0x2045B4u);
    ctx->pc = 0x2045B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2045ACu;
    // 0x2045b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317258u, 0x2045ACu, 0x2045B4u)) {
        return;
    }
    ctx->pc = 0x2045B4u;
label_2045b4:
    // 0x2045b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2045B4u;
    {
        const bool branch_taken_0x2045b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2045b4) {
            ctx->pc = 0x2045B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2045B4u;
            // 0x2045b8: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2045BCu;
            goto label_2045bc;
        }
    }
    ctx->pc = 0x2045BCu;
label_2045bc:
    // 0x2045bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2045bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2045c0:
    // 0x2045c0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2045C0u;
    {
        const bool branch_taken_0x2045c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045C0u;
        // 0x2045c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045c0) {
            ctx->pc = 0x2045D0u;
            goto label_2045d0;
        }
    }
    ctx->pc = 0x2045C8u;
    // 0x2045c8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2045C8u;
    {
        const bool branch_taken_0x2045c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2045c8) {
            ctx->pc = 0x2045CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2045C8u;
            // 0x2045cc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2045A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2045a0;
        }
    }
    ctx->pc = 0x2045D0u;
label_2045d0:
    // 0x2045d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2045d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2045d4:
    // 0x2045d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2045d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2045d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2045d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2045dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2045dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2045e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2045e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2045e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2045E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2045E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045E4u;
        // 0x2045e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2045E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2045ECu;
    // 0x2045ec: 0x0  nop
    ctx->pc = 0x2045ecu;
    // NOP
    ctx->pc = 0x2045f0u;
}
