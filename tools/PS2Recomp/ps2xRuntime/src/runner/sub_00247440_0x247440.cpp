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

// Function: sub_00247440
// Address: 0x247440 - 0x2474e8
void sub_00247440_0x247440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247440_0x247440");
#endif

    switch (ctx->pc) {
        case 0x247478u: goto label_247478;
        default: break;
    }

    ctx->pc = 0x247440u;

    // 0x247440: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x247440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x247444: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x247444u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C1180u));
    // 0x247448: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x247448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24744c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x24744Cu;
    {
        const bool branch_taken_0x24744c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24744Cu;
        // 0x247450: 0x24441180  addiu       $a0, $v0, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24744c) {
            ctx->pc = 0x2474D0u;
            goto label_2474d0;
        }
    }
    ctx->pc = 0x247454u;
    // 0x247454: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x247454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x247458: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x247458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24745c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x247460: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x247460u;
    {
        const bool branch_taken_0x247460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247460u;
        // 0x247464: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247460) {
            ctx->pc = 0x2474BCu;
            goto label_2474bc;
        }
    }
    ctx->pc = 0x247468u;
    // 0x247468: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x247468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24746c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x24746cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x247470: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x247470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x247474: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_247478:
    // 0x247478: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x247478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24747c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x24747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x247480: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x247480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x247484: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x247484u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x247488: 0x872818  mult        $a1, $a0, $a3
    ctx->pc = 0x247488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24748c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24748cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247490: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x247490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247494: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x247494u;
    {
        const bool branch_taken_0x247494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247494u;
        // 0x247498: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247494) {
            ctx->pc = 0x2474B0u;
            goto label_2474b0;
        }
    }
    ctx->pc = 0x24749Cu;
    // 0x24749c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2474a0: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x2474a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x2474a4: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2474a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2474a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2474a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2474ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2474acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2474b0:
    // 0x2474b0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2474b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2474b4: 0x5482fff0  bnel        $a0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2474B4u;
    {
        const bool branch_taken_0x2474b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2474b4) {
            ctx->pc = 0x2474B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2474B4u;
            // 0x2474b8: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247478;
        }
    }
    ctx->pc = 0x2474BCu;
label_2474bc:
    // 0x2474bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2474bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2474c0: 0x25031180  addiu       $v1, $t0, 0x1180
    ctx->pc = 0x2474c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4480));
    // 0x2474c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2474c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2474c8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2474c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2474cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2474ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2474d0:
    // 0x2474d0: 0x25021180  addiu       $v0, $t0, 0x1180
    ctx->pc = 0x2474d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4480));
    // 0x2474d4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2474d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2474d8: 0xac204138  sw          $zero, 0x4138($at)
    ctx->pc = 0x2474d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4138u, _value); } while (0);
    // 0x2474dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2474DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2474E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474DCu;
        // 0x2474e0: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2474DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2474E4u;
    // 0x2474e4: 0x0  nop
    ctx->pc = 0x2474e4u;
    // NOP
    ctx->pc = 0x2474e8u;
}
