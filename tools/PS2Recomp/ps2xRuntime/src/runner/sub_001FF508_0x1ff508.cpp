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

// Function: sub_001FF508
// Address: 0x1ff508 - 0x1ff580
void sub_001FF508_0x1ff508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF508_0x1ff508");
#endif

    switch (ctx->pc) {
        case 0x1ff520u: goto label_1ff520;
        case 0x1ff544u: goto label_1ff544;
        default: break;
    }

    ctx->pc = 0x1ff508u;

    // 0x1ff508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff50c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff510: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FF510u;
    {
        const bool branch_taken_0x1ff510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF510u;
        // 0x1ff514: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff510) {
            ctx->pc = 0x1FF550u;
            goto label_1ff550;
        }
    }
    ctx->pc = 0x1FF518u;
    // 0x1ff518: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ff518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ff51c: 0x0  nop
    ctx->pc = 0x1ff51cu;
    // NOP
label_1ff520:
    // 0x1ff520: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF520u;
    {
        const bool branch_taken_0x1ff520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF520u;
        // 0x1ff524: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff520) {
            ctx->pc = 0x1FF544u;
            goto label_1ff544;
        }
    }
    ctx->pc = 0x1FF528u;
    // 0x1ff528: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff52c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FF52Cu;
    {
        const bool branch_taken_0x1ff52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff52c) {
            ctx->pc = 0x1FF530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF52Cu;
            // 0x1ff530: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF534u;
            goto label_1ff534;
        }
    }
    ctx->pc = 0x1FF534u;
label_1ff534:
    // 0x1ff534: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FF534u;
    {
        const bool branch_taken_0x1ff534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff534) {
            ctx->pc = 0x1FF538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF534u;
            // 0x1ff538: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF53Cu;
            goto label_1ff53c;
        }
    }
    ctx->pc = 0x1FF53Cu;
label_1ff53c:
    // 0x1ff53c: 0xc07fd88  jal         func_1FF620
    ctx->pc = 0x1FF53Cu;
    SET_GPR_U32(ctx, 31, 0x1FF544u);
    ctx->pc = 0x1FF620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF620u, 0x1FF53Cu, 0x1FF544u)) {
        return;
    }
    ctx->pc = 0x1FF544u;
label_1ff544:
    // 0x1ff544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff548: 0x5480fff5  bnel        $a0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FF548u;
    {
        const bool branch_taken_0x1ff548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff548) {
            ctx->pc = 0x1FF54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF548u;
            // 0x1ff54c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff520;
        }
    }
    ctx->pc = 0x1FF550u;
label_1ff550:
    // 0x1ff550: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff558: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF558u;
        // 0x1ff55c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF560u;
    // 0x1ff560: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ff564: 0x0  nop
    ctx->pc = 0x1ff564u;
    // NOP
    // 0x1ff568: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ff568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ff56c: 0x0  nop
    ctx->pc = 0x1ff56cu;
    // NOP
    // 0x1ff570: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ff570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ff574: 0x0  nop
    ctx->pc = 0x1ff574u;
    // NOP
    // 0x1ff578: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ff57c: 0x0  nop
    ctx->pc = 0x1ff57cu;
    // NOP
    ctx->pc = 0x1ff580u;
}
