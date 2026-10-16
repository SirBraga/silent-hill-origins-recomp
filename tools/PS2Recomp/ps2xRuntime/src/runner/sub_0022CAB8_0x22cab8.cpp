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

// Function: sub_0022CAB8
// Address: 0x22cab8 - 0x22cb00
void sub_0022CAB8_0x22cab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CAB8_0x22cab8");
#endif

    switch (ctx->pc) {
        case 0x22caf0u: goto label_22caf0;
        default: break;
    }

    ctx->pc = 0x22cab8u;

label_22cab8:
    // 0x22cab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22cab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22cabc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CABCu;
    {
        const bool branch_taken_0x22cabc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CABCu;
        // 0x22cac0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cabc) {
            ctx->pc = 0x22CACCu;
            goto label_22cacc;
        }
    }
    ctx->pc = 0x22CAC4u;
    // 0x22cac4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22CAC4u;
    {
        const bool branch_taken_0x22cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAC4u;
        // 0x22cac8: 0x90820018  lbu         $v0, 0x18($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cac4) {
            ctx->pc = 0x22CAF0u;
            goto label_22caf0;
        }
    }
    ctx->pc = 0x22CACCu;
label_22cacc:
    // 0x22cacc: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x22caccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x22cad0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22cad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x22cad4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22cad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22cad8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22cad8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22cadc: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x22cadcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x22cae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cae4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22cae8: 0xc08b2ae  jal         func_22CAB8
    ctx->pc = 0x22CAE8u;
    SET_GPR_U32(ctx, 31, 0x22CAF0u);
    ctx->pc = 0x22CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CAE8u;
    // 0x22caec: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CAB8u;
    goto label_22cab8;
    ctx->pc = 0x22CAF0u;
label_22caf0:
    // 0x22caf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22caf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22caf4: 0x3e00008  jr          $ra
    ctx->pc = 0x22CAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAF4u;
        // 0x22caf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CAFCu;
    // 0x22cafc: 0x0  nop
    ctx->pc = 0x22cafcu;
    // NOP
    ctx->pc = 0x22cb00u;
}
