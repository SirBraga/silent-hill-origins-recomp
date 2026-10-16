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

// Function: sub_00206068
// Address: 0x206068 - 0x206100
void sub_00206068_0x206068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206068_0x206068");
#endif

    switch (ctx->pc) {
        case 0x206068u: goto label_206068;
        case 0x20606cu: goto label_20606c;
        case 0x206070u: goto label_206070;
        case 0x206074u: goto label_206074;
        case 0x206078u: goto label_206078;
        case 0x20607cu: goto label_20607c;
        case 0x206080u: goto label_206080;
        case 0x206084u: goto label_206084;
        case 0x206088u: goto label_206088;
        case 0x20608cu: goto label_20608c;
        case 0x206090u: goto label_206090;
        case 0x206094u: goto label_206094;
        case 0x206098u: goto label_206098;
        case 0x20609cu: goto label_20609c;
        case 0x2060a0u: goto label_2060a0;
        case 0x2060a4u: goto label_2060a4;
        case 0x2060a8u: goto label_2060a8;
        case 0x2060acu: goto label_2060ac;
        case 0x2060b0u: goto label_2060b0;
        case 0x2060b4u: goto label_2060b4;
        case 0x2060b8u: goto label_2060b8;
        case 0x2060bcu: goto label_2060bc;
        case 0x2060c0u: goto label_2060c0;
        case 0x2060c4u: goto label_2060c4;
        case 0x2060c8u: goto label_2060c8;
        case 0x2060ccu: goto label_2060cc;
        case 0x2060d0u: goto label_2060d0;
        case 0x2060d4u: goto label_2060d4;
        case 0x2060d8u: goto label_2060d8;
        case 0x2060dcu: goto label_2060dc;
        case 0x2060e0u: goto label_2060e0;
        case 0x2060e4u: goto label_2060e4;
        case 0x2060e8u: goto label_2060e8;
        case 0x2060ecu: goto label_2060ec;
        case 0x2060f0u: goto label_2060f0;
        case 0x2060f4u: goto label_2060f4;
        case 0x2060f8u: goto label_2060f8;
        case 0x2060fcu: goto label_2060fc;
        default: break;
    }

    ctx->pc = 0x206068u;

label_206068:
    // 0x206068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20606c:
    // 0x20606c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20606cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206070:
    // 0x206070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206074:
    // 0x206074: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x206074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_206078:
    // 0x206078: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x206078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20607c:
    // 0x20607c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_206080:
    if (ctx->pc == 0x206080u) {
        ctx->pc = 0x206080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20607Cu;
        // 0x206080: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206084u;
        goto label_206084;
    }
    ctx->pc = 0x20607Cu;
    {
        const bool branch_taken_0x20607c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x206080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20607Cu;
        // 0x206080: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20607c) {
            ctx->pc = 0x2060BCu;
            goto label_2060bc;
        }
    }
    ctx->pc = 0x206084u;
label_206084:
    // 0x206084: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_206088:
    if (ctx->pc == 0x206088u) {
        ctx->pc = 0x206088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206084u;
        // 0x206088: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20608Cu;
        goto label_20608c;
    }
    ctx->pc = 0x206084u;
    {
        const bool branch_taken_0x206084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206084u;
        // 0x206088: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206084) {
            ctx->pc = 0x20609Cu;
            goto label_20609c;
        }
    }
    ctx->pc = 0x20608Cu;
label_20608c:
    // 0x20608c: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
label_206090:
    if (ctx->pc == 0x206090u) {
        ctx->pc = 0x206090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20608Cu;
        // 0x206090: 0x8cc4001c  lw          $a0, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206094u;
        goto label_206094;
    }
    ctx->pc = 0x20608Cu;
    {
        const bool branch_taken_0x20608c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20608c) {
            ctx->pc = 0x206090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20608Cu;
            // 0x206090: 0x8cc4001c  lw          $a0, 0x1C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2060D4u;
            goto label_2060d4;
        }
    }
    ctx->pc = 0x206094u;
label_206094:
    // 0x206094: 0x10000017  b           . + 4 + (0x17 << 2)
label_206098:
    if (ctx->pc == 0x206098u) {
        ctx->pc = 0x206098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206094u;
        // 0x206098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20609Cu;
        goto label_20609c;
    }
    ctx->pc = 0x206094u;
    {
        const bool branch_taken_0x206094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206094u;
        // 0x206098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206094) {
            ctx->pc = 0x2060F4u;
            goto label_2060f4;
        }
    }
    ctx->pc = 0x20609Cu;
label_20609c:
    // 0x20609c: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
label_2060a0:
    if (ctx->pc == 0x2060A0u) {
        ctx->pc = 0x2060A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20609Cu;
        // 0x2060a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060A4u;
        goto label_2060a4;
    }
    ctx->pc = 0x20609Cu;
    {
        const bool branch_taken_0x20609c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2060A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20609Cu;
        // 0x2060a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20609c) {
            ctx->pc = 0x2060F4u;
            goto label_2060f4;
        }
    }
    ctx->pc = 0x2060A4u;
label_2060a4:
    // 0x2060a4: 0xc09cd18  jal         func_273460
label_2060a8:
    if (ctx->pc == 0x2060A8u) {
        ctx->pc = 0x2060A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060A4u;
        // 0x2060a8: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060ACu;
        goto label_2060ac;
    }
    ctx->pc = 0x2060A4u;
    SET_GPR_U32(ctx, 31, 0x2060ACu);
    ctx->pc = 0x2060A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060A4u;
    // 0x2060a8: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273460u, 0x2060A4u, 0x2060ACu)) {
        return;
    }
    ctx->pc = 0x2060ACu;
label_2060ac:
    // 0x2060ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2060b0:
    if (ctx->pc == 0x2060B0u) {
        ctx->pc = 0x2060B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060ACu;
        // 0x2060b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060B4u;
        goto label_2060b4;
    }
    ctx->pc = 0x2060ACu;
    {
        const bool branch_taken_0x2060ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060ACu;
        // 0x2060b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060ac) {
            ctx->pc = 0x2060F0u;
            goto label_2060f0;
        }
    }
    ctx->pc = 0x2060B4u;
label_2060b4:
    // 0x2060b4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2060b8:
    if (ctx->pc == 0x2060B8u) {
        ctx->pc = 0x2060B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060B4u;
        // 0x2060b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060BCu;
        goto label_2060bc;
    }
    ctx->pc = 0x2060B4u;
    {
        const bool branch_taken_0x2060b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060B4u;
        // 0x2060b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060b4) {
            ctx->pc = 0x2060F8u;
            goto label_2060f8;
        }
    }
    ctx->pc = 0x2060BCu;
label_2060bc:
    // 0x2060bc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2060bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2060c0:
    // 0x2060c0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2060c4:
    // 0x2060c4: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_2060c8:
    if (ctx->pc == 0x2060C8u) {
        ctx->pc = 0x2060C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060C4u;
        // 0x2060c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060CCu;
        goto label_2060cc;
    }
    ctx->pc = 0x2060C4u;
    {
        const bool branch_taken_0x2060c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2060C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060C4u;
        // 0x2060c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060c4) {
            ctx->pc = 0x2060F4u;
            goto label_2060f4;
        }
    }
    ctx->pc = 0x2060CCu;
label_2060cc:
    // 0x2060cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_2060d0:
    if (ctx->pc == 0x2060D0u) {
        ctx->pc = 0x2060D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060CCu;
        // 0x2060d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060D4u;
        goto label_2060d4;
    }
    ctx->pc = 0x2060CCu;
    {
        const bool branch_taken_0x2060cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060CCu;
        // 0x2060d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060cc) {
            ctx->pc = 0x2060F4u;
            goto label_2060f4;
        }
    }
    ctx->pc = 0x2060D4u;
label_2060d4:
    // 0x2060d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2060d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2060d8:
    // 0x2060d8: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2060d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2060dc:
    // 0x2060dc: 0x40f809  jalr        $v0
label_2060e0:
    if (ctx->pc == 0x2060E0u) {
        ctx->pc = 0x2060E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060DCu;
        // 0x2060e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060E4u;
        goto label_2060e4;
    }
    ctx->pc = 0x2060DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2060E4u);
        ctx->pc = 0x2060E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060DCu;
        // 0x2060e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2060DCu, 0x2060E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2060E4u;
label_2060e4:
    // 0x2060e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2060e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2060e8:
    // 0x2060e8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2060ec:
    if (ctx->pc == 0x2060ECu) {
        ctx->pc = 0x2060ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060E8u;
        // 0x2060ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2060F0u;
        goto label_2060f0;
    }
    ctx->pc = 0x2060E8u;
    {
        const bool branch_taken_0x2060e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060E8u;
        // 0x2060ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060e8) {
            ctx->pc = 0x2060F4u;
            goto label_2060f4;
        }
    }
    ctx->pc = 0x2060F0u;
label_2060f0:
    // 0x2060f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2060f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2060f4:
    // 0x2060f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2060f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2060f8:
    // 0x2060f8: 0x3e00008  jr          $ra
label_2060fc:
    if (ctx->pc == 0x2060FCu) {
        ctx->pc = 0x2060FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060F8u;
        // 0x2060fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206100u;
        goto label_fallthrough_0x2060f8;
    }
    ctx->pc = 0x2060F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2060FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060F8u;
        // 0x2060fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2060F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2060f8:
    ctx->pc = 0x206100u;
}
