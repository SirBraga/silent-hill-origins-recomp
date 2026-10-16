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

// Function: sub_002375E0
// Address: 0x2375e0 - 0x237698
void sub_002375E0_0x2375e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002375E0_0x2375e0");
#endif

    switch (ctx->pc) {
        case 0x23763cu: goto label_23763c;
        default: break;
    }

    ctx->pc = 0x2375e0u;

    // 0x2375e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2375e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2375e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2375e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2375e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2375e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2375ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2375ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2375f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2375f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2375f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2375f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2375fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2375fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237600: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x237600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x237604: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x237604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x237608: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x237608u;
    {
        const bool branch_taken_0x237608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237608u;
        // 0x23760c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237608) {
            ctx->pc = 0x237674u;
            goto label_237674;
        }
    }
    ctx->pc = 0x237610u;
    // 0x237610: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x237610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x237614: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x237614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x237618: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x237618u;
    {
        const bool branch_taken_0x237618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237618u;
        // 0x23761c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237618) {
            ctx->pc = 0x237678u;
            goto label_237678;
        }
    }
    ctx->pc = 0x237620u;
    // 0x237620: 0x32510001  andi        $s1, $s2, 0x1
    ctx->pc = 0x237620u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x237624: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x237624u;
    {
        const bool branch_taken_0x237624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x237628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237624u;
        // 0x237628: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237624) {
            ctx->pc = 0x23763Cu;
            goto label_23763c;
        }
    }
    ctx->pc = 0x23762Cu;
    // 0x23762c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23762Cu;
    {
        const bool branch_taken_0x23762c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23762c) {
            ctx->pc = 0x237630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23762Cu;
            // 0x237630: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237640u;
            goto label_237640;
        }
    }
    ctx->pc = 0x237634u;
    // 0x237634: 0xc091bd0  jal         func_246F40
    ctx->pc = 0x237634u;
    SET_GPR_U32(ctx, 31, 0x23763Cu);
    ctx->pc = 0x237638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237634u;
    // 0x237638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246F40u, 0x237634u, 0x23763Cu)) {
        return;
    }
    ctx->pc = 0x23763Cu;
label_23763c:
    // 0x23763c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_237640:
    // 0x237640: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x237640u;
    {
        const bool branch_taken_0x237640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x237644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237640u;
        // 0x237644: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237640) {
            ctx->pc = 0x237654u;
            goto label_237654;
        }
    }
    ctx->pc = 0x237648u;
    // 0x237648: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x237648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x23764c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x23764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x237650: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x237650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_237654:
    // 0x237654: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x237654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x237658: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x237658u;
    {
        const bool branch_taken_0x237658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237658) {
            ctx->pc = 0x23765Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237658u;
            // 0x23765c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237678u;
            goto label_237678;
        }
    }
    ctx->pc = 0x237660u;
    // 0x237660: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x237660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x237664: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x237664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x237668: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x237668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x23766c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23766Cu;
    {
        const bool branch_taken_0x23766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23766Cu;
        // 0x237670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23766c) {
            ctx->pc = 0x237678u;
            goto label_237678;
        }
    }
    ctx->pc = 0x237674u;
label_237674:
    // 0x237674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237678:
    // 0x237678: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x237678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23767c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23767cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x237680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237684: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x237684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23768c: 0x3e00008  jr          $ra
    ctx->pc = 0x23768Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23768Cu;
        // 0x237690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23768Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237694u;
    // 0x237694: 0x0  nop
    ctx->pc = 0x237694u;
    // NOP
    ctx->pc = 0x237698u;
}
