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

// Function: sub_0013D660
// Address: 0x13d660 - 0x13d700
void sub_0013D660_0x13d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D660_0x13d660");
#endif

    switch (ctx->pc) {
        case 0x13d690u: goto label_13d690;
        case 0x13d6ccu: goto label_13d6cc;
        default: break;
    }

    ctx->pc = 0x13d660u;

    // 0x13d660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d664: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x13d668: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13d66c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13d66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13d670: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13d674: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13d674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d678: 0x8c508420  lw          $s0, -0x7BE0($v0)
    ctx->pc = 0x13d678u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x338420u));
    // 0x13d67c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13d67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d680: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13D680u;
    {
        const bool branch_taken_0x13d680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D680u;
        // 0x13d684: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d680) {
            ctx->pc = 0x13D6E0u;
            goto label_13d6e0;
        }
    }
    ctx->pc = 0x13D688u;
    // 0x13d688: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x13d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x13d68c: 0x0  nop
    ctx->pc = 0x13d68cu;
    // NOP
label_13d690:
    // 0x13d690: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x13D690u;
    {
        const bool branch_taken_0x13d690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d690) {
            ctx->pc = 0x13D694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D690u;
            // 0x13d694: 0x8e10018c  lw          $s0, 0x18C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D6D8u;
            goto label_13d6d8;
        }
    }
    ctx->pc = 0x13D698u;
    // 0x13d698: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x13d698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x13d69c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13D69Cu;
    {
        const bool branch_taken_0x13d69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d69c) {
            ctx->pc = 0x13D6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D69Cu;
            // 0x13d6a0: 0x8e10018c  lw          $s0, 0x18C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D6D8u;
            goto label_13d6d8;
        }
    }
    ctx->pc = 0x13D6A4u;
    // 0x13d6a4: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x13d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x13d6a8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13D6A8u;
    {
        const bool branch_taken_0x13d6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d6a8) {
            ctx->pc = 0x13D6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D6A8u;
            // 0x13d6ac: 0x8e10018c  lw          $s0, 0x18C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D6D8u;
            goto label_13d6d8;
        }
    }
    ctx->pc = 0x13D6B0u;
    // 0x13d6b0: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x13d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x13d6b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13D6B4u;
    {
        const bool branch_taken_0x13d6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d6b4) {
            ctx->pc = 0x13D6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D6B4u;
            // 0x13d6b8: 0x8e10018c  lw          $s0, 0x18C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D6D8u;
            goto label_13d6d8;
        }
    }
    ctx->pc = 0x13D6BCu;
    // 0x13d6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d6c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13d6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d6c4: 0xc04f484  jal         func_13D210
    ctx->pc = 0x13D6C4u;
    SET_GPR_U32(ctx, 31, 0x13D6CCu);
    ctx->pc = 0x13D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D6C4u;
    // 0x13d6c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13D210u, 0x13D6C4u, 0x13D6CCu)) {
        return;
    }
    ctx->pc = 0x13D6CCu;
label_13d6cc:
    // 0x13d6cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D6CCu;
    {
        const bool branch_taken_0x13d6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6CCu;
        // 0x13d6d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6cc) {
            ctx->pc = 0x13D6E4u;
            goto label_13d6e4;
        }
    }
    ctx->pc = 0x13D6D4u;
    // 0x13d6d4: 0x8e10018c  lw          $s0, 0x18C($s0)
    ctx->pc = 0x13d6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
label_13d6d8:
    // 0x13d6d8: 0x5600ffed  bnel        $s0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13D6D8u;
    {
        const bool branch_taken_0x13d6d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d6d8) {
            ctx->pc = 0x13D6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D6D8u;
            // 0x13d6dc: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d690;
        }
    }
    ctx->pc = 0x13D6E0u;
label_13d6e0:
    // 0x13d6e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d6e4:
    // 0x13d6e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13d6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d6e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13d6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d6ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13d6ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D6F4u;
        // 0x13d6f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D6FCu;
    // 0x13d6fc: 0x0  nop
    ctx->pc = 0x13d6fcu;
    // NOP
    ctx->pc = 0x13d700u;
}
