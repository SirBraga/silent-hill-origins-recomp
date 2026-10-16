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

// Function: sub_00151F80
// Address: 0x151f80 - 0x151fe0
void sub_00151F80_0x151f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151F80_0x151f80");
#endif

    ctx->pc = 0x151f80u;

    // 0x151f80: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x151f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x151f84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151F84u;
    {
        const bool branch_taken_0x151f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F84u;
        // 0x151f88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f84) {
            ctx->pc = 0x151F98u;
            goto label_151f98;
        }
    }
    ctx->pc = 0x151F8Cu;
    // 0x151f8c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x151f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x151f90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151f94: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x151f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_151f98:
    // 0x151f98: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x151f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x151f9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x151F9Cu;
    {
        const bool branch_taken_0x151f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f9c) {
            ctx->pc = 0x151FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151F9Cu;
            // 0x151fa0: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FB4u;
            goto label_151fb4;
        }
    }
    ctx->pc = 0x151FA4u;
    // 0x151fa4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x151fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x151fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151fac: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x151facu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x151fb0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x151fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_151fb4:
    // 0x151fb4: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x151fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x151fb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x151fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x151fbc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x151fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x151fc0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x151fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x151fc4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x151fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151fc8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x151fc8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x151fcc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x151fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x151fd0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x151fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x151FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FD4u;
        // 0x151fd8: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151FDCu;
    // 0x151fdc: 0x0  nop
    ctx->pc = 0x151fdcu;
    // NOP
    ctx->pc = 0x151fe0u;
}
