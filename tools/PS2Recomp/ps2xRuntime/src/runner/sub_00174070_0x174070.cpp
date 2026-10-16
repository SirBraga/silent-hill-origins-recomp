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

// Function: sub_00174070
// Address: 0x174070 - 0x174148
void sub_00174070_0x174070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174070_0x174070");
#endif

    switch (ctx->pc) {
        case 0x17409cu: goto label_17409c;
        case 0x1740ccu: goto label_1740cc;
        case 0x1740dcu: goto label_1740dc;
        case 0x1740e0u: goto label_1740e0;
        case 0x1740f0u: goto label_1740f0;
        case 0x174110u: goto label_174110;
        default: break;
    }

    ctx->pc = 0x174070u;

    // 0x174070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x174070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x174074: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x174074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x174078: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x174078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17407c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17407cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174080: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x174080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174084: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x174084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x174088: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17408c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x174090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174094: 0xc05d80c  jal         func_176030
    ctx->pc = 0x174094u;
    SET_GPR_U32(ctx, 31, 0x17409Cu);
    ctx->pc = 0x174098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174094u;
    // 0x174098: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x174094u, 0x17409Cu)) {
        return;
    }
    ctx->pc = 0x17409Cu;
label_17409c:
    // 0x17409c: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x17409cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x1740a0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1740a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1740a4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1740a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1740a8: 0x24635dd8  addiu       $v1, $v1, 0x5DD8
    ctx->pc = 0x1740a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24024));
    // 0x1740ac: 0x24425db8  addiu       $v0, $v0, 0x5DB8
    ctx->pc = 0x1740acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23992));
    // 0x1740b0: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x1740b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x1740b4: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1740b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1740b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1740b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740bc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1740bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1740c0: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1740c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1740c4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1740C4u;
    SET_GPR_U32(ctx, 31, 0x1740CCu);
    ctx->pc = 0x1740C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1740C4u;
    // 0x1740c8: 0x26300074  addiu       $s0, $s1, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1740C4u, 0x1740CCu)) {
        return;
    }
    ctx->pc = 0x1740CCu;
label_1740cc:
    // 0x1740cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1740ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1740d0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1740d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1740d4: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x1740D4u;
    SET_GPR_U32(ctx, 31, 0x1740DCu);
    ctx->pc = 0x1740D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1740D4u;
    // 0x1740d8: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x1740D4u, 0x1740DCu)) {
        return;
    }
    ctx->pc = 0x1740DCu;
label_1740dc:
    // 0x1740dc: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x1740dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_1740e0:
    // 0x1740e0: 0x26855d58  addiu       $a1, $s4, 0x5D58
    ctx->pc = 0x1740e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 23896));
    // 0x1740e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1740e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1740e8: 0xc07f90a  jal         func_1FE428
    ctx->pc = 0x1740E8u;
    SET_GPR_U32(ctx, 31, 0x1740F0u);
    ctx->pc = 0x1740ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1740E8u;
    // 0x1740ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE428u, 0x1740E8u, 0x1740F0u)) {
        return;
    }
    ctx->pc = 0x1740F0u;
label_1740f0:
    // 0x1740f0: 0xae02fffc  sw          $v0, -0x4($s0)
    ctx->pc = 0x1740f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 2));
    // 0x1740f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1740f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1740f8: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1740f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1740fc: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1740FCu;
    {
        const bool branch_taken_0x1740fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x174100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740FCu;
        // 0x174100: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740fc) {
            ctx->pc = 0x174110u;
            goto label_174110;
        }
    }
    ctx->pc = 0x174104u;
    // 0x174104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174108: 0xc05d052  jal         func_174148
    ctx->pc = 0x174108u;
    SET_GPR_U32(ctx, 31, 0x174110u);
    ctx->pc = 0x17410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174108u;
    // 0x17410c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x174148u, 0x174108u, 0x174110u)) {
        return;
    }
    ctx->pc = 0x174110u;
label_174110:
    // 0x174110: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x174114: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x174114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x174118: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x174118u;
    {
        const bool branch_taken_0x174118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174118u;
        // 0x17411c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174118) {
            ctx->pc = 0x1740E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1740e0;
        }
    }
    ctx->pc = 0x174120u;
    // 0x174120: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x174120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174124: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x174124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174128: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x174128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17412c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17412cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174130: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x174130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174134: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x174134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17413c: 0x3e00008  jr          $ra
    ctx->pc = 0x17413Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17413Cu;
        // 0x174140: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17413Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174144u;
    // 0x174144: 0x0  nop
    ctx->pc = 0x174144u;
    // NOP
    ctx->pc = 0x174148u;
}
