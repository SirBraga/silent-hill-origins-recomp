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

// Function: sub_001764A8
// Address: 0x1764a8 - 0x176540
void sub_001764A8_0x1764a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001764A8_0x1764a8");
#endif

    switch (ctx->pc) {
        case 0x1764e8u: goto label_1764e8;
        case 0x1764fcu: goto label_1764fc;
        case 0x176518u: goto label_176518;
        case 0x176524u: goto label_176524;
        default: break;
    }

    ctx->pc = 0x1764a8u;

    // 0x1764a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1764a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1764ac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1764b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1764b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1764b4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1764b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1764b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1764b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1764bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1764bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1764c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1764c4: 0x24426370  addiu       $v0, $v0, 0x6370
    ctx->pc = 0x1764c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25456));
    // 0x1764c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1764c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1764cc: 0x24636390  addiu       $v1, $v1, 0x6390
    ctx->pc = 0x1764ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25488));
    // 0x1764d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1764d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1764d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1764d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764d8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x1764d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x1764dc: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x1764dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x1764e0: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x1764e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x1764e4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1764e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1764e8:
    // 0x1764e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1764e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1764ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1764ECu;
    {
        const bool branch_taken_0x1764ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1764F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764ECu;
        // 0x1764f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764ec) {
            ctx->pc = 0x176500u;
            goto label_176500;
        }
    }
    ctx->pc = 0x1764F4u;
    // 0x1764f4: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1764F4u;
    SET_GPR_U32(ctx, 31, 0x1764FCu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1764F4u, 0x1764FCu)) {
        return;
    }
    ctx->pc = 0x1764FCu;
label_1764fc:
    // 0x1764fc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1764fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_176500:
    // 0x176500: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x176500u;
    {
        const bool branch_taken_0x176500 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x176504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176500u;
        // 0x176504: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176500) {
            ctx->pc = 0x1764E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1764e8;
        }
    }
    ctx->pc = 0x176508u;
    // 0x176508: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17650c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x17650cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x176510: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x176510u;
    SET_GPR_U32(ctx, 31, 0x176518u);
    ctx->pc = 0x176514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176510u;
    // 0x176514: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x176510u, 0x176518u)) {
        return;
    }
    ctx->pc = 0x176518u;
label_176518:
    // 0x176518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17651c: 0xc05d822  jal         func_176088
    ctx->pc = 0x17651Cu;
    SET_GPR_U32(ctx, 31, 0x176524u);
    ctx->pc = 0x176520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17651Cu;
    // 0x176520: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x17651Cu, 0x176524u)) {
        return;
    }
    ctx->pc = 0x176524u;
label_176524:
    // 0x176524: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x176524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176528: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x176528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17652c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17652cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176530: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x176530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176538: 0x3e00008  jr          $ra
    ctx->pc = 0x176538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176538u;
        // 0x17653c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176540u;
}
