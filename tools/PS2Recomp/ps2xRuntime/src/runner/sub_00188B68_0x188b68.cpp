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

// Function: sub_00188B68
// Address: 0x188b68 - 0x188bd8
void sub_00188B68_0x188b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188B68_0x188b68");
#endif

    switch (ctx->pc) {
        case 0x188b7cu: goto label_188b7c;
        default: break;
    }

    ctx->pc = 0x188b68u;

    // 0x188b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188b6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x188b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x188b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188b74: 0xc0622f6  jal         func_188BD8
    ctx->pc = 0x188B74u;
    SET_GPR_U32(ctx, 31, 0x188B7Cu);
    ctx->pc = 0x188B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B74u;
    // 0x188b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188BD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188BD8u, 0x188B74u, 0x188B7Cu)) {
        return;
    }
    ctx->pc = 0x188B7Cu;
label_188b7c:
    // 0x188b7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x188b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b80: 0x4620011  bltzl       $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x188B80u;
    {
        const bool branch_taken_0x188b80 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x188b80) {
            ctx->pc = 0x188B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B80u;
            // 0x188b84: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188BC8u;
            goto label_188bc8;
        }
    }
    ctx->pc = 0x188B88u;
    // 0x188b88: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x188b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x188b8c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x188b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x188b90: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188B90u;
    {
        const bool branch_taken_0x188b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x188B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B90u;
        // 0x188b94: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b90) {
            ctx->pc = 0x188BACu;
            goto label_188bac;
        }
    }
    ctx->pc = 0x188B98u;
    // 0x188b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x188b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x188b9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x188b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x188ba0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x188ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x188ba4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x188ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ba8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x188ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_188bac:
    // 0x188bac: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x188bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x188bb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x188bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x188bb4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x188bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x188bb8: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x188bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x188bbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x188bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x188bc0: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x188bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x188bc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x188bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_188bc8:
    // 0x188bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x188BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BCCu;
        // 0x188bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188BD4u;
    // 0x188bd4: 0x0  nop
    ctx->pc = 0x188bd4u;
    // NOP
    ctx->pc = 0x188bd8u;
}
