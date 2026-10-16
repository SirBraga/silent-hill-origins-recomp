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

// Function: sub_00305060
// Address: 0x305060 - 0x3051b0
void sub_00305060_0x305060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305060_0x305060");
#endif

    switch (ctx->pc) {
        case 0x3050b0u: goto label_3050b0;
        case 0x3050dcu: goto label_3050dc;
        case 0x3050f0u: goto label_3050f0;
        case 0x305120u: goto label_305120;
        case 0x30516cu: goto label_30516c;
        default: break;
    }

    ctx->pc = 0x305060u;

label_305060:
    // 0x305060: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x305060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x305064: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x305064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x305068: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x305068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x30506c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30506cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305070: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x305070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x305074: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x305074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305078: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x305078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x30507c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x30507cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305080: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x305080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x305084: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x305084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305088: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x305088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30508c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x305090: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x305090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x305094: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x305094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x305098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30509c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x30509cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3050a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3050a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3050a4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3050a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3050a8: 0xc0c13a8  jal         func_304EA0
    ctx->pc = 0x3050A8u;
    SET_GPR_U32(ctx, 31, 0x3050B0u);
    ctx->pc = 0x3050ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3050A8u;
    // 0x3050ac: 0x245e0020  addiu       $fp, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304EA0u, 0x3050A8u, 0x3050B0u)) {
        return;
    }
    ctx->pc = 0x3050B0u;
label_3050b0:
    // 0x3050b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3050b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3050b4: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3050B4u;
    {
        const bool branch_taken_0x3050b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050B4u;
        // 0x3050b8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050b4) {
            ctx->pc = 0x305184u;
            goto label_305184;
        }
    }
    ctx->pc = 0x3050BCu;
    // 0x3050bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3050bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3050c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3050c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3050c4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3050C4u;
    {
        const bool branch_taken_0x3050c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3050C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050C4u;
        // 0x3050c8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050c4) {
            ctx->pc = 0x305184u;
            goto label_305184;
        }
    }
    ctx->pc = 0x3050CCu;
    // 0x3050cc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3050ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3050d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3050d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3050d4: 0xc0c13e8  jal         func_304FA0
    ctx->pc = 0x3050D4u;
    SET_GPR_U32(ctx, 31, 0x3050DCu);
    ctx->pc = 0x3050D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3050D4u;
    // 0x3050d8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304FA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304FA0u, 0x3050D4u, 0x3050DCu)) {
        return;
    }
    ctx->pc = 0x3050DCu;
label_3050dc:
    // 0x3050dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3050dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3050e0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3050E0u;
    {
        const bool branch_taken_0x3050e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050E0u;
        // 0x3050e4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050e0) {
            ctx->pc = 0x305180u;
            goto label_305180;
        }
    }
    ctx->pc = 0x3050E8u;
    // 0x3050e8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3050e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x3050ec: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x3050ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_3050f0:
    // 0x3050f0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3050f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3050f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3050f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3050f8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x3050f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3050fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3050fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x305100: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x305100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305104: 0x10930019  beq         $a0, $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x305104u;
    {
        const bool branch_taken_0x305104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x305108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305104u;
        // 0x305108: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305104) {
            ctx->pc = 0x30516Cu;
            goto label_30516c;
        }
    }
    ctx->pc = 0x30510Cu;
    // 0x30510c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x305110: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x305110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305114: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x305114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x305118: 0xc0c1408  jal         func_305020
    ctx->pc = 0x305118u;
    SET_GPR_U32(ctx, 31, 0x305120u);
    ctx->pc = 0x30511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305118u;
    // 0x30511c: 0x568021  addu        $s0, $v0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x305020u, 0x305118u, 0x305120u)) {
        return;
    }
    ctx->pc = 0x305120u;
label_305120:
    // 0x305120: 0x54530003  bnel        $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x305120u;
    {
        const bool branch_taken_0x305120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x305120) {
            ctx->pc = 0x305124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305120u;
            // 0x305124: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305130u;
            goto label_305130;
        }
    }
    ctx->pc = 0x305128u;
    // 0x305128: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x305128u;
    {
        const bool branch_taken_0x305128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305128u;
        // 0x30512c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305128) {
            ctx->pc = 0x30513Cu;
            goto label_30513c;
        }
    }
    ctx->pc = 0x305130u;
label_305130:
    // 0x305130: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x305134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x305138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x305138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30513c:
    // 0x30513c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x30513Cu;
    {
        const bool branch_taken_0x30513c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30513c) {
            ctx->pc = 0x305140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30513Cu;
            // 0x305140: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305170u;
            goto label_305170;
        }
    }
    ctx->pc = 0x305144u;
    // 0x305144: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x305144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x305148: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x305148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30514c: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x30514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x305150: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x305150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305154: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x305154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x305158: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x305158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30515c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x30515cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x305160: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x305160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x305164: 0xc0c1418  jal         func_305060
    ctx->pc = 0x305164u;
    SET_GPR_U32(ctx, 31, 0x30516Cu);
    ctx->pc = 0x305168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305164u;
    // 0x305168: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305060u;
    goto label_305060;
    ctx->pc = 0x30516Cu;
label_30516c:
    // 0x30516c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_305170:
    // 0x305170: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x305170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x305174: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x305174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x305178: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x305178u;
    {
        const bool branch_taken_0x305178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305178u;
        // 0x30517c: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305178) {
            ctx->pc = 0x3050F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3050f0;
        }
    }
    ctx->pc = 0x305180u;
label_305180:
    // 0x305180: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x305180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_305184:
    // 0x305184: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x305184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x305188: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x305188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30518c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30518cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x305190: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x305190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x305194: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x305194u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x305198: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x305198u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30519c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x30519cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3051a0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3051a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3051a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3051a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3051a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3051A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3051ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051A8u;
        // 0x3051ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3051A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3051B0u;
}
