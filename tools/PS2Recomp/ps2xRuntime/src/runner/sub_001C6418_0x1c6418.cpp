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

// Function: sub_001C6418
// Address: 0x1c6418 - 0x1c64a8
void sub_001C6418_0x1c6418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6418_0x1c6418");
#endif

    switch (ctx->pc) {
        case 0x1c6418u: goto label_1c6418;
        case 0x1c641cu: goto label_1c641c;
        case 0x1c6420u: goto label_1c6420;
        case 0x1c6424u: goto label_1c6424;
        case 0x1c6428u: goto label_1c6428;
        case 0x1c642cu: goto label_1c642c;
        case 0x1c6430u: goto label_1c6430;
        case 0x1c6434u: goto label_1c6434;
        case 0x1c6438u: goto label_1c6438;
        case 0x1c643cu: goto label_1c643c;
        case 0x1c6440u: goto label_1c6440;
        case 0x1c6444u: goto label_1c6444;
        case 0x1c6448u: goto label_1c6448;
        case 0x1c644cu: goto label_1c644c;
        case 0x1c6450u: goto label_1c6450;
        case 0x1c6454u: goto label_1c6454;
        case 0x1c6458u: goto label_1c6458;
        case 0x1c645cu: goto label_1c645c;
        case 0x1c6460u: goto label_1c6460;
        case 0x1c6464u: goto label_1c6464;
        case 0x1c6468u: goto label_1c6468;
        case 0x1c646cu: goto label_1c646c;
        case 0x1c6470u: goto label_1c6470;
        case 0x1c6474u: goto label_1c6474;
        case 0x1c6478u: goto label_1c6478;
        case 0x1c647cu: goto label_1c647c;
        case 0x1c6480u: goto label_1c6480;
        case 0x1c6484u: goto label_1c6484;
        case 0x1c6488u: goto label_1c6488;
        case 0x1c648cu: goto label_1c648c;
        case 0x1c6490u: goto label_1c6490;
        case 0x1c6494u: goto label_1c6494;
        case 0x1c6498u: goto label_1c6498;
        case 0x1c649cu: goto label_1c649c;
        case 0x1c64a0u: goto label_1c64a0;
        case 0x1c64a4u: goto label_1c64a4;
        default: break;
    }

    ctx->pc = 0x1c6418u;

label_1c6418:
    // 0x1c6418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c641c:
    // 0x1c641c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c641cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6420:
    // 0x1c6420: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c6424:
    // 0x1c6424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6428:
    // 0x1c6428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c642c:
    // 0x1c642c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c642cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6430:
    // 0x1c6430: 0x2603028c  addiu       $v1, $s0, 0x28C
    ctx->pc = 0x1c6430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
label_1c6434:
    // 0x1c6434: 0x0  nop
    ctx->pc = 0x1c6434u;
    // NOP
label_1c6438:
    // 0x1c6438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c6438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c643c:
    // 0x1c643c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1c6440:
    if (ctx->pc == 0x1C6440u) {
        ctx->pc = 0x1C6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C643Cu;
        // 0x1c6440: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6444u;
        goto label_1c6444;
    }
    ctx->pc = 0x1C643Cu;
    {
        const bool branch_taken_0x1c643c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c643c) {
            ctx->pc = 0x1C6440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C643Cu;
            // 0x1c6440: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C644Cu;
            goto label_1c644c;
        }
    }
    ctx->pc = 0x1C6444u;
label_1c6444:
    // 0x1c6444: 0x10000013  b           . + 4 + (0x13 << 2)
label_1c6448:
    if (ctx->pc == 0x1C6448u) {
        ctx->pc = 0x1C6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6444u;
        // 0x1c6448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C644Cu;
        goto label_1c644c;
    }
    ctx->pc = 0x1C6444u;
    {
        const bool branch_taken_0x1c6444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6444u;
        // 0x1c6448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6444) {
            ctx->pc = 0x1C6494u;
            goto label_1c6494;
        }
    }
    ctx->pc = 0x1C644Cu;
label_1c644c:
    // 0x1c644c: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1c644cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_1c6450:
    // 0x1c6450: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1c6454:
    if (ctx->pc == 0x1C6454u) {
        ctx->pc = 0x1C6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6450u;
        // 0x1c6454: 0x24630044  addiu       $v1, $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6458u;
        goto label_1c6458;
    }
    ctx->pc = 0x1C6450u;
    {
        const bool branch_taken_0x1c6450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6450u;
        // 0x1c6454: 0x24630044  addiu       $v1, $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6450) {
            ctx->pc = 0x1C6438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6438;
        }
    }
    ctx->pc = 0x1C6458u;
label_1c6458:
    // 0x1c6458: 0xae0603c0  sw          $a2, 0x3C0($s0)
    ctx->pc = 0x1c6458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 6));
label_1c645c:
    // 0x1c645c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c6460:
    // 0x1c6460: 0xae0603c4  sw          $a2, 0x3C4($s0)
    ctx->pc = 0x1c6460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 6));
label_1c6464:
    // 0x1c6464: 0x8e0603cc  lw          $a2, 0x3CC($s0)
    ctx->pc = 0x1c6464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
label_1c6468:
    // 0x1c6468: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1c6468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1c646c:
    // 0x1c646c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c646cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c6470:
    // 0x1c6470: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c6470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c6474:
    // 0x1c6474: 0x60f809  jalr        $v1
label_1c6478:
    if (ctx->pc == 0x1C6478u) {
        ctx->pc = 0x1C6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6474u;
        // 0x1c6478: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C647Cu;
        goto label_1c647c;
    }
    ctx->pc = 0x1C6474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C647Cu);
        ctx->pc = 0x1C6478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6474u;
        // 0x1c6478: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6474u, 0x1C647Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C647Cu;
label_1c647c:
    // 0x1c647c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c6480:
    // 0x1c6480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6484:
    // 0x1c6484: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1c6484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c6488:
    // 0x1c6488: 0xc0c493d  jal         func_3124F4
label_1c648c:
    if (ctx->pc == 0x1C648Cu) {
        ctx->pc = 0x1C648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6488u;
        // 0x1c648c: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6490u;
        goto label_1c6490;
    }
    ctx->pc = 0x1C6488u;
    SET_GPR_U32(ctx, 31, 0x1C6490u);
    ctx->pc = 0x1C648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6488u;
    // 0x1c648c: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C6488u, 0x1C6490u)) {
        return;
    }
    ctx->pc = 0x1C6490u;
label_1c6490:
    // 0x1c6490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6494:
    // 0x1c6494: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c6498:
    // 0x1c6498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c649c:
    // 0x1c649c: 0x3e00008  jr          $ra
label_1c64a0:
    if (ctx->pc == 0x1C64A0u) {
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C64A4u;
        goto label_1c64a4;
    }
    ctx->pc = 0x1C649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C649Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C64A4u;
label_1c64a4:
    // 0x1c64a4: 0x0  nop
    ctx->pc = 0x1c64a4u;
    // NOP
    ctx->pc = 0x1c64a8u;
}
