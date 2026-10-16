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

// Function: sub_001A2400
// Address: 0x1a2400 - 0x1a24a8
void sub_001A2400_0x1a2400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2400_0x1a2400");
#endif

    switch (ctx->pc) {
        case 0x1a242cu: goto label_1a242c;
        case 0x1a2464u: goto label_1a2464;
        case 0x1a2470u: goto label_1a2470;
        case 0x1a247cu: goto label_1a247c;
        case 0x1a2490u: goto label_1a2490;
        default: break;
    }

    ctx->pc = 0x1a2400u;

    // 0x1a2400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2404: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a2404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a2408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a240c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2410: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a2410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a2414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a2418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a241c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2420: 0x26051230  addiu       $a1, $s0, 0x1230
    ctx->pc = 0x1a2420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
    // 0x1a2424: 0xc06abe4  jal         func_1AAF90
    ctx->pc = 0x1A2424u;
    SET_GPR_U32(ctx, 31, 0x1A242Cu);
    ctx->pc = 0x1A2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2424u;
    // 0x1a2428: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AAF90u, 0x1A2424u, 0x1A242Cu)) {
        return;
    }
    ctx->pc = 0x1A242Cu;
label_1a242c:
    // 0x1a242c: 0x8e031350  lw          $v1, 0x1350($s0)
    ctx->pc = 0x1a242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4944)));
    // 0x1a2430: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2430u;
    {
        const bool branch_taken_0x1a2430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2430) {
            ctx->pc = 0x1A2434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2430u;
            // 0x1a2434: 0x8e041294  lw          $a0, 0x1294($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2454u;
            goto label_1a2454;
        }
    }
    ctx->pc = 0x1A2438u;
    // 0x1a2438: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1a2438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1a243c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a2440: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2440u;
    {
        const bool branch_taken_0x1a2440 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1A2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2440u;
        // 0x1a2444: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2440) {
            ctx->pc = 0x1A244Cu;
            goto label_1a244c;
        }
    }
    ctx->pc = 0x1A2448u;
    // 0x1a2448: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x1a2448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_1a244c:
    // 0x1a244c: 0xae001350  sw          $zero, 0x1350($s0)
    ctx->pc = 0x1a244cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4944), GPR_U32(ctx, 0));
    // 0x1a2450: 0x8e041294  lw          $a0, 0x1294($s0)
    ctx->pc = 0x1a2450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4756)));
label_1a2454:
    // 0x1a2454: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2454u;
    {
        const bool branch_taken_0x1a2454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2454) {
            ctx->pc = 0x1A2458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2454u;
            // 0x1a2458: 0x26041220  addiu       $a0, $s0, 0x1220 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2468u;
            goto label_1a2468;
        }
    }
    ctx->pc = 0x1A245Cu;
    // 0x1a245c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A245Cu;
    SET_GPR_U32(ctx, 31, 0x1A2464u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A245Cu, 0x1A2464u)) {
        return;
    }
    ctx->pc = 0x1A2464u;
label_1a2464:
    // 0x1a2464: 0x26041220  addiu       $a0, $s0, 0x1220
    ctx->pc = 0x1a2464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4640));
label_1a2468:
    // 0x1a2468: 0xc06b33a  jal         func_1ACCE8
    ctx->pc = 0x1A2468u;
    SET_GPR_U32(ctx, 31, 0x1A2470u);
    ctx->pc = 0x1A246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2468u;
    // 0x1a246c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ACCE8u, 0x1A2468u, 0x1A2470u)) {
        return;
    }
    ctx->pc = 0x1A2470u;
label_1a2470:
    // 0x1a2470: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1a2470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a2474: 0xc06abc4  jal         func_1AAF10
    ctx->pc = 0x1A2474u;
    SET_GPR_U32(ctx, 31, 0x1A247Cu);
    ctx->pc = 0x1A2478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2474u;
    // 0x1a2478: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AAF10u, 0x1A2474u, 0x1A247Cu)) {
        return;
    }
    ctx->pc = 0x1A247Cu;
label_1a247c:
    // 0x1a247c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1a247cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1a2480: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2480u;
    {
        const bool branch_taken_0x1a2480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2480) {
            ctx->pc = 0x1A2484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2480u;
            // 0x1a2484: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2494u;
            goto label_1a2494;
        }
    }
    ctx->pc = 0x1A2488u;
    // 0x1a2488: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1A2488u;
    SET_GPR_U32(ctx, 31, 0x1A2490u);
    ctx->pc = 0x1A248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2488u;
    // 0x1a248c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A2488u, 0x1A2490u)) {
        return;
    }
    ctx->pc = 0x1A2490u;
label_1a2490:
    // 0x1a2490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a2490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2494:
    // 0x1a2494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a249c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A249Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A249Cu;
        // 0x1a24a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A249Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A24A4u;
    // 0x1a24a4: 0x0  nop
    ctx->pc = 0x1a24a4u;
    // NOP
    ctx->pc = 0x1a24a8u;
}
