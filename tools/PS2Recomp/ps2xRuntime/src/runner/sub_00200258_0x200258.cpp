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

// Function: sub_00200258
// Address: 0x200258 - 0x2002c8
void sub_00200258_0x200258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200258_0x200258");
#endif

    switch (ctx->pc) {
        case 0x200288u: goto label_200288;
        case 0x200290u: goto label_200290;
        default: break;
    }

    ctx->pc = 0x200258u;

label_200258:
    // 0x200258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x200258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20025c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x200260: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x200260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x200264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x200264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200268: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x200268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20026c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20026cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200270: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x200270u;
    {
        const bool branch_taken_0x200270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200270u;
        // 0x200274: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200270) {
            ctx->pc = 0x2002ACu;
            goto label_2002ac;
        }
    }
    ctx->pc = 0x200278u;
    // 0x200278: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x200278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x20027c: 0x24518290  addiu       $s1, $v0, -0x7D70
    ctx->pc = 0x20027cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x200280: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x200280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x200284: 0x0  nop
    ctx->pc = 0x200284u;
    // NOP
label_200288:
    // 0x200288: 0xc080096  jal         func_200258
    ctx->pc = 0x200288u;
    SET_GPR_U32(ctx, 31, 0x200290u);
    ctx->pc = 0x20028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200288u;
    // 0x20028c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200258u;
    goto label_200258;
    ctx->pc = 0x200290u;
label_200290:
    // 0x200290: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x200290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x200294: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x200294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200298: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x200298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20029c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x20029cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x2002a0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2002a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002a4: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2002A4u;
    {
        const bool branch_taken_0x2002a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2002a4) {
            ctx->pc = 0x2002A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2002A4u;
            // 0x2002a8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200288;
        }
    }
    ctx->pc = 0x2002ACu;
label_2002ac:
    // 0x2002ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2002acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2002b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2002b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2002b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2002b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2002b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2002b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2002bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2002BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2002C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002BCu;
        // 0x2002c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2002BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2002C4u;
    // 0x2002c4: 0x0  nop
    ctx->pc = 0x2002c4u;
    // NOP
    ctx->pc = 0x2002c8u;
}
