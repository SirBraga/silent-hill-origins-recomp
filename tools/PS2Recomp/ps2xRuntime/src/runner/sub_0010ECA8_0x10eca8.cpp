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

// Function: sub_0010ECA8
// Address: 0x10eca8 - 0x10ed08
void sub_0010ECA8_0x10eca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ECA8_0x10eca8");
#endif

    ctx->pc = 0x10eca8u;

    // 0x10eca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ecac: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10ECACu;
    {
        const bool branch_taken_0x10ecac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x10ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECACu;
        // 0x10ecb0: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecac) {
            ctx->pc = 0x10ECDCu;
            goto label_10ecdc;
        }
    }
    ctx->pc = 0x10ECB4u;
    // 0x10ecb4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10ECB4u;
    {
        const bool branch_taken_0x10ecb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ecb4) {
            ctx->pc = 0x10ECB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ECB4u;
            // 0x10ecb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ECCCu;
            goto label_10eccc;
        }
    }
    ctx->pc = 0x10ECBCu;
    // 0x10ecbc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10ECBCu;
    {
        const bool branch_taken_0x10ecbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ecbc) {
            ctx->pc = 0x10ECE4u;
            goto label_10ece4;
        }
    }
    ctx->pc = 0x10ECC4u;
    // 0x10ecc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10ECC4u;
    {
        const bool branch_taken_0x10ecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ecc4) {
            ctx->pc = 0x10ECF4u;
            goto label_10ecf4;
        }
    }
    ctx->pc = 0x10ECCCu;
label_10eccc:
    // 0x10eccc: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10ECCCu;
    {
        const bool branch_taken_0x10eccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10eccc) {
            ctx->pc = 0x10ECECu;
            goto label_10ecec;
        }
    }
    ctx->pc = 0x10ECD4u;
    // 0x10ecd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10ECD4u;
    {
        const bool branch_taken_0x10ecd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ecd4) {
            ctx->pc = 0x10ECF4u;
            goto label_10ecf4;
        }
    }
    ctx->pc = 0x10ECDCu;
label_10ecdc:
    // 0x10ecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x10ECDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECDCu;
        // 0x10ece0: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ECDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ECE4u;
label_10ece4:
    // 0x10ece4: 0x3e00008  jr          $ra
    ctx->pc = 0x10ECE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECE4u;
        // 0x10ece8: 0xc4800018  lwc1        $f0, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ECE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ECECu;
label_10ecec:
    // 0x10ecec: 0x3e00008  jr          $ra
    ctx->pc = 0x10ECECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECECu;
        // 0x10ecf0: 0xc480001c  lwc1        $f0, 0x1C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ECECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ECF4u;
label_10ecf4:
    // 0x10ecf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ecf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ecf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ecf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ecfc: 0x3e00008  jr          $ra
    ctx->pc = 0x10ECFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ECFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ED04u;
    // 0x10ed04: 0x0  nop
    ctx->pc = 0x10ed04u;
    // NOP
    ctx->pc = 0x10ed08u;
}
