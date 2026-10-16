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

// Function: sub_002580C8
// Address: 0x2580c8 - 0x258158
void sub_002580C8_0x2580c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002580C8_0x2580c8");
#endif

    switch (ctx->pc) {
        case 0x2580c8u: goto label_2580c8;
        case 0x2580ccu: goto label_2580cc;
        case 0x2580d0u: goto label_2580d0;
        case 0x2580d4u: goto label_2580d4;
        case 0x2580d8u: goto label_2580d8;
        case 0x2580dcu: goto label_2580dc;
        case 0x2580e0u: goto label_2580e0;
        case 0x2580e4u: goto label_2580e4;
        case 0x2580e8u: goto label_2580e8;
        case 0x2580ecu: goto label_2580ec;
        case 0x2580f0u: goto label_2580f0;
        case 0x2580f4u: goto label_2580f4;
        case 0x2580f8u: goto label_2580f8;
        case 0x2580fcu: goto label_2580fc;
        case 0x258100u: goto label_258100;
        case 0x258104u: goto label_258104;
        case 0x258108u: goto label_258108;
        case 0x25810cu: goto label_25810c;
        case 0x258110u: goto label_258110;
        case 0x258114u: goto label_258114;
        case 0x258118u: goto label_258118;
        case 0x25811cu: goto label_25811c;
        case 0x258120u: goto label_258120;
        case 0x258124u: goto label_258124;
        case 0x258128u: goto label_258128;
        case 0x25812cu: goto label_25812c;
        case 0x258130u: goto label_258130;
        case 0x258134u: goto label_258134;
        case 0x258138u: goto label_258138;
        case 0x25813cu: goto label_25813c;
        case 0x258140u: goto label_258140;
        case 0x258144u: goto label_258144;
        case 0x258148u: goto label_258148;
        case 0x25814cu: goto label_25814c;
        case 0x258150u: goto label_258150;
        case 0x258154u: goto label_258154;
        default: break;
    }

    ctx->pc = 0x2580c8u;

label_2580c8:
    // 0x2580c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2580c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2580cc:
    // 0x2580cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2580ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2580d0:
    // 0x2580d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2580d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2580d4:
    // 0x2580d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2580d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2580d8:
    // 0x2580d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2580d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2580dc:
    // 0x2580dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2580dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2580e0:
    // 0x2580e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2580e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2580e4:
    // 0x2580e4: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x2580e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2580e8:
    // 0x2580e8: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_2580ec:
    if (ctx->pc == 0x2580ECu) {
        ctx->pc = 0x2580ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580E8u;
        // 0x2580ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2580F0u;
        goto label_2580f0;
    }
    ctx->pc = 0x2580E8u;
    {
        const bool branch_taken_0x2580e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2580ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580E8u;
        // 0x2580ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580e8) {
            ctx->pc = 0x258134u;
            goto label_258134;
        }
    }
    ctx->pc = 0x2580F0u;
label_2580f0:
    // 0x2580f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2580f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2580f4:
    // 0x2580f4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_2580f8:
    if (ctx->pc == 0x2580F8u) {
        ctx->pc = 0x2580F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580F4u;
        // 0x2580f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2580FCu;
        goto label_2580fc;
    }
    ctx->pc = 0x2580F4u;
    {
        const bool branch_taken_0x2580f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2580F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580F4u;
        // 0x2580f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580f4) {
            ctx->pc = 0x258118u;
            goto label_258118;
        }
    }
    ctx->pc = 0x2580FCu;
label_2580fc:
    // 0x2580fc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2580fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_258100:
    // 0x258100: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x258100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_258104:
    // 0x258104: 0xc095f48  jal         func_257D20
label_258108:
    if (ctx->pc == 0x258108u) {
        ctx->pc = 0x258108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258104u;
        // 0x258108: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25810Cu;
        goto label_25810c;
    }
    ctx->pc = 0x258104u;
    SET_GPR_U32(ctx, 31, 0x25810Cu);
    ctx->pc = 0x258108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258104u;
    // 0x258108: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257D20u, 0x258104u, 0x25810Cu)) {
        return;
    }
    ctx->pc = 0x25810Cu;
label_25810c:
    // 0x25810c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25810cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_258110:
    // 0x258110: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_258114:
    if (ctx->pc == 0x258114u) {
        ctx->pc = 0x258114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258110u;
        // 0x258114: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258118u;
        goto label_258118;
    }
    ctx->pc = 0x258110u;
    {
        const bool branch_taken_0x258110 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x258114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258110u;
        // 0x258114: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258110) {
            ctx->pc = 0x258100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258100;
        }
    }
    ctx->pc = 0x258118u;
label_258118:
    // 0x258118: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x258118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25811c:
    // 0x25811c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x25811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_258120:
    // 0x258120: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x258120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_258124:
    // 0x258124: 0x60f809  jalr        $v1
label_258128:
    if (ctx->pc == 0x258128u) {
        ctx->pc = 0x258128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258124u;
        // 0x258128: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25812Cu;
        goto label_25812c;
    }
    ctx->pc = 0x258124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25812Cu);
        ctx->pc = 0x258128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258124u;
        // 0x258128: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258124u, 0x25812Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25812Cu;
label_25812c:
    // 0x25812c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x25812cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_258130:
    // 0x258130: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x258130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258134:
    // 0x258134: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x258134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_258138:
    // 0x258138: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x258138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_25813c:
    // 0x25813c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25813cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_258140:
    // 0x258140: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x258140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258144:
    // 0x258144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_258148:
    // 0x258148: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x258148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25814c:
    // 0x25814c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_258150:
    // 0x258150: 0x3e00008  jr          $ra
label_258154:
    if (ctx->pc == 0x258154u) {
        ctx->pc = 0x258154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258150u;
        // 0x258154: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258158u;
        goto label_fallthrough_0x258150;
    }
    ctx->pc = 0x258150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258150u;
        // 0x258154: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x258150:
    ctx->pc = 0x258158u;
}
