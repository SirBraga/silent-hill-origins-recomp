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

// Function: sub_00228198
// Address: 0x228198 - 0x228200
void sub_00228198_0x228198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228198_0x228198");
#endif

    switch (ctx->pc) {
        case 0x228198u: goto label_228198;
        case 0x22819cu: goto label_22819c;
        case 0x2281a0u: goto label_2281a0;
        case 0x2281a4u: goto label_2281a4;
        case 0x2281a8u: goto label_2281a8;
        case 0x2281acu: goto label_2281ac;
        case 0x2281b0u: goto label_2281b0;
        case 0x2281b4u: goto label_2281b4;
        case 0x2281b8u: goto label_2281b8;
        case 0x2281bcu: goto label_2281bc;
        case 0x2281c0u: goto label_2281c0;
        case 0x2281c4u: goto label_2281c4;
        case 0x2281c8u: goto label_2281c8;
        case 0x2281ccu: goto label_2281cc;
        case 0x2281d0u: goto label_2281d0;
        case 0x2281d4u: goto label_2281d4;
        case 0x2281d8u: goto label_2281d8;
        case 0x2281dcu: goto label_2281dc;
        case 0x2281e0u: goto label_2281e0;
        case 0x2281e4u: goto label_2281e4;
        case 0x2281e8u: goto label_2281e8;
        case 0x2281ecu: goto label_2281ec;
        case 0x2281f0u: goto label_2281f0;
        case 0x2281f4u: goto label_2281f4;
        case 0x2281f8u: goto label_2281f8;
        case 0x2281fcu: goto label_2281fc;
        default: break;
    }

    ctx->pc = 0x228198u;

label_228198:
    // 0x228198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22819c:
    // 0x22819c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22819cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2281a0:
    // 0x2281a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2281a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2281a4:
    // 0x2281a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2281a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2281a8:
    // 0x2281a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2281a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2281ac:
    // 0x2281ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2281acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2281b0:
    // 0x2281b0: 0x8c62102c  lw          $v0, 0x102C($v1)
    ctx->pc = 0x2281b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4140)));
label_2281b4:
    // 0x2281b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2281b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2281b8:
    // 0x2281b8: 0x40f809  jalr        $v0
label_2281bc:
    if (ctx->pc == 0x2281BCu) {
        ctx->pc = 0x2281BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281B8u;
        // 0x2281bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281C0u;
        goto label_2281c0;
    }
    ctx->pc = 0x2281B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2281C0u);
        ctx->pc = 0x2281BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281B8u;
        // 0x2281bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2281B8u, 0x2281C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2281C0u;
label_2281c0:
    // 0x2281c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2281c4:
    if (ctx->pc == 0x2281C4u) {
        ctx->pc = 0x2281C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281C0u;
        // 0x2281c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281C8u;
        goto label_2281c8;
    }
    ctx->pc = 0x2281C0u;
    {
        const bool branch_taken_0x2281c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2281C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281C0u;
        // 0x2281c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2281c0) {
            ctx->pc = 0x2281E8u;
            goto label_2281e8;
        }
    }
    ctx->pc = 0x2281C8u;
label_2281c8:
    // 0x2281c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2281c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2281cc:
    // 0x2281cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2281ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2281d0:
    // 0x2281d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2281d4:
    if (ctx->pc == 0x2281D4u) {
        ctx->pc = 0x2281D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281D0u;
        // 0x2281d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281D8u;
        goto label_2281d8;
    }
    ctx->pc = 0x2281D0u;
    {
        const bool branch_taken_0x2281d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281d0) {
            ctx->pc = 0x2281D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2281D0u;
            // 0x2281d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2281E8u;
            goto label_2281e8;
        }
    }
    ctx->pc = 0x2281D8u;
label_2281d8:
    // 0x2281d8: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x2281d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_2281dc:
    // 0x2281dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2281dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2281e0:
    // 0x2281e0: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x2281e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_2281e4:
    // 0x2281e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2281e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2281e8:
    // 0x2281e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2281e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2281ec:
    // 0x2281ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2281ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2281f0:
    // 0x2281f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2281f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2281f4:
    // 0x2281f4: 0x3e00008  jr          $ra
label_2281f8:
    if (ctx->pc == 0x2281F8u) {
        ctx->pc = 0x2281F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281F4u;
        // 0x2281f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281FCu;
        goto label_2281fc;
    }
    ctx->pc = 0x2281F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2281F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281F4u;
        // 0x2281f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2281F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2281FCu;
label_2281fc:
    // 0x2281fc: 0x0  nop
    ctx->pc = 0x2281fcu;
    // NOP
    ctx->pc = 0x228200u;
}
