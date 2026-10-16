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

// Function: sub_001FC320
// Address: 0x1fc320 - 0x1fc3c8
void sub_001FC320_0x1fc320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC320_0x1fc320");
#endif

    switch (ctx->pc) {
        case 0x1fc340u: goto label_1fc340;
        default: break;
    }

    ctx->pc = 0x1fc320u;

    // 0x1fc320: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc324: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc328: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FC328u;
    {
        const bool branch_taken_0x1fc328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC328u;
        // 0x1fc32c: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc328) {
            ctx->pc = 0x1FC3C0u;
            goto label_1fc3c0;
        }
    }
    ctx->pc = 0x1FC330u;
    // 0x1fc330: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x1fc330u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x1fc334: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1fc334u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1fc338: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1fc338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc33c: 0x0  nop
    ctx->pc = 0x1fc33cu;
    // NOP
label_1fc340:
    // 0x1fc340: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1fc340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1fc344: 0x10670016  beq         $v1, $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FC344u;
    {
        const bool branch_taken_0x1fc344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1FC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC344u;
        // 0x1fc348: 0xe3102b  sltu        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc344) {
            ctx->pc = 0x1FC3A0u;
            goto label_1fc3a0;
        }
    }
    ctx->pc = 0x1FC34Cu;
    // 0x1fc34c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC34Cu;
    {
        const bool branch_taken_0x1fc34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc34c) {
            ctx->pc = 0x1FC364u;
            goto label_1fc364;
        }
    }
    ctx->pc = 0x1FC354u;
    // 0x1fc354: 0x50690013  beql        $v1, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC354u;
    {
        const bool branch_taken_0x1fc354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x1fc354) {
            ctx->pc = 0x1FC358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC354u;
            // 0x1fc358: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC3A4u;
            goto label_1fc3a4;
        }
    }
    ctx->pc = 0x1FC35Cu;
    // 0x1fc35c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FC35Cu;
    {
        const bool branch_taken_0x1fc35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc35c) {
            ctx->pc = 0x1FC398u;
            goto label_1fc398;
        }
    }
    ctx->pc = 0x1FC364u;
label_1fc364:
    // 0x1fc364: 0x1468000c  bne         $v1, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC364u;
    {
        const bool branch_taken_0x1fc364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1fc364) {
            ctx->pc = 0x1FC398u;
            goto label_1fc398;
        }
    }
    ctx->pc = 0x1FC36Cu;
    // 0x1fc36c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fc36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fc370: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1fc370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fc374: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC374u;
    {
        const bool branch_taken_0x1fc374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fc374) {
            ctx->pc = 0x1FC378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC374u;
            // 0x1fc378: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC38Cu;
            goto label_1fc38c;
        }
    }
    ctx->pc = 0x1FC37Cu;
    // 0x1fc37c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fc380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fc380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc384: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC384u;
    {
        const bool branch_taken_0x1fc384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC384u;
        // 0x1fc388: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc384) {
            ctx->pc = 0x1FC3ACu;
            goto label_1fc3ac;
        }
    }
    ctx->pc = 0x1FC38Cu;
label_1fc38c:
    // 0x1fc38c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc390: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC390u;
    {
        const bool branch_taken_0x1fc390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC390u;
        // 0x1fc394: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc390) {
            ctx->pc = 0x1FC3ACu;
            goto label_1fc3ac;
        }
    }
    ctx->pc = 0x1FC398u;
label_1fc398:
    // 0x1fc398: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC398u;
    {
        const bool branch_taken_0x1fc398 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc398) {
            ctx->pc = 0x1FC3C0u;
            goto label_1fc3c0;
        }
    }
    ctx->pc = 0x1FC3A0u;
label_1fc3a0:
    // 0x1fc3a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc3a4:
    // 0x1fc3a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc3a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc3ac:
    // 0x1fc3ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fc3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fc3b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc3b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fc3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc3b8: 0x5460ffe1  bnel        $v1, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FC3B8u;
    {
        const bool branch_taken_0x1fc3b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc3b8) {
            ctx->pc = 0x1FC3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC3B8u;
            // 0x1fc3bc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc340;
        }
    }
    ctx->pc = 0x1FC3C0u;
label_1fc3c0:
    // 0x1fc3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC3C8u;
}
