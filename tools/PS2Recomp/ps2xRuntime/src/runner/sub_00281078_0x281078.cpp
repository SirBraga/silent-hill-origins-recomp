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

// Function: sub_00281078
// Address: 0x281078 - 0x281118
void sub_00281078_0x281078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281078_0x281078");
#endif

    switch (ctx->pc) {
        case 0x2810a8u: goto label_2810a8;
        case 0x2810e8u: goto label_2810e8;
        case 0x2810f4u: goto label_2810f4;
        case 0x2810fcu: goto label_2810fc;
        default: break;
    }

    ctx->pc = 0x281078u;

    // 0x281078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28107c: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x28107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x281080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281084: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x281084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281088: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x281088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28108c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28108cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281094: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x281094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x281098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28109c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x28109cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2810a0: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x2810a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2810a4: 0x0  nop
    ctx->pc = 0x2810a4u;
    // NOP
label_2810a8:
    // 0x2810a8: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x2810a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2810ac: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2810acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2810b0: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2810B0u;
    {
        const bool branch_taken_0x2810b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x2810B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810B0u;
        // 0x2810b4: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810b0) {
            ctx->pc = 0x2810C0u;
            goto label_2810c0;
        }
    }
    ctx->pc = 0x2810B8u;
    // 0x2810b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2810B8u;
    {
        const bool branch_taken_0x2810b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2810BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810B8u;
        // 0x2810bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810b8) {
            ctx->pc = 0x2810D4u;
            goto label_2810d4;
        }
    }
    ctx->pc = 0x2810C0u;
label_2810c0:
    // 0x2810c0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2810c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2810c4: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x2810c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2810c8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2810C8u;
    {
        const bool branch_taken_0x2810c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2810CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810C8u;
        // 0x2810cc: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810c8) {
            ctx->pc = 0x2810A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2810a8;
        }
    }
    ctx->pc = 0x2810D0u;
    // 0x2810d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2810d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2810d4:
    // 0x2810d4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x2810d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x2810d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2810d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810dc: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x2810dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x2810e0: 0xc0a0608  jal         func_281820
    ctx->pc = 0x2810E0u;
    SET_GPR_U32(ctx, 31, 0x2810E8u);
    ctx->pc = 0x2810E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810E0u;
    // 0x2810e4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281820u, 0x2810E0u, 0x2810E8u)) {
        return;
    }
    ctx->pc = 0x2810E8u;
label_2810e8:
    // 0x2810e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2810e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810ec: 0xc0a0608  jal         func_281820
    ctx->pc = 0x2810ECu;
    SET_GPR_U32(ctx, 31, 0x2810F4u);
    ctx->pc = 0x2810F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810ECu;
    // 0x2810f0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281820u, 0x2810ECu, 0x2810F4u)) {
        return;
    }
    ctx->pc = 0x2810F4u;
label_2810f4:
    // 0x2810f4: 0xc0a0588  jal         func_281620
    ctx->pc = 0x2810F4u;
    SET_GPR_U32(ctx, 31, 0x2810FCu);
    ctx->pc = 0x2810F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810F4u;
    // 0x2810f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281620u, 0x2810F4u, 0x2810FCu)) {
        return;
    }
    ctx->pc = 0x2810FCu;
label_2810fc:
    // 0x2810fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2810fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281100: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x281100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28110c: 0x3e00008  jr          $ra
    ctx->pc = 0x28110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28110Cu;
        // 0x281110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28110Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281114u;
    // 0x281114: 0x0  nop
    ctx->pc = 0x281114u;
    // NOP
    ctx->pc = 0x281118u;
}
