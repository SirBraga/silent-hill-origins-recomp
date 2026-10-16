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

// Function: sub_003217B0
// Address: 0x3217b0 - 0x321840
void sub_003217B0_0x3217b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003217B0_0x3217b0");
#endif

    switch (ctx->pc) {
        case 0x3217c0u: goto label_3217c0;
        case 0x3217e4u: goto label_3217e4;
        case 0x3217f0u: goto label_3217f0;
        case 0x321814u: goto label_321814;
        default: break;
    }

    ctx->pc = 0x3217b0u;

    // 0x3217b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3217b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3217b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3217b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3217b8: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x3217B8u;
    SET_GPR_U32(ctx, 31, 0x3217C0u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x3217B8u, 0x3217C0u)) {
        return;
    }
    ctx->pc = 0x3217C0u;
label_3217c0:
    // 0x3217c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3217c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3217c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3217c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3217c8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3217c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3217cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3217ccu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x3217d0: 0xf  sync
    ctx->pc = 0x3217d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3217d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3217D4u;
    {
        const bool branch_taken_0x3217d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3217D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217D4u;
        // 0x3217d8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217d4) {
            ctx->pc = 0x3217E8u;
            goto label_3217e8;
        }
    }
    ctx->pc = 0x3217DCu;
    // 0x3217dc: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x3217DCu;
    SET_GPR_U32(ctx, 31, 0x3217E4u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x3217DCu, 0x3217E4u)) {
        return;
    }
    ctx->pc = 0x3217E4u;
label_3217e4:
    // 0x3217e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3217e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3217e8:
    // 0x3217e8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3217e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3217ec: 0x0  nop
    ctx->pc = 0x3217ecu;
    // NOP
label_3217f0:
    // 0x3217f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3217f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x3217f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3217f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3217f8: 0x0  nop
    ctx->pc = 0x3217f8u;
    // NOP
    // 0x3217fc: 0x0  nop
    ctx->pc = 0x3217fcu;
    // NOP
    // 0x321800: 0x0  nop
    ctx->pc = 0x321800u;
    // NOP
    // 0x321804: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x321804u;
    {
        const bool branch_taken_0x321804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321804) {
            ctx->pc = 0x3217F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3217f0;
        }
    }
    ctx->pc = 0x32180Cu;
    // 0x32180c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x32180Cu;
    SET_GPR_U32(ctx, 31, 0x321814u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x32180Cu, 0x321814u)) {
        return;
    }
    ctx->pc = 0x321814u;
label_321814:
    // 0x321814: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x321814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x321818: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x321818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32181c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x32181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x321820: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x321820u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x321824: 0xf  sync
    ctx->pc = 0x321824u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x321828: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321828u;
    {
        const bool branch_taken_0x321828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321828u;
        // 0x32182c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321828) {
            ctx->pc = 0x321838u;
            goto label_321838;
        }
    }
    ctx->pc = 0x321830u;
    // 0x321830: 0x80c9bb8  j           func_326EE0
    ctx->pc = 0x321830u;
    ctx->pc = 0x321834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321830u;
    // 0x321834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    sub_00326EE0_0x326ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x321838u;
label_321838:
    // 0x321838: 0x3e00008  jr          $ra
    ctx->pc = 0x321838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321838u;
        // 0x32183c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321840u;
}
