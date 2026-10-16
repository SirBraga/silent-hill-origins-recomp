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

// Function: sub_001CF440
// Address: 0x1cf440 - 0x1cf4e0
void sub_001CF440_0x1cf440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF440_0x1cf440");
#endif

    switch (ctx->pc) {
        case 0x1cf440u: goto label_1cf440;
        case 0x1cf444u: goto label_1cf444;
        case 0x1cf448u: goto label_1cf448;
        case 0x1cf44cu: goto label_1cf44c;
        case 0x1cf450u: goto label_1cf450;
        case 0x1cf454u: goto label_1cf454;
        case 0x1cf458u: goto label_1cf458;
        case 0x1cf45cu: goto label_1cf45c;
        case 0x1cf460u: goto label_1cf460;
        case 0x1cf464u: goto label_1cf464;
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf46cu: goto label_1cf46c;
        case 0x1cf470u: goto label_1cf470;
        case 0x1cf474u: goto label_1cf474;
        case 0x1cf478u: goto label_1cf478;
        case 0x1cf47cu: goto label_1cf47c;
        case 0x1cf480u: goto label_1cf480;
        case 0x1cf484u: goto label_1cf484;
        case 0x1cf488u: goto label_1cf488;
        case 0x1cf48cu: goto label_1cf48c;
        case 0x1cf490u: goto label_1cf490;
        case 0x1cf494u: goto label_1cf494;
        case 0x1cf498u: goto label_1cf498;
        case 0x1cf49cu: goto label_1cf49c;
        case 0x1cf4a0u: goto label_1cf4a0;
        case 0x1cf4a4u: goto label_1cf4a4;
        case 0x1cf4a8u: goto label_1cf4a8;
        case 0x1cf4acu: goto label_1cf4ac;
        case 0x1cf4b0u: goto label_1cf4b0;
        case 0x1cf4b4u: goto label_1cf4b4;
        case 0x1cf4b8u: goto label_1cf4b8;
        case 0x1cf4bcu: goto label_1cf4bc;
        case 0x1cf4c0u: goto label_1cf4c0;
        case 0x1cf4c4u: goto label_1cf4c4;
        case 0x1cf4c8u: goto label_1cf4c8;
        case 0x1cf4ccu: goto label_1cf4cc;
        case 0x1cf4d0u: goto label_1cf4d0;
        case 0x1cf4d4u: goto label_1cf4d4;
        case 0x1cf4d8u: goto label_1cf4d8;
        case 0x1cf4dcu: goto label_1cf4dc;
        default: break;
    }

    ctx->pc = 0x1cf440u;

label_1cf440:
    // 0x1cf440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cf444:
    // 0x1cf444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cf444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cf448:
    // 0x1cf448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cf44c:
    // 0x1cf44c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cf450:
    // 0x1cf450: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1cf450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1cf454:
    // 0x1cf454: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cf454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1cf458:
    // 0x1cf458: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cf45c:
    if (ctx->pc == 0x1CF45Cu) {
        ctx->pc = 0x1CF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF458u;
        // 0x1cf45c: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF460u;
        goto label_1cf460;
    }
    ctx->pc = 0x1CF458u;
    {
        const bool branch_taken_0x1cf458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF458u;
        // 0x1cf45c: 0x8e050264  lw          $a1, 0x264($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf458) {
            ctx->pc = 0x1CF47Cu;
            goto label_1cf47c;
        }
    }
    ctx->pc = 0x1CF460u;
label_1cf460:
    // 0x1cf460: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cf460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cf464:
    // 0x1cf464: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cf464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cf468:
    // 0x1cf468: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cf46c:
    // 0x1cf46c: 0x60f809  jalr        $v1
label_1cf470:
    if (ctx->pc == 0x1CF470u) {
        ctx->pc = 0x1CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF46Cu;
        // 0x1cf470: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF474u;
        goto label_1cf474;
    }
    ctx->pc = 0x1CF46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CF474u);
        ctx->pc = 0x1CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF46Cu;
        // 0x1cf470: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF46Cu, 0x1CF474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF474u;
label_1cf474:
    // 0x1cf474: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cf478:
    if (ctx->pc == 0x1CF478u) {
        ctx->pc = 0x1CF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF474u;
        // 0x1cf478: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF47Cu;
        goto label_1cf47c;
    }
    ctx->pc = 0x1CF474u;
    {
        const bool branch_taken_0x1cf474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF474u;
        // 0x1cf478: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf474) {
            ctx->pc = 0x1CF494u;
            goto label_1cf494;
        }
    }
    ctx->pc = 0x1CF47Cu;
label_1cf47c:
    // 0x1cf47c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1cf47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1cf480:
    // 0x1cf480: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1cf480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1cf484:
    // 0x1cf484: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1cf488:
    // 0x1cf488: 0x60f809  jalr        $v1
label_1cf48c:
    if (ctx->pc == 0x1CF48Cu) {
        ctx->pc = 0x1CF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF488u;
        // 0x1cf48c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF490u;
        goto label_1cf490;
    }
    ctx->pc = 0x1CF488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CF490u);
        ctx->pc = 0x1CF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF488u;
        // 0x1cf48c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF488u, 0x1CF490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF490u;
label_1cf490:
    // 0x1cf490: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cf490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cf494:
    // 0x1cf494: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf498:
    // 0x1cf498: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cf49c:
    // 0x1cf49c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cf4a0:
    // 0x1cf4a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cf4a4:
    // 0x1cf4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf4a8:
    // 0x1cf4a8: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cf4a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cf4ac:
    // 0x1cf4ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1cf4b0:
    if (ctx->pc == 0x1CF4B0u) {
        ctx->pc = 0x1CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4ACu;
        // 0x1cf4b0: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4B4u;
        goto label_1cf4b4;
    }
    ctx->pc = 0x1CF4ACu;
    {
        const bool branch_taken_0x1cf4ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4ACu;
        // 0x1cf4b0: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4ac) {
            ctx->pc = 0x1CF498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf498;
        }
    }
    ctx->pc = 0x1CF4B4u;
label_1cf4b4:
    // 0x1cf4b4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cf4b8:
    // 0x1cf4b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf4bc:
    // 0x1cf4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf4c0:
    // 0x1cf4c0: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1cf4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
label_1cf4c4:
    // 0x1cf4c4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cf4c8:
    // 0x1cf4c8: 0xac44002c  sw          $a0, 0x2C($v0)
    ctx->pc = 0x1cf4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
label_1cf4cc:
    // 0x1cf4cc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1cf4d0:
    // 0x1cf4d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cf4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf4d4:
    // 0x1cf4d4: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x1cf4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_1cf4d8:
    // 0x1cf4d8: 0x3e00008  jr          $ra
label_1cf4dc:
    if (ctx->pc == 0x1CF4DCu) {
        ctx->pc = 0x1CF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4D8u;
        // 0x1cf4dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF4E0u;
        goto label_fallthrough_0x1cf4d8;
    }
    ctx->pc = 0x1CF4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4D8u;
        // 0x1cf4dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cf4d8:
    ctx->pc = 0x1CF4E0u;
}
