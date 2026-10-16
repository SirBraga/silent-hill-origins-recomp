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

// Function: sub_002550E0
// Address: 0x2550e0 - 0x255168
void sub_002550E0_0x2550e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002550E0_0x2550e0");
#endif

    switch (ctx->pc) {
        case 0x2550e0u: goto label_2550e0;
        case 0x2550e4u: goto label_2550e4;
        case 0x2550e8u: goto label_2550e8;
        case 0x2550ecu: goto label_2550ec;
        case 0x2550f0u: goto label_2550f0;
        case 0x2550f4u: goto label_2550f4;
        case 0x2550f8u: goto label_2550f8;
        case 0x2550fcu: goto label_2550fc;
        case 0x255100u: goto label_255100;
        case 0x255104u: goto label_255104;
        case 0x255108u: goto label_255108;
        case 0x25510cu: goto label_25510c;
        case 0x255110u: goto label_255110;
        case 0x255114u: goto label_255114;
        case 0x255118u: goto label_255118;
        case 0x25511cu: goto label_25511c;
        case 0x255120u: goto label_255120;
        case 0x255124u: goto label_255124;
        case 0x255128u: goto label_255128;
        case 0x25512cu: goto label_25512c;
        case 0x255130u: goto label_255130;
        case 0x255134u: goto label_255134;
        case 0x255138u: goto label_255138;
        case 0x25513cu: goto label_25513c;
        case 0x255140u: goto label_255140;
        case 0x255144u: goto label_255144;
        case 0x255148u: goto label_255148;
        case 0x25514cu: goto label_25514c;
        case 0x255150u: goto label_255150;
        case 0x255154u: goto label_255154;
        case 0x255158u: goto label_255158;
        case 0x25515cu: goto label_25515c;
        case 0x255160u: goto label_255160;
        case 0x255164u: goto label_255164;
        default: break;
    }

    ctx->pc = 0x2550e0u;

label_2550e0:
    // 0x2550e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2550e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2550e4:
    // 0x2550e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2550e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2550e8:
    // 0x2550e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2550e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2550ec:
    // 0x2550ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2550ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2550f0:
    // 0x2550f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2550f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2550f4:
    // 0x2550f4: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x2550f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2550f8:
    // 0x2550f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2550f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2550fc:
    // 0x2550fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2550fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_255100:
    // 0x255100: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x255100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_255104:
    // 0x255104: 0x12330010  beq         $s1, $s3, . + 4 + (0x10 << 2)
label_255108:
    if (ctx->pc == 0x255108u) {
        ctx->pc = 0x255108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255104u;
        // 0x255108: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25510Cu;
        goto label_25510c;
    }
    ctx->pc = 0x255104u;
    {
        const bool branch_taken_0x255104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x255108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255104u;
        // 0x255108: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255104) {
            ctx->pc = 0x255148u;
            goto label_255148;
        }
    }
    ctx->pc = 0x25510Cu;
label_25510c:
    // 0x25510c: 0x2630ffc0  addiu       $s0, $s1, -0x40
    ctx->pc = 0x25510cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
label_255110:
    // 0x255110: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x255110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_255114:
    // 0x255114: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x255114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_255118:
    // 0x255118: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_25511c:
    if (ctx->pc == 0x25511Cu) {
        ctx->pc = 0x25511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255118u;
        // 0x25511c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255120u;
        goto label_255120;
    }
    ctx->pc = 0x255118u;
    {
        const bool branch_taken_0x255118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255118) {
            ctx->pc = 0x25511Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255118u;
            // 0x25511c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25513Cu;
            goto label_25513c;
        }
    }
    ctx->pc = 0x255120u;
label_255120:
    // 0x255120: 0xc08994a  jal         func_226528
label_255124:
    if (ctx->pc == 0x255124u) {
        ctx->pc = 0x255124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255120u;
        // 0x255124: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255128u;
        goto label_255128;
    }
    ctx->pc = 0x255120u;
    SET_GPR_U32(ctx, 31, 0x255128u);
    ctx->pc = 0x255124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255120u;
    // 0x255124: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x255120u, 0x255128u)) {
        return;
    }
    ctx->pc = 0x255128u;
label_255128:
    // 0x255128: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x255128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_25512c:
    // 0x25512c: 0x40f809  jalr        $v0
label_255130:
    if (ctx->pc == 0x255130u) {
        ctx->pc = 0x255130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25512Cu;
        // 0x255130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255134u;
        goto label_255134;
    }
    ctx->pc = 0x25512Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x255134u);
        ctx->pc = 0x255130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25512Cu;
        // 0x255130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25512Cu, 0x255134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x255134u;
label_255134:
    // 0x255134: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x255134u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_255138:
    // 0x255138: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x255138u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25513c:
    // 0x25513c: 0x1633fff4  bne         $s1, $s3, . + 4 + (-0xC << 2)
label_255140:
    if (ctx->pc == 0x255140u) {
        ctx->pc = 0x255140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25513Cu;
        // 0x255140: 0x2630ffc0  addiu       $s0, $s1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255144u;
        goto label_255144;
    }
    ctx->pc = 0x25513Cu;
    {
        const bool branch_taken_0x25513c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x255140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25513Cu;
        // 0x255140: 0x2630ffc0  addiu       $s0, $s1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25513c) {
            ctx->pc = 0x255110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255110;
        }
    }
    ctx->pc = 0x255144u;
label_255144:
    // 0x255144: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x255144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_255148:
    // 0x255148: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x255148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25514c:
    // 0x25514c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25514cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_255150:
    // 0x255150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_255154:
    // 0x255154: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x255154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_255158:
    // 0x255158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25515c:
    // 0x25515c: 0x3e00008  jr          $ra
label_255160:
    if (ctx->pc == 0x255160u) {
        ctx->pc = 0x255160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25515Cu;
        // 0x255160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255164u;
        goto label_255164;
    }
    ctx->pc = 0x25515Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25515Cu;
        // 0x255160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25515Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255164u;
label_255164:
    // 0x255164: 0x0  nop
    ctx->pc = 0x255164u;
    // NOP
    ctx->pc = 0x255168u;
}
