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

// Function: sub_00148398
// Address: 0x148398 - 0x148470
void sub_00148398_0x148398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148398_0x148398");
#endif

    switch (ctx->pc) {
        case 0x1483dcu: goto label_1483dc;
        case 0x1483fcu: goto label_1483fc;
        case 0x148414u: goto label_148414;
        case 0x14844cu: goto label_14844c;
        default: break;
    }

    ctx->pc = 0x148398u;

    // 0x148398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x148398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14839c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x14839cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1483a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1483a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1483a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1483a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1483a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1483a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1483acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1483b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1483b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483b4: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1483b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1483b8: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1483b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1483bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1483bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1483c0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1483C0u;
    {
        const bool branch_taken_0x1483c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1483C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483C0u;
        // 0x1483c4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483c0) {
            ctx->pc = 0x1483DCu;
            goto label_1483dc;
        }
    }
    ctx->pc = 0x1483C8u;
    // 0x1483c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1483c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1483cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1483CCu;
    {
        const bool branch_taken_0x1483cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1483D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483CCu;
        // 0x1483d0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483cc) {
            ctx->pc = 0x1483E0u;
            goto label_1483e0;
        }
    }
    ctx->pc = 0x1483D4u;
    // 0x1483d4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1483D4u;
    SET_GPR_U32(ctx, 31, 0x1483DCu);
    ctx->pc = 0x1483D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483D4u;
    // 0x1483d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1483D4u, 0x1483DCu)) {
        return;
    }
    ctx->pc = 0x1483DCu;
label_1483dc:
    // 0x1483dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1483dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1483e0:
    // 0x1483e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1483E0u;
    {
        const bool branch_taken_0x1483e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1483E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483E0u;
        // 0x1483e4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483e0) {
            ctx->pc = 0x14841Cu;
            goto label_14841c;
        }
    }
    ctx->pc = 0x1483E8u;
    // 0x1483e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1483e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483ec: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1483ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1483f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1483f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483f4: 0xc05213a  jal         func_1484E8
    ctx->pc = 0x1483F4u;
    SET_GPR_U32(ctx, 31, 0x1483FCu);
    ctx->pc = 0x1483F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1483F4u;
    // 0x1483f8: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1484E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1484E8u, 0x1483F4u, 0x1483FCu)) {
        return;
    }
    ctx->pc = 0x1483FCu;
label_1483fc:
    // 0x1483fc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1483fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x148400: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x148400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x148404: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x148404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x148408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14840c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x14840Cu;
    SET_GPR_U32(ctx, 31, 0x148414u);
    ctx->pc = 0x148410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14840Cu;
    // 0x148410: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14840Cu, 0x148414u)) {
        return;
    }
    ctx->pc = 0x148414u;
label_148414:
    // 0x148414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148418: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x148418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
label_14841c:
    // 0x14841c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x14841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x148420: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x148420u;
    {
        const bool branch_taken_0x148420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148420) {
            ctx->pc = 0x148424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148420u;
            // 0x148424: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14845Cu;
            goto label_14845c;
        }
    }
    ctx->pc = 0x148428u;
    // 0x148428: 0x8e221a70  lw          $v0, 0x1A70($s1)
    ctx->pc = 0x148428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x14842c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14842cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x148430: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148430u;
    {
        const bool branch_taken_0x148430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x148434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148430u;
        // 0x148434: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148430) {
            ctx->pc = 0x14844Cu;
            goto label_14844c;
        }
    }
    ctx->pc = 0x148438u;
    // 0x148438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14843c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14843Cu;
    {
        const bool branch_taken_0x14843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14843Cu;
        // 0x148440: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14843c) {
            ctx->pc = 0x148450u;
            goto label_148450;
        }
    }
    ctx->pc = 0x148444u;
    // 0x148444: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x148444u;
    SET_GPR_U32(ctx, 31, 0x14844Cu);
    ctx->pc = 0x148448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148444u;
    // 0x148448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x148444u, 0x14844Cu)) {
        return;
    }
    ctx->pc = 0x14844Cu;
label_14844c:
    // 0x14844c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_148450:
    // 0x148450: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x148450u;
    {
        const bool branch_taken_0x148450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148450) {
            ctx->pc = 0x148454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148450u;
            // 0x148454: 0xae02012c  sw          $v0, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148458u;
            goto label_148458;
        }
    }
    ctx->pc = 0x148458u;
label_148458:
    // 0x148458: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x148458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14845c:
    // 0x14845c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14845cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148464: 0x3e00008  jr          $ra
    ctx->pc = 0x148464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148464u;
        // 0x148468: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14846Cu;
    // 0x14846c: 0x0  nop
    ctx->pc = 0x14846cu;
    // NOP
    ctx->pc = 0x148470u;
}
