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

// Function: sub_001062F0
// Address: 0x1062f0 - 0x1063b8
void sub_001062F0_0x1062f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001062F0_0x1062f0");
#endif

    switch (ctx->pc) {
        case 0x106328u: goto label_106328;
        case 0x106334u: goto label_106334;
        case 0x106340u: goto label_106340;
        case 0x10636cu: goto label_10636c;
        case 0x10638cu: goto label_10638c;
        default: break;
    }

    ctx->pc = 0x1062f0u;

    // 0x1062f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1062f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1062f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1062f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1062f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1062f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1062fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1062fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106300: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x106304: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x106304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106308: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x106308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10630c: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x10630Cu;
    {
        const bool branch_taken_0x10630c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x106310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10630Cu;
        // 0x106310: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10630c) {
            ctx->pc = 0x10638Cu;
            goto label_10638c;
        }
    }
    ctx->pc = 0x106314u;
    // 0x106314: 0x8e510018  lw          $s1, 0x18($s2)
    ctx->pc = 0x106314u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x106318: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x106318u;
    {
        const bool branch_taken_0x106318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x106318) {
            ctx->pc = 0x106370u;
            goto label_106370;
        }
    }
    ctx->pc = 0x106320u;
    // 0x106320: 0xc09f90a  jal         func_27E428
    ctx->pc = 0x106320u;
    SET_GPR_U32(ctx, 31, 0x106328u);
    ctx->pc = 0x106324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106320u;
    // 0x106324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x106320u, 0x106328u)) {
        return;
    }
    ctx->pc = 0x106328u;
label_106328:
    // 0x106328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10632c: 0xc09fc42  jal         func_27F108
    ctx->pc = 0x10632Cu;
    SET_GPR_U32(ctx, 31, 0x106334u);
    ctx->pc = 0x106330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10632Cu;
    // 0x106330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F108u, 0x10632Cu, 0x106334u)) {
        return;
    }
    ctx->pc = 0x106334u;
label_106334:
    // 0x106334: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106334u;
    {
        const bool branch_taken_0x106334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106334u;
        // 0x106338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106334) {
            ctx->pc = 0x106358u;
            goto label_106358;
        }
    }
    ctx->pc = 0x10633Cu;
    // 0x10633c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10633cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106340:
    // 0x106340: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x106340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x106344: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x106344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x106348: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x106348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x10634c: 0x0  nop
    ctx->pc = 0x10634cu;
    // NOP
    // 0x106350: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x106350u;
    {
        const bool branch_taken_0x106350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106350u;
        // 0x106354: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106350) {
            ctx->pc = 0x106340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106340;
        }
    }
    ctx->pc = 0x106358u;
label_106358:
    // 0x106358: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x106358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x10635c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10635Cu;
    {
        const bool branch_taken_0x10635c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10635c) {
            ctx->pc = 0x106370u;
            goto label_106370;
        }
    }
    ctx->pc = 0x106364u;
    // 0x106364: 0xc093356  jal         func_24CD58
    ctx->pc = 0x106364u;
    SET_GPR_U32(ctx, 31, 0x10636Cu);
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x106364u, 0x10636Cu)) {
        return;
    }
    ctx->pc = 0x10636Cu;
label_10636c:
    // 0x10636c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x10636cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_106370:
    // 0x106370: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x106370u;
    {
        const bool branch_taken_0x106370 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x106374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106370u;
        // 0x106374: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106370) {
            ctx->pc = 0x106390u;
            goto label_106390;
        }
    }
    ctx->pc = 0x106378u;
    // 0x106378: 0x8e6204b4  lw          $v0, 0x4B4($s3)
    ctx->pc = 0x106378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1204)));
    // 0x10637c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10637Cu;
    {
        const bool branch_taken_0x10637c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10637Cu;
        // 0x106380: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10637c) {
            ctx->pc = 0x106390u;
            goto label_106390;
        }
    }
    ctx->pc = 0x106384u;
    // 0x106384: 0xc041ab0  jal         func_106AC0
    ctx->pc = 0x106384u;
    SET_GPR_U32(ctx, 31, 0x10638Cu);
    ctx->pc = 0x106388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106384u;
    // 0x106388: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106AC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106AC0u, 0x106384u, 0x10638Cu)) {
        return;
    }
    ctx->pc = 0x10638Cu;
label_10638c:
    // 0x10638c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x10638cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106390:
    // 0x106390: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x106390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106394: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x106394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x106398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10639c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10639cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1063a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1063a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1063a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1063A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1063A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063A4u;
        // 0x1063a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1063A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1063ACu;
    // 0x1063ac: 0x0  nop
    ctx->pc = 0x1063acu;
    // NOP
    // 0x1063b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1063b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1063b4: 0x0  nop
    ctx->pc = 0x1063b4u;
    // NOP
    ctx->pc = 0x1063b8u;
}
