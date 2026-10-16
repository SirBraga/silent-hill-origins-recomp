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

// Function: sub_00150580
// Address: 0x150580 - 0x150648
void sub_00150580_0x150580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150580_0x150580");
#endif

    switch (ctx->pc) {
        case 0x150580u: goto label_150580;
        case 0x150584u: goto label_150584;
        case 0x150588u: goto label_150588;
        case 0x15058cu: goto label_15058c;
        case 0x150590u: goto label_150590;
        case 0x150594u: goto label_150594;
        case 0x150598u: goto label_150598;
        case 0x15059cu: goto label_15059c;
        case 0x1505a0u: goto label_1505a0;
        case 0x1505a4u: goto label_1505a4;
        case 0x1505a8u: goto label_1505a8;
        case 0x1505acu: goto label_1505ac;
        case 0x1505b0u: goto label_1505b0;
        case 0x1505b4u: goto label_1505b4;
        case 0x1505b8u: goto label_1505b8;
        case 0x1505bcu: goto label_1505bc;
        case 0x1505c0u: goto label_1505c0;
        case 0x1505c4u: goto label_1505c4;
        case 0x1505c8u: goto label_1505c8;
        case 0x1505ccu: goto label_1505cc;
        case 0x1505d0u: goto label_1505d0;
        case 0x1505d4u: goto label_1505d4;
        case 0x1505d8u: goto label_1505d8;
        case 0x1505dcu: goto label_1505dc;
        case 0x1505e0u: goto label_1505e0;
        case 0x1505e4u: goto label_1505e4;
        case 0x1505e8u: goto label_1505e8;
        case 0x1505ecu: goto label_1505ec;
        case 0x1505f0u: goto label_1505f0;
        case 0x1505f4u: goto label_1505f4;
        case 0x1505f8u: goto label_1505f8;
        case 0x1505fcu: goto label_1505fc;
        case 0x150600u: goto label_150600;
        case 0x150604u: goto label_150604;
        case 0x150608u: goto label_150608;
        case 0x15060cu: goto label_15060c;
        case 0x150610u: goto label_150610;
        case 0x150614u: goto label_150614;
        case 0x150618u: goto label_150618;
        case 0x15061cu: goto label_15061c;
        case 0x150620u: goto label_150620;
        case 0x150624u: goto label_150624;
        case 0x150628u: goto label_150628;
        case 0x15062cu: goto label_15062c;
        case 0x150630u: goto label_150630;
        case 0x150634u: goto label_150634;
        case 0x150638u: goto label_150638;
        case 0x15063cu: goto label_15063c;
        case 0x150640u: goto label_150640;
        case 0x150644u: goto label_150644;
        default: break;
    }

    ctx->pc = 0x150580u;

label_150580:
    // 0x150580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_150584:
    // 0x150584: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x150584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_150588:
    // 0x150588: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15058c:
    // 0x15058c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15058cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_150590:
    // 0x150590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_150594:
    // 0x150594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150598:
    // 0x150598: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_15059c:
    if (ctx->pc == 0x15059Cu) {
        ctx->pc = 0x15059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150598u;
        // 0x15059c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505A0u;
        goto label_1505a0;
    }
    ctx->pc = 0x150598u;
    {
        const bool branch_taken_0x150598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150598u;
        // 0x15059c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150598) {
            ctx->pc = 0x150630u;
            goto label_150630;
        }
    }
    ctx->pc = 0x1505A0u;
label_1505a0:
    // 0x1505a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1505a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1505a4:
    // 0x1505a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1505a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1505a8:
    // 0x1505a8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1505ac:
    if (ctx->pc == 0x1505ACu) {
        ctx->pc = 0x1505ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505A8u;
        // 0x1505ac: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505B0u;
        goto label_1505b0;
    }
    ctx->pc = 0x1505A8u;
    {
        const bool branch_taken_0x1505a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1505a8) {
            ctx->pc = 0x1505ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1505A8u;
            // 0x1505ac: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1505B8u;
            goto label_1505b8;
        }
    }
    ctx->pc = 0x1505B0u;
label_1505b0:
    // 0x1505b0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1505b4:
    if (ctx->pc == 0x1505B4u) {
        ctx->pc = 0x1505B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505B0u;
        // 0x1505b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505B8u;
        goto label_1505b8;
    }
    ctx->pc = 0x1505B0u;
    {
        const bool branch_taken_0x1505b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505B0u;
        // 0x1505b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505b0) {
            ctx->pc = 0x150630u;
            goto label_150630;
        }
    }
    ctx->pc = 0x1505B8u;
label_1505b8:
    // 0x1505b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1505bc:
    if (ctx->pc == 0x1505BCu) {
        ctx->pc = 0x1505BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505B8u;
        // 0x1505bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505C0u;
        goto label_1505c0;
    }
    ctx->pc = 0x1505B8u;
    {
        const bool branch_taken_0x1505b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1505BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505B8u;
        // 0x1505bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505b8) {
            ctx->pc = 0x150630u;
            goto label_150630;
        }
    }
    ctx->pc = 0x1505C0u;
label_1505c0:
    // 0x1505c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1505c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1505c4:
    // 0x1505c4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1505c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1505c8:
    // 0x1505c8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1505c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1505cc:
    // 0x1505cc: 0x40f809  jalr        $v0
label_1505d0:
    if (ctx->pc == 0x1505D0u) {
        ctx->pc = 0x1505D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505CCu;
        // 0x1505d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505D4u;
        goto label_1505d4;
    }
    ctx->pc = 0x1505CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1505D4u);
        ctx->pc = 0x1505D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505CCu;
        // 0x1505d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1505CCu, 0x1505D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1505D4u;
label_1505d4:
    // 0x1505d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1505d8:
    if (ctx->pc == 0x1505D8u) {
        ctx->pc = 0x1505D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505D4u;
        // 0x1505d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505DCu;
        goto label_1505dc;
    }
    ctx->pc = 0x1505D4u;
    {
        const bool branch_taken_0x1505d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505D4u;
        // 0x1505d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505d4) {
            ctx->pc = 0x150630u;
            goto label_150630;
        }
    }
    ctx->pc = 0x1505DCu;
label_1505dc:
    // 0x1505dc: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x1505dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_1505e0:
    // 0x1505e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1505e4:
    if (ctx->pc == 0x1505E4u) {
        ctx->pc = 0x1505E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505E0u;
        // 0x1505e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505E8u;
        goto label_1505e8;
    }
    ctx->pc = 0x1505E0u;
    {
        const bool branch_taken_0x1505e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505E0u;
        // 0x1505e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505e0) {
            ctx->pc = 0x150608u;
            goto label_150608;
        }
    }
    ctx->pc = 0x1505E8u;
label_1505e8:
    // 0x1505e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1505e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1505ec:
    // 0x1505ec: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1505ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1505f0:
    // 0x1505f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1505f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1505f4:
    // 0x1505f4: 0x1050ffee  beq         $v0, $s0, . + 4 + (-0x12 << 2)
label_1505f8:
    if (ctx->pc == 0x1505F8u) {
        ctx->pc = 0x1505F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505F4u;
        // 0x1505f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505FCu;
        goto label_1505fc;
    }
    ctx->pc = 0x1505F4u;
    {
        const bool branch_taken_0x1505f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1505F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505F4u;
        // 0x1505f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505f4) {
            ctx->pc = 0x1505B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1505b0;
        }
    }
    ctx->pc = 0x1505FCu;
label_1505fc:
    // 0x1505fc: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1505fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_150600:
    // 0x150600: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_150604:
    if (ctx->pc == 0x150604u) {
        ctx->pc = 0x150604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150600u;
        // 0x150604: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150608u;
        goto label_150608;
    }
    ctx->pc = 0x150600u;
    {
        const bool branch_taken_0x150600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150600u;
        // 0x150604: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150600) {
            ctx->pc = 0x1505F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1505f0;
        }
    }
    ctx->pc = 0x150608u;
label_150608:
    // 0x150608: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x150608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15060c:
    // 0x15060c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_150610:
    // 0x150610: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x150610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_150614:
    // 0x150614: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x150614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_150618:
    // 0x150618: 0x60f809  jalr        $v1
label_15061c:
    if (ctx->pc == 0x15061Cu) {
        ctx->pc = 0x15061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150618u;
        // 0x15061c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150620u;
        goto label_150620;
    }
    ctx->pc = 0x150618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x150620u);
        ctx->pc = 0x15061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150618u;
        // 0x15061c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150618u, 0x150620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x150620u;
label_150620:
    // 0x150620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150624:
    // 0x150624: 0xc0541e4  jal         func_150790
label_150628:
    if (ctx->pc == 0x150628u) {
        ctx->pc = 0x150628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150624u;
        // 0x150628: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15062Cu;
        goto label_15062c;
    }
    ctx->pc = 0x150624u;
    SET_GPR_U32(ctx, 31, 0x15062Cu);
    ctx->pc = 0x150628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150624u;
    // 0x150628: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150790u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150790u, 0x150624u, 0x15062Cu)) {
        return;
    }
    ctx->pc = 0x15062Cu;
label_15062c:
    // 0x15062c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15062cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_150630:
    // 0x150630: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x150630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_150634:
    // 0x150634: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150638:
    // 0x150638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x150638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15063c:
    // 0x15063c: 0x3e00008  jr          $ra
label_150640:
    if (ctx->pc == 0x150640u) {
        ctx->pc = 0x150640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15063Cu;
        // 0x150640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150644u;
        goto label_150644;
    }
    ctx->pc = 0x15063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15063Cu;
        // 0x150640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150644u;
label_150644:
    // 0x150644: 0x0  nop
    ctx->pc = 0x150644u;
    // NOP
    ctx->pc = 0x150648u;
}
