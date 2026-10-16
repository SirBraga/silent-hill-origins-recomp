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

// Function: sub_00317358
// Address: 0x317358 - 0x317420
void sub_00317358_0x317358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317358_0x317358");
#endif

    switch (ctx->pc) {
        case 0x317398u: goto label_317398;
        case 0x3173b0u: goto label_3173b0;
        case 0x3173bcu: goto label_3173bc;
        case 0x3173ecu: goto label_3173ec;
        case 0x3173f8u: goto label_3173f8;
        default: break;
    }

    ctx->pc = 0x317358u;

    // 0x317358: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x317358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31735c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x317360: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x317360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x317364: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x317364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317368: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x317368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31736c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31736cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317370: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x317370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x317374: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x317374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317378: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x317378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31737c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31737Cu;
    {
        const bool branch_taken_0x31737c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x317380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31737Cu;
        // 0x317380: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31737c) {
            ctx->pc = 0x31738Cu;
            goto label_31738c;
        }
    }
    ctx->pc = 0x317384u;
    // 0x317384: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x317384u;
    {
        const bool branch_taken_0x317384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317384u;
        // 0x317388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317384) {
            ctx->pc = 0x3173FCu;
            goto label_3173fc;
        }
    }
    ctx->pc = 0x31738Cu;
label_31738c:
    // 0x31738c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x31738cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x317390: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x317390u;
    {
        const bool branch_taken_0x317390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317390u;
        // 0x317394: 0x3694ffff  ori         $s4, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317390) {
            ctx->pc = 0x31739Cu;
            goto label_31739c;
        }
    }
    ctx->pc = 0x317398u;
label_317398:
    // 0x317398: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x317398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31739c:
    // 0x31739c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x31739cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3173a0: 0x12340010  beq         $s1, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x3173A0u;
    {
        const bool branch_taken_0x3173a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x3173a0) {
            ctx->pc = 0x3173E4u;
            goto label_3173e4;
        }
    }
    ctx->pc = 0x3173A8u;
    // 0x3173a8: 0xc0c79ba  jal         func_31E6E8
    ctx->pc = 0x3173A8u;
    SET_GPR_U32(ctx, 31, 0x3173B0u);
    ctx->pc = 0x3173ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3173A8u;
    // 0x3173ac: 0x82440000  lb          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6E8u, 0x3173A8u, 0x3173B0u)) {
        return;
    }
    ctx->pc = 0x3173B0u;
label_3173b0:
    // 0x3173b0: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x3173b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3173b4: 0xc0c79ba  jal         func_31E6E8
    ctx->pc = 0x3173B4u;
    SET_GPR_U32(ctx, 31, 0x3173BCu);
    ctx->pc = 0x3173B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3173B4u;
    // 0x3173b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6E8u, 0x3173B4u, 0x3173BCu)) {
        return;
    }
    ctx->pc = 0x3173BCu;
label_3173bc:
    // 0x3173bc: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3173BCu;
    {
        const bool branch_taken_0x3173bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3173bc) {
            ctx->pc = 0x3173E4u;
            goto label_3173e4;
        }
    }
    ctx->pc = 0x3173C4u;
    // 0x3173c4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3173C4u;
    {
        const bool branch_taken_0x3173c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3173c4) {
            ctx->pc = 0x3173E4u;
            goto label_3173e4;
        }
    }
    ctx->pc = 0x3173CCu;
    // 0x3173cc: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x3173ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3173d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3173D0u;
    {
        const bool branch_taken_0x3173d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3173d0) {
            ctx->pc = 0x3173E4u;
            goto label_3173e4;
        }
    }
    ctx->pc = 0x3173D8u;
    // 0x3173d8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3173d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3173dc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3173DCu;
    {
        const bool branch_taken_0x3173dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3173dc) {
            ctx->pc = 0x3173E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3173DCu;
            // 0x3173e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317398;
        }
    }
    ctx->pc = 0x3173E4u;
label_3173e4:
    // 0x3173e4: 0xc0c79ba  jal         func_31E6E8
    ctx->pc = 0x3173E4u;
    SET_GPR_U32(ctx, 31, 0x3173ECu);
    ctx->pc = 0x3173E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3173E4u;
    // 0x3173e8: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6E8u, 0x3173E4u, 0x3173ECu)) {
        return;
    }
    ctx->pc = 0x3173ECu;
label_3173ec:
    // 0x3173ec: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x3173ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3173f0: 0xc0c79ba  jal         func_31E6E8
    ctx->pc = 0x3173F0u;
    SET_GPR_U32(ctx, 31, 0x3173F8u);
    ctx->pc = 0x3173F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3173F0u;
    // 0x3173f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6E8u, 0x3173F0u, 0x3173F8u)) {
        return;
    }
    ctx->pc = 0x3173F8u;
label_3173f8:
    // 0x3173f8: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3173f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3173fc:
    // 0x3173fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3173fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x317400: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x317400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x317404: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x317404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317408: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x317408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31740c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31740cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317414: 0x3e00008  jr          $ra
    ctx->pc = 0x317414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317414u;
        // 0x317418: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31741Cu;
    // 0x31741c: 0x0  nop
    ctx->pc = 0x31741cu;
    // NOP
    ctx->pc = 0x317420u;
}
