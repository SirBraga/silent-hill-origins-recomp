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

// Function: sub_00281220
// Address: 0x281220 - 0x281290
void sub_00281220_0x281220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281220_0x281220");
#endif

    switch (ctx->pc) {
        case 0x281238u: goto label_281238;
        default: break;
    }

    ctx->pc = 0x281220u;

    // 0x281220: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x281220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x281224: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x281224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x281228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28122c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281230: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x281230u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281234: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x281234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_281238:
    // 0x281238: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x281238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x28123c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x28123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x281240: 0x54690003  bnel        $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281240u;
    {
        const bool branch_taken_0x281240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x281240) {
            ctx->pc = 0x281244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281240u;
            // 0x281244: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281250u;
            goto label_281250;
        }
    }
    ctx->pc = 0x281248u;
    // 0x281248: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281248u;
    {
        const bool branch_taken_0x281248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281248u;
        // 0x28124c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281248) {
            ctx->pc = 0x281264u;
            goto label_281264;
        }
    }
    ctx->pc = 0x281250u;
label_281250:
    // 0x281250: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x281250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281254: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x281254u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x281258: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x281258u;
    {
        const bool branch_taken_0x281258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281258u;
        // 0x28125c: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281258) {
            ctx->pc = 0x281238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281238;
        }
    }
    ctx->pc = 0x281260u;
    // 0x281260: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x281260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281264:
    // 0x281264: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281264u;
    {
        const bool branch_taken_0x281264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x281264) {
            ctx->pc = 0x281274u;
            goto label_281274;
        }
    }
    ctx->pc = 0x28126Cu;
    // 0x28126c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281270: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x281270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_281274:
    // 0x281274: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x281274u;
    {
        const bool branch_taken_0x281274 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x281274) {
            ctx->pc = 0x281284u;
            goto label_281284;
        }
    }
    ctx->pc = 0x28127Cu;
    // 0x28127c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x281280: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x281280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_281284:
    // 0x281284: 0x3e00008  jr          $ra
    ctx->pc = 0x281284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281284u;
        // 0x281288: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28128Cu;
    // 0x28128c: 0x0  nop
    ctx->pc = 0x28128cu;
    // NOP
    ctx->pc = 0x281290u;
}
