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

// Function: sub_002FA758
// Address: 0x2fa758 - 0x2fa7e8
void sub_002FA758_0x2fa758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA758_0x2fa758");
#endif

    switch (ctx->pc) {
        case 0x2fa798u: goto label_2fa798;
        case 0x2fa7c4u: goto label_2fa7c4;
        default: break;
    }

    ctx->pc = 0x2fa758u;

    // 0x2fa758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fa75c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2fa75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fa764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fa764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fa768: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FA768u;
    {
        const bool branch_taken_0x2fa768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA768u;
        // 0x2fa76c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa768) {
            ctx->pc = 0x2FA7C4u;
            goto label_2fa7c4;
        }
    }
    ctx->pc = 0x2FA770u;
    // 0x2fa770: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x2fa770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2fa774: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fa774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fa778: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA778u;
    {
        const bool branch_taken_0x2fa778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA778u;
        // 0x2fa77c: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa778) {
            ctx->pc = 0x2FA7A0u;
            goto label_2fa7a0;
        }
    }
    ctx->pc = 0x2FA780u;
    // 0x2fa780: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA780u;
    {
        const bool branch_taken_0x2fa780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa780) {
            ctx->pc = 0x2FA784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA780u;
            // 0x2fa784: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA78Cu;
            goto label_2fa78c;
        }
    }
    ctx->pc = 0x2FA788u;
    // 0x2fa788: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x2fa788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_2fa78c:
    // 0x2fa78c: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x2fa78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2fa790: 0xc0be7ee  jal         func_2F9FB8
    ctx->pc = 0x2FA790u;
    SET_GPR_U32(ctx, 31, 0x2FA798u);
    ctx->pc = 0x2FA794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA790u;
    // 0x2fa794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9FB8u, 0x2FA790u, 0x2FA798u)) {
        return;
    }
    ctx->pc = 0x2FA798u;
label_2fa798:
    // 0x2fa798: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FA798u;
    {
        const bool branch_taken_0x2fa798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA798u;
        // 0x2fa79c: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa798) {
            ctx->pc = 0x2FA7C8u;
            goto label_2fa7c8;
        }
    }
    ctx->pc = 0x2FA7A0u;
label_2fa7a0:
    // 0x2fa7a0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA7A0u;
    {
        const bool branch_taken_0x2fa7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa7a0) {
            ctx->pc = 0x2FA7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA7A0u;
            // 0x2fa7a4: 0x8e0501d8  lw          $a1, 0x1D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA7B4u;
            goto label_2fa7b4;
        }
    }
    ctx->pc = 0x2FA7A8u;
    // 0x2fa7a8: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x2fa7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x2fa7ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA7ACu;
    {
        const bool branch_taken_0x2fa7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7ACu;
        // 0x2fa7b0: 0x8e0601f4  lw          $a2, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7ac) {
            ctx->pc = 0x2FA7B8u;
            goto label_2fa7b8;
        }
    }
    ctx->pc = 0x2FA7B4u;
label_2fa7b4:
    // 0x2fa7b4: 0x8e0601e8  lw          $a2, 0x1E8($s0)
    ctx->pc = 0x2fa7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_2fa7b8:
    // 0x2fa7b8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2fa7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2fa7bc: 0xc0be89e  jal         func_2FA278
    ctx->pc = 0x2FA7BCu;
    SET_GPR_U32(ctx, 31, 0x2FA7C4u);
    ctx->pc = 0x2FA7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA7BCu;
    // 0x2fa7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FA278u, 0x2FA7BCu, 0x2FA7C4u)) {
        return;
    }
    ctx->pc = 0x2FA7C4u;
label_2fa7c4:
    // 0x2fa7c4: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x2fa7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2fa7c8:
    // 0x2fa7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa7cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA7CCu;
    {
        const bool branch_taken_0x2fa7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7CCu;
        // 0x2fa7d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7cc) {
            ctx->pc = 0x2FA7DCu;
            goto label_2fa7dc;
        }
    }
    ctx->pc = 0x2FA7D4u;
    // 0x2fa7d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa7d8: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x2fa7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_2fa7dc:
    // 0x2fa7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7E0u;
        // 0x2fa7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA7E8u;
}
