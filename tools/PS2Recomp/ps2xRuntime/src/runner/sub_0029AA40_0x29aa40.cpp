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

// Function: sub_0029AA40
// Address: 0x29aa40 - 0x29aae8
void sub_0029AA40_0x29aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AA40_0x29aa40");
#endif

    switch (ctx->pc) {
        case 0x29aa64u: goto label_29aa64;
        case 0x29aa78u: goto label_29aa78;
        case 0x29aa9cu: goto label_29aa9c;
        case 0x29aab0u: goto label_29aab0;
        case 0x29aad4u: goto label_29aad4;
        default: break;
    }

    ctx->pc = 0x29aa40u;

    // 0x29aa40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29aa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29aa44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29aa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29aa48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29aa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29aa4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29aa4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa50: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x29aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29aa54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29aa58: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x29aa58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x29aa5c: 0xc0a7bd0  jal         func_29EF40
    ctx->pc = 0x29AA5Cu;
    SET_GPR_U32(ctx, 31, 0x29AA64u);
    ctx->pc = 0x29AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA5Cu;
    // 0x29aa60: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x29AA5Cu, 0x29AA64u)) {
        return;
    }
    ctx->pc = 0x29AA64u;
label_29aa64:
    // 0x29aa64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29aa64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29aa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aa6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29aa6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29aa70: 0x3e00008  jr          $ra
    ctx->pc = 0x29AA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA70u;
        // 0x29aa74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AA78u;
label_29aa78:
    // 0x29aa78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29aa7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29aa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29aa80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29aa84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29aa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa88: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x29aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29aa8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29aa90: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x29aa90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x29aa94: 0xc0a7bd0  jal         func_29EF40
    ctx->pc = 0x29AA94u;
    SET_GPR_U32(ctx, 31, 0x29AA9Cu);
    ctx->pc = 0x29AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA94u;
    // 0x29aa98: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x29AA94u, 0x29AA9Cu)) {
        return;
    }
    ctx->pc = 0x29AA9Cu;
label_29aa9c:
    // 0x29aa9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29aa9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aaa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29aaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aaa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29aaa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29aaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x29AAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAA8u;
        // 0x29aaac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AAB0u;
label_29aab0:
    // 0x29aab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29aab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29aab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29aab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29aabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29aabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aac0: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x29aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29aac4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29aac8: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x29aac8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x29aacc: 0xc0a7bd0  jal         func_29EF40
    ctx->pc = 0x29AACCu;
    SET_GPR_U32(ctx, 31, 0x29AAD4u);
    ctx->pc = 0x29AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AACCu;
    // 0x29aad0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EF40u, 0x29AACCu, 0x29AAD4u)) {
        return;
    }
    ctx->pc = 0x29AAD4u;
label_29aad4:
    // 0x29aad4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29aad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29aad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aadc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29aadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29aae0: 0x3e00008  jr          $ra
    ctx->pc = 0x29AAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAE0u;
        // 0x29aae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AAE8u;
}
