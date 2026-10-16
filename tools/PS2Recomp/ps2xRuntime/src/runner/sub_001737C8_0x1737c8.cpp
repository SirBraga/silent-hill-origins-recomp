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

// Function: sub_001737C8
// Address: 0x1737c8 - 0x173860
void sub_001737C8_0x1737c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001737C8_0x1737c8");
#endif

    switch (ctx->pc) {
        case 0x173808u: goto label_173808;
        case 0x17381cu: goto label_17381c;
        case 0x173838u: goto label_173838;
        case 0x173844u: goto label_173844;
        default: break;
    }

    ctx->pc = 0x1737c8u;

    // 0x1737c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1737c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1737cc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1737ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1737d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1737d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1737d4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1737d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1737d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1737dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1737dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1737e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1737e4: 0x24425bc8  addiu       $v0, $v0, 0x5BC8
    ctx->pc = 0x1737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23496));
    // 0x1737e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1737e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1737ec: 0x24635be8  addiu       $v1, $v1, 0x5BE8
    ctx->pc = 0x1737ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23528));
    // 0x1737f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1737f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1737f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1737f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737f8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x1737f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x1737fc: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x1737fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x173800: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x173800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x173804: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x173804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173808:
    // 0x173808: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x173808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17380c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17380Cu;
    {
        const bool branch_taken_0x17380c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17380Cu;
        // 0x173810: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17380c) {
            ctx->pc = 0x173820u;
            goto label_173820;
        }
    }
    ctx->pc = 0x173814u;
    // 0x173814: 0xc0808d4  jal         func_202350
    ctx->pc = 0x173814u;
    SET_GPR_U32(ctx, 31, 0x17381Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x173814u, 0x17381Cu)) {
        return;
    }
    ctx->pc = 0x17381Cu;
label_17381c:
    // 0x17381c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17381cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_173820:
    // 0x173820: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x173820u;
    {
        const bool branch_taken_0x173820 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x173824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173820u;
        // 0x173824: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173820) {
            ctx->pc = 0x173808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173808;
        }
    }
    ctx->pc = 0x173828u;
    // 0x173828: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x173828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17382c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x17382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x173830: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x173830u;
    SET_GPR_U32(ctx, 31, 0x173838u);
    ctx->pc = 0x173834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173830u;
    // 0x173834: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x173830u, 0x173838u)) {
        return;
    }
    ctx->pc = 0x173838u;
label_173838:
    // 0x173838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17383c: 0xc05d822  jal         func_176088
    ctx->pc = 0x17383Cu;
    SET_GPR_U32(ctx, 31, 0x173844u);
    ctx->pc = 0x173840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17383Cu;
    // 0x173840: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x17383Cu, 0x173844u)) {
        return;
    }
    ctx->pc = 0x173844u;
label_173844:
    // 0x173844: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x173844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173848: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x173848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17384c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17384cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173850: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x173850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173858: 0x3e00008  jr          $ra
    ctx->pc = 0x173858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173858u;
        // 0x17385c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173860u;
}
